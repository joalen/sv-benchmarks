#include <klee/klee.h>
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

// Function: __might_sleep
// with type: void __might_sleep(const char *, int, int)
// with return type: void
void __might_sleep(const char *arg0, int arg1, int arg2) {
  // Void type
  return;
}

// Function: _dev_info
// with type: int _dev_info(const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int _dev_info(const struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

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

// Function: mmc_add_host
// with type: int mmc_add_host(struct mmc_host *)
// with return type: int
int __VERIFIER_nondet_int(void);
int mmc_add_host(struct mmc_host *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: mmc_alloc_host
// with type: struct mmc_host *mmc_alloc_host(int, struct device *)
// with return type: (struct mmc_host)*
struct mmc_host *mmc_alloc_host(int arg0, struct device *arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct mmc_host));
}

// Function: mmc_free_host
// with type: void mmc_free_host(struct mmc_host *)
// with return type: void
void mmc_free_host(struct mmc_host *arg0) {
  // Void type
  return;
}

// Function: mmc_remove_host
// with type: void mmc_remove_host(struct mmc_host *)
// with return type: void
void mmc_remove_host(struct mmc_host *arg0) {
  // Void type
  return;
}

// Function: mmc_request_done
// with type: void mmc_request_done(struct mmc_host *, struct mmc_request *)
// with return type: void
void mmc_request_done(struct mmc_host *arg0, struct mmc_request *arg1) {
  // Void type
  return;
}

// Function: mmc_resume_host
// with type: int mmc_resume_host(struct mmc_host *)
// with return type: int
int __VERIFIER_nondet_int(void);
int mmc_resume_host(struct mmc_host *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: mmc_suspend_host
// with type: int mmc_suspend_host(struct mmc_host *)
// with return type: int
int __VERIFIER_nondet_int(void);
int mmc_suspend_host(struct mmc_host *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_dev_put
// with type: void pci_dev_put(struct pci_dev *)
// with return type: void
void pci_dev_put(struct pci_dev *arg0) {
  // Void type
  return;
}

// Function: pci_get_device
// with type: struct pci_dev *pci_get_device(unsigned int, unsigned int, struct pci_dev *)
// with return type: (struct pci_dev)*
struct pci_dev *pci_get_device(unsigned int arg0, unsigned int arg1, struct pci_dev *arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct pci_dev));
}

// Function: pci_iomap
// with type: void *pci_iomap(struct pci_dev *, int, unsigned long)
// with return type: (void)*
void *pci_iomap(struct pci_dev *arg0, int arg1, unsigned long arg2) {
  // Pointer type
  return ldv_malloc(arg2);
}

// Function: pci_iounmap
// with type: void pci_iounmap(struct pci_dev *, void *)
// with return type: void
void pci_iounmap(struct pci_dev *arg0, void *arg1) {
  // Void type
  return;
}

// Function: pcmcia_disable_device
// with type: void pcmcia_disable_device(struct pcmcia_device *)
// with return type: void
void pcmcia_disable_device(struct pcmcia_device *arg0) {
  // Void type
  return;
}

// Function: pcmcia_register_driver
// with type: int pcmcia_register_driver(struct pcmcia_driver *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pcmcia_register_driver(struct pcmcia_driver *arg0) {
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

