#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Skip function: __VERIFIER_nondet_ulong

// Function: __blk_put_request
// with type: void __blk_put_request(struct request_queue *, struct request *)
// with return type: void
void __blk_put_request(struct request_queue *arg0, struct request *arg1) {
  // Void type
  return;
}

// Function: __class_register
// with type: int __class_register(struct class *, struct lock_class_key *)
// with return type: int
int __VERIFIER_nondet_int(void);
int __class_register(struct class *arg0, struct lock_class_key *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __copy_from_user_overflow
// with type: void __copy_from_user_overflow()
// with return type: void
void __copy_from_user_overflow() {
  // Void type
  return;
}

// Function: __copy_to_user_overflow
// with type: void __copy_to_user_overflow()
// with return type: void
void __copy_to_user_overflow() {
  // Void type
  return;
}

// Function: __free_pages
// with type: void __free_pages(struct page *, unsigned int)
// with return type: void
void __free_pages(struct page *arg0, unsigned int arg1) {
  // Void type
  return;
}

// Function: __init_waitqueue_head
// with type: void __init_waitqueue_head(wait_queue_head_t *, const char *, struct lock_class_key *)
// with return type: void
void __init_waitqueue_head(wait_queue_head_t *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

// Function: __might_fault
// with type: void __might_fault(const char *, int)
// with return type: void
void __might_fault(const char *arg0, int arg1) {
  // Void type
  return;
}

// Function: __mutex_init
// with type: void __mutex_init(struct mutex *, const char *, struct lock_class_key *)
// with return type: void
void __mutex_init(struct mutex *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

// Function: __scsi_print_sense
// with type: void __scsi_print_sense(const struct scsi_device *, const char *, const unsigned char *, int)
// with return type: void
void __scsi_print_sense(const struct scsi_device *arg0, const char *arg1, const unsigned char *arg2, int arg3) {
  // Void type
  return;
}

// Function: _copy_from_user
// with type: unsigned long int _copy_from_user(void *, const void *, unsigned int)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int _copy_from_user(void *arg0, const void *arg1, unsigned int arg2) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: _copy_to_user
// with type: unsigned long int _copy_to_user(void *, const void *, unsigned int)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int _copy_to_user(void *arg0, const void *arg1, unsigned int arg2) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: _raw_spin_lock
// with type: void _raw_spin_lock(raw_spinlock_t *)
// with return type: void
void _raw_spin_lock(raw_spinlock_t *arg0) {
  // Void type
  return;
}

// Function: _raw_spin_unlock
// with type: void _raw_spin_unlock(raw_spinlock_t *)
// with return type: void
void _raw_spin_unlock(raw_spinlock_t *arg0) {
  // Void type
  return;
}

// Function: alloc_disk
// with type: struct gendisk *alloc_disk(int)
// with return type: (struct gendisk)*
struct gendisk *alloc_disk(int arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct gendisk));
}

// Function: alloc_pages_current
// with type: struct page *alloc_pages_current(gfp_t , unsigned int)
// with return type: (struct page)*
struct page *alloc_pages_current(gfp_t arg0, unsigned int arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct page));
}

// Function: blk_execute_rq_nowait
// with type: void blk_execute_rq_nowait(struct request_queue *, struct gendisk *, struct request *, int, rq_end_io_fn *)
// with return type: void
void blk_execute_rq_nowait(struct request_queue *arg0, struct gendisk *arg1, struct request *arg2, int arg3, rq_end_io_fn *arg4) {
  // Void type
  return;
}

// Function: blk_get_queue
// with type: bool blk_get_queue(struct request_queue *)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool blk_get_queue(struct request_queue *arg0) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: blk_get_request
// with type: struct request *blk_get_request(struct request_queue *, int, gfp_t )
// with return type: (struct request)*
struct request *blk_get_request(struct request_queue *arg0, int arg1, gfp_t arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct request));
}

// Function: blk_put_queue
// with type: void blk_put_queue(struct request_queue *)
// with return type: void
void blk_put_queue(struct request_queue *arg0) {
  // Void type
  return;
}

// Function: blk_put_request
// with type: void blk_put_request(struct request *)
// with return type: void
void blk_put_request(struct request *arg0) {
  // Void type
  return;
}

// Function: blk_queue_rq_timeout
// with type: void blk_queue_rq_timeout(struct request_queue *, unsigned int)
// with return type: void
void blk_queue_rq_timeout(struct request_queue *arg0, unsigned int arg1) {
  // Void type
  return;
}

// Function: blk_rq_map_user
// with type: int blk_rq_map_user(struct request_queue *, struct request *, struct rq_map_data *, void *, unsigned long, gfp_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int blk_rq_map_user(struct request_queue *arg0, struct request *arg1, struct rq_map_data *arg2, void *arg3, unsigned long arg4, gfp_t arg5) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: blk_rq_set_block_pc
// with type: void blk_rq_set_block_pc(struct request *)
// with return type: void
void blk_rq_set_block_pc(struct request *arg0) {
  // Void type
  return;
}

