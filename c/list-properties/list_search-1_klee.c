extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}
#include <klee/klee.h>
#include <stdlib.h>
typedef struct list {
	int key;
    klee_make_symbolic(&key, sizeof(int), "key");
	struct list *next;
} mlist;

mlist *head;

mlist* search_list(mlist *l, int k){
  l = head;
  while(l!=NULL && l->key!=k) {
    l = l->next;
  }
  return l;
}

int insert_list(mlist *l, int k){
  l = (mlist*)malloc(sizeof(mlist));
  l->key = k;
  if (head==NULL) {
    l->next = NULL;
  } else {
    l->key = k;
    l->next = head;
  }
  head = l;	
  return 0;	
}

int main(void){
  int i;
    klee_make_symbolic(&i, sizeof(int), "i");
  mlist *mylist, *temp;
  insert_list(mylist,2);
  insert_list(mylist,5);
  insert_list(mylist,1);
  insert_list(mylist,3);
  temp = search_list(head,2);
  __VERIFIER_assert(temp->key==1);

  while(head!=0) {
    mlist *tmp = head->next;
    free(head);
    head = tmp;
  }
}

