#include "uthash_FNV.h"
#include <stdlib.h>   /* malloc */
#include <klee/klee.h>
#include <assert.h>
// BEGIN HARNESS
void reach_error() {
  assert(0);
}

void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}
// END HARNESS


typedef struct example_user_t {
    int id;
    klee_make_symbolic(&id, sizeof(int), "id");
    int cookie;
    klee_make_symbolic(&cookie, sizeof(int), "cookie");
    UT_hash_handle hh;
} example_user_t;

int main()
{
    int i;
    klee_make_symbolic(&i, sizeof(int), "i");
    example_user_t *user, *tmp, *users=NULL;

    /* create elements */
    for(i=0; i<1000; i++) {
        user = (example_user_t*)malloc(sizeof(example_user_t));
        if (user == NULL) {
            exit(-1);
        }
        user->id = i;
        user->cookie = i*i;
        HASH_ADD_INT(users,id,user);
    }

    /* delete each ID */
    for(i=0; i<1000; i++) {
        HASH_FIND_INT(users,&i,tmp);
        if (tmp != NULL) {
            HASH_DEL(users,tmp);
            free(tmp);
        } else {
            reach_error();
        }
    }

    /* show the hash */
    for(user=users; user != NULL; user=(example_user_t*)(user->hh.next)) {
        reach_error();
    }
    return 0;
}