#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __pci_register_driver
// with type: int __pci_register_driver(struct pci_driver *, struct module *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int __pci_register_driver(struct pci_driver *arg0, struct module *arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ata_pci_bmdma_init_one
// with type: int ata_pci_bmdma_init_one(struct pci_dev *, const struct ata_port_info * const *, struct scsi_host_template *, void *, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int ata_pci_bmdma_init_one(struct pci_dev *arg0, const struct ata_port_info * const *arg1, struct scsi_host_template *arg2, void *arg3, int arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ata_sff_prereset
// with type: int ata_sff_prereset(struct ata_link *, unsigned long)
// with return type: int
int __VERIFIER_nondet_int(void);
int ata_sff_prereset(struct ata_link *arg0, unsigned long arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ioread32
// with type: unsigned int ioread32(void *)
// with return type: unsigned int
unsigned int __VERIFIER_nondet_uint(void);
unsigned int ioread32(void *arg0) {
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: ioread8
// with type: unsigned int ioread8(void *)
// with return type: unsigned int
unsigned int __VERIFIER_nondet_uint(void);
unsigned int ioread8(void *arg0) {
  // Simple type
  return __VERIFIER_nondet_uint();
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

// Function: pci_unregister_driver
// with type: void pci_unregister_driver(struct pci_driver *)
// with return type: void
void pci_unregister_driver(struct pci_driver *arg0) {
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

