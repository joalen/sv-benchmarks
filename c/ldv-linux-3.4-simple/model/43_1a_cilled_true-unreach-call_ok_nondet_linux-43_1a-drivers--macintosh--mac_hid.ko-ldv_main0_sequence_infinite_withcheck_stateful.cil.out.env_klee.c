#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: input_close_device
// with type: void input_close_device(struct input_handle *)
// with return type: void
void input_close_device(struct input_handle *arg0) {
  // Void type
  return;
}

// Function: input_event
// with type: void input_event(struct input_dev *, unsigned int, unsigned int, int)
// with return type: void
void input_event(struct input_dev *arg0, unsigned int arg1, unsigned int arg2, int arg3) {
  // Void type
  return;
}

// Function: input_free_device
// with type: void input_free_device(struct input_dev *)
// with return type: void
void input_free_device(struct input_dev *arg0) {
  // Void type
  return;
}

// Function: input_open_device
// with type: int input_open_device(struct input_handle *)
// with return type: int
int __VERIFIER_nondet_int(void);
int input_open_device(struct input_handle *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: input_register_device
// with type: int input_register_device(struct input_dev *)
// with return type: int
int __VERIFIER_nondet_int(void);
int input_register_device(struct input_dev *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: input_register_handle
// with type: int input_register_handle(struct input_handle *)
// with return type: int
int __VERIFIER_nondet_int(void);
int input_register_handle(struct input_handle *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: input_register_handler
// with type: int input_register_handler(struct input_handler *)
// with return type: int
int __VERIFIER_nondet_int(void);
int input_register_handler(struct input_handler *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: input_unregister_device
// with type: void input_unregister_device(struct input_dev *)
// with return type: void
void input_unregister_device(struct input_dev *arg0) {
  // Void type
  return;
}

// Function: input_unregister_handle
// with type: void input_unregister_handle(struct input_handle *)
// with return type: void
void input_unregister_handle(struct input_handle *arg0) {
  // Void type
  return;
}

// Function: input_unregister_handler
// with type: void input_unregister_handler(struct input_handler *)
// with return type: void
void input_unregister_handler(struct input_handler *arg0) {
  // Void type
  return;
}
extern _Bool __VERIFIER_nondet_bool(void) ;
extern void *malloc(size_t) ;
void *ldv_malloc(size_t size )
{
  if(__VERIFIER_nondet_bool()) return 0;
  return malloc(size);
}

// Skip function: kfree

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

// Function: ldv_check_return_value
// with type: void ldv_check_return_value(int)
// with return type: void
void ldv_check_return_value(int arg0) {
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
  return ldv_malloc(0UL);
}

// Function: lockdep_init_map
// with type: void lockdep_init_map(struct lockdep_map *, const char *, struct lock_class_key *, int)
// with return type: void
void lockdep_init_map(struct lockdep_map *arg0, const char *arg1, struct lock_class_key *arg2, int arg3) {
  // Void type
  return;
}

// Function: mutex_lock_killable_nested
// with type: int mutex_lock_killable_nested(struct mutex *, unsigned int)
// with return type: int
int __VERIFIER_nondet_int(void);
int mutex_lock_killable_nested(struct mutex *arg0, unsigned int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: mutex_unlock
// with type: void mutex_unlock(struct mutex *)
// with return type: void
void mutex_unlock(struct mutex *arg0) {
  // Void type
  return;
}

// Function: printk
// with type: int printk(const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int printk(const char *arg0, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: proc_dointvec
// with type: int proc_dointvec(struct ctl_table *, int, void *, size_t *, loff_t *)
// with return type: int
int __VERIFIER_nondet_int(void);
int proc_dointvec(struct ctl_table *arg0, int arg1, void *arg2, size_t *arg3, loff_t *arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: register_sysctl_table
// with type: struct ctl_table_header *register_sysctl_table(struct ctl_table *)
// with return type: (struct ctl_table_header)*
struct ctl_table_header *register_sysctl_table(struct ctl_table *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct ctl_table_header));
}

// Function: unregister_sysctl_table
// with type: void unregister_sysctl_table(struct ctl_table_header *)
// with return type: void
void unregister_sysctl_table(struct ctl_table_header *arg0) {
  // Void type
  return;
}

