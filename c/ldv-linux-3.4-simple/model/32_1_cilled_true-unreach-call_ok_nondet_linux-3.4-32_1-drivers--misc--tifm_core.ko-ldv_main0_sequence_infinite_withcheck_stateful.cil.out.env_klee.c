#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __alloc_workqueue_key
// with type: struct workqueue_struct *__alloc_workqueue_key(const char *fmt, unsigned int flags, int max_active, struct lock_class_key *key, const char *lock_name, ...)
// with return type: (struct workqueue_struct)*
struct workqueue_struct *__alloc_workqueue_key(const char *arg0, unsigned int arg1, int arg2, struct lock_class_key *arg3, const char *arg4, ...) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: __bus_register
// with type: int __bus_register(struct bus_type *bus, struct lock_class_key *key)
// with return type: int
int __VERIFIER_nondet_int(void);
int __bus_register(struct bus_type *arg0, struct lock_class_key *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __class_register
// with type: int __class_register(struct class *class, struct lock_class_key *key)
// with return type: int
int __VERIFIER_nondet_int(void);
int __class_register(struct class *arg0, struct lock_class_key *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __raw_spin_lock_init
// with type: void __raw_spin_lock_init(raw_spinlock_t *lock, const char *name, struct lock_class_key *key)
// with return type: void
void __raw_spin_lock_init(raw_spinlock_t *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

// Function: _raw_spin_lock
// with type: void _raw_spin_lock(raw_spinlock_t *lock)
// with return type: void
void _raw_spin_lock(raw_spinlock_t *arg0) {
  // Void type
  return;
}

// Function: _raw_spin_unlock
// with type: void _raw_spin_unlock(raw_spinlock_t *lock)
// with return type: void
void _raw_spin_unlock(raw_spinlock_t *arg0) {
  // Void type
  return;
}

// Function: add_uevent_var
// with type: int add_uevent_var(struct kobj_uevent_env *env, const char *format, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int add_uevent_var(struct kobj_uevent_env *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: bus_unregister
// with type: void bus_unregister(struct bus_type *bus)
// with return type: void
void bus_unregister(struct bus_type *arg0) {
  // Void type
  return;
}

// Function: class_unregister
// with type: void class_unregister(struct class *class)
// with return type: void
void class_unregister(struct class *arg0) {
  // Void type
  return;
}

// Function: debug_dma_map_sg
// with type: void debug_dma_map_sg(struct device *dev, struct scatterlist *sg, int nents, int mapped_ents, int direction)
// with return type: void
void debug_dma_map_sg(struct device *arg0, struct scatterlist *arg1, int arg2, int arg3, int arg4) {
  // Void type
  return;
}

// Function: debug_dma_unmap_sg
// with type: void debug_dma_unmap_sg(struct device *dev, struct scatterlist *sglist, int nelems, int dir)
// with return type: void
void debug_dma_unmap_sg(struct device *arg0, struct scatterlist *arg1, int arg2, int arg3) {
  // Void type
  return;
}

// Function: destroy_workqueue
// with type: void destroy_workqueue(struct workqueue_struct *wq)
// with return type: void
void destroy_workqueue(struct workqueue_struct *arg0) {
  // Void type
  return;
}

// Function: dev_get_drvdata
// with type: void *dev_get_drvdata(const struct device *dev)
// with return type: (void)*
void *dev_get_drvdata(const struct device *arg0) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: dev_set_name
// with type: int dev_set_name(struct device *dev, const char *name, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_set_name(struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: device_add
// with type: int device_add(struct device *dev)
// with return type: int
int __VERIFIER_nondet_int(void);
int device_add(struct device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: device_del
// with type: void device_del(struct device *dev)
// with return type: void
void device_del(struct device *arg0) {
  // Void type
  return;
}

// Function: device_initialize
// with type: void device_initialize(struct device *dev)
// with return type: void
void device_initialize(struct device *arg0) {
  // Void type
  return;
}

// Function: device_unregister
// with type: void device_unregister(struct device *dev)
// with return type: void
void device_unregister(struct device *arg0) {
  // Void type
  return;
}

// Function: driver_register
// with type: int driver_register(struct device_driver *drv)
// with return type: int
int __VERIFIER_nondet_int(void);
int driver_register(struct device_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: driver_unregister
// with type: void driver_unregister(struct device_driver *drv)
// with return type: void
void driver_unregister(struct device_driver *arg0) {
  // Void type
  return;
}

// Function: flush_workqueue
// with type: void flush_workqueue(struct workqueue_struct *wq)
// with return type: void
void flush_workqueue(struct workqueue_struct *arg0) {
  // Void type
  return;
}

// Function: get_device
// with type: struct device *get_device(struct device *dev)
// with return type: (struct device)*
struct device *get_device(struct device *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct device));
}

// Function: idr_get_new
// with type: int idr_get_new(struct idr *idp, void *ptr, int *id)
// with return type: int
int __VERIFIER_nondet_int(void);
int idr_get_new(struct idr *arg0, void *arg1, int *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: idr_pre_get
// with type: int idr_pre_get(struct idr *idp, gfp_t gfp_mask)
// with return type: int
int __VERIFIER_nondet_int(void);
int idr_pre_get(struct idr *arg0, gfp_t arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: idr_remove
// with type: void idr_remove(struct idr *idp, int id)
// with return type: void
void idr_remove(struct idr *arg0, int arg1) {
  // Void type
  return;
}

// Skip function: kfree

// Function: ldv_check_return_value
// with type: void ldv_check_return_value(int res)
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

// Skip function: malloc

// Function: printk
// with type: int printk(const char *fmt, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int printk(const char *arg0, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: put_device
// with type: void put_device(struct device *dev)
// with return type: void
void put_device(struct device *arg0) {
  // Void type
  return;
}

// Function: queue_work
// with type: int queue_work(struct workqueue_struct *wq, struct work_struct *work)
// with return type: int
int __VERIFIER_nondet_int(void);
int queue_work(struct workqueue_struct *arg0, struct work_struct *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: sg_next
// with type: struct scatterlist *sg_next(struct scatterlist *)
// with return type: (struct scatterlist)*
struct scatterlist *sg_next(struct scatterlist *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct scatterlist));
}

// Skip function: sprintf

