#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: dev_err
// with type: int dev_err(const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_err(const struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}
extern _Bool __VERIFIER_nondet_bool(void) ;
extern void *malloc(size_t) ;
void *ldv_malloc(size_t size )
{
  if(__VERIFIER_nondet_bool()) return 0;
  return malloc(size);
}

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

// Function: tty_encode_baud_rate
// with type: void tty_encode_baud_rate(struct tty_struct *, speed_t , speed_t )
// with return type: void
void tty_encode_baud_rate(struct tty_struct *arg0, speed_t arg1, speed_t arg2) {
  // Void type
  return;
}

// Function: usb_reset_configuration
// with type: int usb_reset_configuration(struct usb_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_reset_configuration(struct usb_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

