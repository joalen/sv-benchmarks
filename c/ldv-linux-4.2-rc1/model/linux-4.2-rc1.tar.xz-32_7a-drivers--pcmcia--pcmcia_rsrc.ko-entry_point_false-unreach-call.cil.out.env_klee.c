#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Skip function: __VERIFIER_nondet_ulong

// Function: __dynamic_dev_dbg
// with type: void __dynamic_dev_dbg(struct _ddebug *, const struct device *, const char *, ...)
// with return type: void
void __dynamic_dev_dbg(struct _ddebug *arg0, const struct device *arg1, const char *arg2, ...) {
  // Void type
  return;
}

// Function: _dev_info
// with type: void _dev_info(const struct device *, const char *, ...)
// with return type: void
void _dev_info(const struct device *arg0, const char *arg1, ...) {
  // Void type
  return;
}

// Function: adjust_resource
// with type: int adjust_resource(struct resource *, resource_size_t , resource_size_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int adjust_resource(struct resource *arg0, resource_size_t arg1, resource_size_t arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: allocate_resource
// with type: int allocate_resource(struct resource *, struct resource *, resource_size_t , resource_size_t , resource_size_t , resource_size_t , resource_size_t (*)(void *, const struct resource *, resource_size_t , resource_size_t ), void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int allocate_resource(struct resource *arg0, struct resource *arg1, resource_size_t arg2, resource_size_t arg3, resource_size_t arg4, resource_size_t arg5, resource_size_t (*arg6)(void *, const struct resource *, resource_size_t , resource_size_t ), void *arg7) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: calloc

// Function: class_interface_register
// with type: int class_interface_register(struct class_interface *)
// with return type: int
int __VERIFIER_nondet_int(void);
int class_interface_register(struct class_interface *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: class_interface_unregister
// with type: void class_interface_unregister(struct class_interface *)
// with return type: void
void class_interface_unregister(struct class_interface *arg0) {
  // Void type
  return;
}

// Function: ioremap_nocache
// with type: void *ioremap_nocache(resource_size_t , unsigned long)
// with return type: (void)*
void *ioremap_nocache(resource_size_t arg0, unsigned long arg1) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: iounmap
// with type: void iounmap(volatile void *)
// with return type: void
void iounmap(volatile void *arg0) {
  // Void type
  return;
}

// Skip function: kfree

// Function: ldv_initialize
// with type: void ldv_initialize()
// with return type: void
void ldv_initialize() {
  // Void type
  return;
}

// Function: ldv_release_6
// with type: int ldv_release_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_7
// with type: int ldv_release_7()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_7() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_setup_6
// with type: int ldv_setup_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_setup_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_setup_7
// with type: int ldv_setup_7()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_setup_7() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: malloc

// Skip function: memset

// Function: mutex_lock
// with type: void mutex_lock(struct mutex *)
// with return type: void
void mutex_lock(struct mutex *arg0) {
  // Void type
  return;
}

// Function: mutex_trylock
// with type: int mutex_trylock(struct mutex *)
// with return type: int
int __VERIFIER_nondet_int(void);
int mutex_trylock(struct mutex *arg0) {
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

// Function: pci_bus_alloc_resource
// with type: int pci_bus_alloc_resource(struct pci_bus *, struct resource *, resource_size_t , resource_size_t , resource_size_t , unsigned long, resource_size_t (*)(void *, const struct resource *, resource_size_t , resource_size_t ), void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_bus_alloc_resource(struct pci_bus *arg0, struct resource *arg1, resource_size_t arg2, resource_size_t arg3, resource_size_t arg4, unsigned long arg5, resource_size_t (*arg6)(void *, const struct resource *, resource_size_t , resource_size_t ), void *arg7) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_find_parent_resource
// with type: struct resource *pci_find_parent_resource(const struct pci_dev *, struct resource *)
// with return type: (struct resource)*
struct resource *pci_find_parent_resource(const struct pci_dev *arg0, struct resource *arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct resource));
}

// Function: printk
// with type: int printk(const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int printk(const char *arg0, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: release_resource
// with type: int release_resource(struct resource *)
// with return type: int
int __VERIFIER_nondet_int(void);
int release_resource(struct resource *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: request_resource
// with type: int request_resource(struct resource *, struct resource *)
// with return type: int
int __VERIFIER_nondet_int(void);
int request_resource(struct resource *arg0, struct resource *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: snprintf

// Skip function: sscanf

// Function: sysfs_create_group
// with type: int sysfs_create_group(struct kobject *, const struct attribute_group *)
// with return type: int
int __VERIFIER_nondet_int(void);
int sysfs_create_group(struct kobject *arg0, const struct attribute_group *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: sysfs_remove_group
// with type: void sysfs_remove_group(struct kobject *, const struct attribute_group *)
// with return type: void
void sysfs_remove_group(struct kobject *arg0, const struct attribute_group *arg1) {
  // Void type
  return;
}

