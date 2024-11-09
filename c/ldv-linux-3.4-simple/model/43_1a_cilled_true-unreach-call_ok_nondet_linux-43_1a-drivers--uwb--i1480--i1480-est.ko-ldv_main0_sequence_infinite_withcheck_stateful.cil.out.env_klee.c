#include <klee/klee.h>
extern _Bool __VERIFIER_nondet_bool(void) ;
extern void *malloc(size_t) ;
void *ldv_malloc(size_t size )
{
  if(__VERIFIER_nondet_bool()) return 0;
  return malloc(size);
}
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: kmem_cache_alloc
// with type: void *kmem_cache_alloc(struct kmem_cache *, gfp_t )
// with return type: (void)*
void *kmem_cache_alloc(struct kmem_cache *arg0, gfp_t arg1) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: ldv_check_final_state
// with type: void ldv_check_final_state()
// with return type: void
void ldv_check_final_state() {
  // Void type
  return;
}

// Function: ldv_initialize
// with type: void ldv_initialize()
// with return type: void
void ldv_initialize() {
  // Void type
  return;
}

// Function: ldv_some_page
// with type: struct page *ldv_some_page()
// with return type: (struct page)*
struct page *ldv_some_page() {
  // Pointer type
  return ldv_malloc(sizeof(struct page));
}

// Function: printk
// with type: int printk(const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int printk(const char *arg0, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: uwb_est_register
// with type: int uwb_est_register(u8 , u8 , u16 , u16 , const struct uwb_est_entry *, size_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int uwb_est_register(u8 arg0, u8 arg1, u16 arg2, u16 arg3, const struct uwb_est_entry *arg4, size_t arg5) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: uwb_est_unregister
// with type: int uwb_est_unregister(u8 , u8 , u16 , u16 , const struct uwb_est_entry *, size_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int uwb_est_unregister(u8 arg0, u8 arg1, u16 arg2, u16 arg3, const struct uwb_est_entry *arg4, size_t arg5) {
  // Simple type
  return __VERIFIER_nondet_int();
}

