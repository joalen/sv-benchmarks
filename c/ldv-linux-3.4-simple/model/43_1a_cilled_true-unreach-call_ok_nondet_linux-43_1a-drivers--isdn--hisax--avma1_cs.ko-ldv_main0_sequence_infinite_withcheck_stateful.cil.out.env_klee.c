#include <klee/klee.h>
// Function: HiSax_closecard
// with type: void HiSax_closecard(int)
// with return type: void
void HiSax_closecard(int arg0) {
  // Void type
  return;
}

// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __dynamic_dev_dbg
// with type: int __dynamic_dev_dbg(struct _ddebug *, const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int __dynamic_dev_dbg(struct _ddebug *arg0, const struct device *arg1, const char *arg2, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: hisax_init_pcmcia
// with type: int hisax_init_pcmcia(void *, int *, IsdnCard_t *)
// with return type: int
int __VERIFIER_nondet_int(void);
int hisax_init_pcmcia(void *arg0, int *arg1, IsdnCard_t *arg2) {
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
  return ldv_malloc(sizeof(struct page));
}

// Function: pcmcia_disable_device
// with type: void pcmcia_disable_device(struct pcmcia_device *)
// with return type: void
void pcmcia_disable_device(struct pcmcia_device *arg0) {
  // Void type
  return;
}

// Function: pcmcia_enable_device
// with type: int pcmcia_enable_device(struct pcmcia_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pcmcia_enable_device(struct pcmcia_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pcmcia_loop_config
// with type: int pcmcia_loop_config(struct pcmcia_device *, int (*)(struct pcmcia_device *, void *), void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pcmcia_loop_config(struct pcmcia_device *arg0, int (*arg1)(struct pcmcia_device *, void *), void *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pcmcia_register_driver
// with type: int pcmcia_register_driver(struct pcmcia_driver *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pcmcia_register_driver(struct pcmcia_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pcmcia_request_io
// with type: int pcmcia_request_io(struct pcmcia_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pcmcia_request_io(struct pcmcia_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pcmcia_unregister_driver
// with type: void pcmcia_unregister_driver(struct pcmcia_driver *)
// with return type: void
void pcmcia_unregister_driver(struct pcmcia_driver *arg0) {
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

// Function: strlcpy
// with type: size_t strlcpy(char *, const char *, size_t )
// with return type: size_t 
unsigned long __VERIFIER_nondet_ulong(void);
size_t strlcpy(char *arg0, const char *arg1, size_t arg2) {
  // Typedef type
  // Real type: __kernel_size_t 
  // Typedef type
  // Real type: __kernel_ulong_t 
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
}