// Function: blk_rq_unmap_user
// with type: int blk_rq_unmap_user(struct bio *)
// with return type: int
int __VERIFIER_nondet_int(void);
int blk_rq_unmap_user(struct bio *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: calloc

// Function: capable
// with type: bool capable(int)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool capable(int arg0) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: cdev_add
// with type: int cdev_add(struct cdev *, dev_t , unsigned int)
// with return type: int
int __VERIFIER_nondet_int(void);
int cdev_add(struct cdev *arg0, dev_t arg1, unsigned int arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: cdev_alloc
// with type: struct cdev *cdev_alloc()
// with return type: (struct cdev)*
struct cdev *cdev_alloc() {
  // Pointer type
  return ldv_malloc(sizeof(struct cdev));
}

// Function: cdev_del
// with type: void cdev_del(struct cdev *)
// with return type: void
void cdev_del(struct cdev *arg0) {
  // Void type
  return;
}

// Function: class_unregister
// with type: void class_unregister(struct class *)
// with return type: void
void class_unregister(struct class *arg0) {
  // Void type
  return;
}

// Function: complete
// with type: void complete(struct completion *)
// with return type: void
void complete(struct completion *arg0) {
  // Void type
  return;
}

// Function: debug_lockdep_rcu_enabled
// with type: int debug_lockdep_rcu_enabled()
// with return type: int
int __VERIFIER_nondet_int(void);
int debug_lockdep_rcu_enabled() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: device_create
// with type: struct device *device_create(struct class *, struct device *, dev_t , void *, const char *, ...)
// with return type: (struct device)*
struct device *device_create(struct class *arg0, struct device *arg1, dev_t arg2, void *arg3, const char *arg4, ...) {
  // Pointer type
  return ldv_malloc(sizeof(struct device));
}

// Function: device_unregister
// with type: void device_unregister(struct device *)
// with return type: void
void device_unregister(struct device *arg0) {
  // Void type
  return;
}

// Function: driver_create_file
// with type: int driver_create_file(struct device_driver *, const struct driver_attribute *)
// with return type: int
int __VERIFIER_nondet_int(void);
int driver_create_file(struct device_driver *arg0, const struct driver_attribute *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: driver_remove_file
// with type: void driver_remove_file(struct device_driver *, const struct driver_attribute *)
// with return type: void
void driver_remove_file(struct device_driver *arg0, const struct driver_attribute *arg1) {
  // Void type
  return;
}

// Function: driver_unregister
// with type: void driver_unregister(struct device_driver *)
// with return type: void
void driver_unregister(struct device_driver *arg0) {
  // Void type
  return;
}

// Function: get_user_pages_unlocked
// with type: long int get_user_pages_unlocked(struct task_struct *, struct mm_struct *, unsigned long, unsigned long, int, int, struct page **)
// with return type: long int
long __VERIFIER_nondet_long(void);
long int get_user_pages_unlocked(struct task_struct *arg0, struct mm_struct *arg1, unsigned long arg2, unsigned long arg3, int arg4, int arg5, struct page **arg6) {
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: idr_alloc
// with type: int idr_alloc(struct idr *, void *, int, int, gfp_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int idr_alloc(struct idr *arg0, void *arg1, int arg2, int arg3, gfp_t arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: idr_find_slowpath
// with type: void *idr_find_slowpath(struct idr *, int)
// with return type: (void)*
void *idr_find_slowpath(struct idr *arg0, int arg1) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: idr_preload
// with type: void idr_preload(gfp_t )
// with return type: void
void idr_preload(gfp_t arg0) {
  // Void type
  return;
}

// Function: idr_remove
// with type: void idr_remove(struct idr *, int)
// with return type: void
void idr_remove(struct idr *arg0, int arg1) {
  // Void type
  return;
}

// Skip function: kfree

// Function: ktime_get
// with type: ktime_t ktime_get()
// with return type: ktime_t 
ktime_t ktime_get() {
  // Typedef type
  // Real type: union ktime
  // Composite type
  return *(union ktime *)ldv_xmalloc(sizeof(union ktime));
}

// Function: ldv_initialize
// with type: void ldv_initialize()
// with return type: void
void ldv_initialize() {
  // Void type
  return;
}

// Skip function: malloc

// Skip function: memcpy

// Skip function: memmove

// Skip function: memset

// Function: msleep_interruptible
// with type: unsigned long int msleep_interruptible(unsigned int)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int msleep_interruptible(unsigned int arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: mutex_lock_interruptible_nested
// with type: int mutex_lock_interruptible_nested(struct mutex *, unsigned int)
// with return type: int
int __VERIFIER_nondet_int(void);
int mutex_lock_interruptible_nested(struct mutex *arg0, unsigned int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: mutex_lock_nested
// with type: void mutex_lock_nested(struct mutex *, unsigned int)
// with return type: void
void mutex_lock_nested(struct mutex *arg0, unsigned int arg1) {
  // Void type
  return;
}

// Function: mutex_unlock
// with type: void mutex_unlock(struct mutex *)
// with return type: void
void mutex_unlock(struct mutex *arg0) {
  // Void type
  return;
}

// Function: noop_llseek
// with type: loff_t noop_llseek(struct file *, loff_t , int)
// with return type: loff_t 
long __VERIFIER_nondet_long(void);
loff_t noop_llseek(struct file *arg0, loff_t arg1, int arg2) {
  // Typedef type
  // Real type: __kernel_loff_t 
  // Typedef type
  // Real type: long long
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: printk
// with type: int printk(const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int printk(const char *arg0, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: put_disk
// with type: void put_disk(struct gendisk *)
// with return type: void
void put_disk(struct gendisk *arg0) {
  // Void type
  return;
}

// Function: put_page
// with type: void put_page(struct page *)
// with return type: void
void put_page(struct page *arg0) {
  // Void type
  return;
}

// Function: register_chrdev_region
// with type: int register_chrdev_region(dev_t , unsigned int, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int register_chrdev_region(dev_t arg0, unsigned int arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: scsi_autopm_get_device
// with type: int scsi_autopm_get_device(struct scsi_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int scsi_autopm_get_device(struct scsi_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: scsi_autopm_put_device
// with type: void scsi_autopm_put_device(struct scsi_device *)
// with return type: void
void scsi_autopm_put_device(struct scsi_device *arg0) {
  // Void type
  return;
}

// Function: scsi_block_when_processing_errors
// with type: int scsi_block_when_processing_errors(struct scsi_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int scsi_block_when_processing_errors(struct scsi_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: scsi_cmd_ioctl
// with type: int scsi_cmd_ioctl(struct request_queue *, struct gendisk *, fmode_t , unsigned int, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int scsi_cmd_ioctl(struct request_queue *arg0, struct gendisk *arg1, fmode_t arg2, unsigned int arg3, void *arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: scsi_device_get
// with type: int scsi_device_get(struct scsi_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int scsi_device_get(struct scsi_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: scsi_device_put
// with type: void scsi_device_put(struct scsi_device *)
// with return type: void
void scsi_device_put(struct scsi_device *arg0) {
  // Void type
  return;
}

// Function: scsi_get_sense_info_fld
// with type: int scsi_get_sense_info_fld(const u8 *, int, u64 *)
// with return type: int
int __VERIFIER_nondet_int(void);
int scsi_get_sense_info_fld(const u8 *arg0, int arg1, u64 *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: scsi_ioctl
// with type: int scsi_ioctl(struct scsi_device *, int, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int scsi_ioctl(struct scsi_device *arg0, int arg1, void *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: scsi_ioctl_block_when_processing_errors
// with type: int scsi_ioctl_block_when_processing_errors(struct scsi_device *, int, bool )
// with return type: int
int __VERIFIER_nondet_int(void);
int scsi_ioctl_block_when_processing_errors(struct scsi_device *arg0, int arg1, bool arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: scsi_normalize_sense
// with type: bool scsi_normalize_sense(const u8 *, int, struct scsi_sense_hdr *)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool scsi_normalize_sense(const u8 *arg0, int arg1, struct scsi_sense_hdr *arg2) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: scsi_register_driver
// with type: int scsi_register_driver(struct device_driver *)
// with return type: int
int __VERIFIER_nondet_int(void);
int scsi_register_driver(struct device_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: scsi_sense_desc_find
// with type: const u8 *scsi_sense_desc_find(const u8 *, int, int)
// with return type: (const u8 )*
const u8 *scsi_sense_desc_find(const u8 *arg0, int arg1, int arg2) {
  // Pointer type
  return ldv_malloc(sizeof(u8));
}

// Function: scsi_set_medium_removal
// with type: int scsi_set_medium_removal(struct scsi_device *, char)
// with return type: int
int __VERIFIER_nondet_int(void);
int scsi_set_medium_removal(struct scsi_device *arg0, char arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: sdev_prefix_printk
// with type: void sdev_prefix_printk(const char *, const struct scsi_device *, const char *, const char *, ...)
// with return type: void
void sdev_prefix_printk(const char *arg0, const struct scsi_device *arg1, const char *arg2, const char *arg3, ...) {
  // Void type
  return;
}

// Skip function: snprintf

// Skip function: sprintf

// Skip function: strlen

// Skip function: strncmp

// Function: sysfs_create_link
// with type: int sysfs_create_link(struct kobject *, struct kobject *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int sysfs_create_link(struct kobject *arg0, struct kobject *arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: sysfs_remove_link
// with type: void sysfs_remove_link(struct kobject *, const char *)
// with return type: void
void sysfs_remove_link(struct kobject *arg0, const char *arg1) {
  // Void type
  return;
}

// Function: unregister_chrdev_region
// with type: void unregister_chrdev_region(dev_t , unsigned int)
// with return type: void
void unregister_chrdev_region(dev_t arg0, unsigned int arg1) {
  // Void type
  return;
}

// Function: wait_for_completion
// with type: void wait_for_completion(struct completion *)
// with return type: void
void wait_for_completion(struct completion *arg0) {
  // Void type
  return;
}

// Function: warn_slowpath_null
// with type: void warn_slowpath_null(const char *, const int)
// with return type: void
void warn_slowpath_null(const char *arg0, const int arg1) {
  // Void type
  return;
}

