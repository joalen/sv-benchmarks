#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Skip function: __VERIFIER_nondet_ulong

// Function: ___might_sleep
// with type: void ___might_sleep(const char *, int, int)
// with return type: void
void ___might_sleep(const char *arg0, int arg1, int arg2) {
  // Void type
  return;
}

// Function: __alloc_workqueue_key
// with type: struct workqueue_struct *__alloc_workqueue_key(const char *, unsigned int, int, struct lock_class_key *, const char *, ...)
// with return type: (struct workqueue_struct)*
struct workqueue_struct *__alloc_workqueue_key(const char *arg0, unsigned int arg1, int arg2, struct lock_class_key *arg3, const char *arg4, ...) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: __bdevname
// with type: const char *__bdevname(dev_t , char *)
// with return type: (const char)*
const char *__bdevname(dev_t arg0, char *arg1) {
  // Pointer type
  return ldv_malloc(sizeof(char));
}

// Skip function: __builtin_return_address

// Function: __const_udelay
// with type: void __const_udelay(unsigned long)
// with return type: void
void __const_udelay(unsigned long arg0) {
  // Void type
  return;
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

// Function: __dynamic_pr_debug
// with type: void __dynamic_pr_debug(struct _ddebug *, const char *, ...)
// with return type: void
void __dynamic_pr_debug(struct _ddebug *arg0, const char *arg1, ...) {
  // Void type
  return;
}

// Function: __get_page_tail
// with type: bool __get_page_tail(struct page *)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool __get_page_tail(struct page *arg0) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: __init_waitqueue_head
// with type: void __init_waitqueue_head(wait_queue_head_t *, const char *, struct lock_class_key *)
// with return type: void
void __init_waitqueue_head(wait_queue_head_t *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

// Function: __init_work
// with type: void __init_work(struct work_struct *, int)
// with return type: void
void __init_work(struct work_struct *arg0, int arg1) {
  // Void type
  return;
}

// Function: __list_add
// with type: void __list_add(struct list_head *, struct list_head *, struct list_head *)
// with return type: void
void __list_add(struct list_head *arg0, struct list_head *arg1, struct list_head *arg2) {
  // Void type
  return;
}

// Function: __list_add_rcu
// with type: void __list_add_rcu(struct list_head *, struct list_head *, struct list_head *)
// with return type: void
void __list_add_rcu(struct list_head *arg0, struct list_head *arg1, struct list_head *arg2) {
  // Void type
  return;
}

// Function: __list_del_entry
// with type: void __list_del_entry(struct list_head *)
// with return type: void
void __list_del_entry(struct list_head *arg0) {
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

// Function: __might_sleep
// with type: void __might_sleep(const char *, int, int)
// with return type: void
void __might_sleep(const char *arg0, int arg1, int arg2) {
  // Void type
  return;
}

// Function: __msecs_to_jiffies
// with type: unsigned long int __msecs_to_jiffies(const unsigned int)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int __msecs_to_jiffies(const unsigned int arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: __mutex_init
// with type: void __mutex_init(struct mutex *, const char *, struct lock_class_key *)
// with return type: void
void __mutex_init(struct mutex *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

// Function: __raw_spin_lock_init
// with type: void __raw_spin_lock_init(raw_spinlock_t *, const char *, struct lock_class_key *)
// with return type: void
void __raw_spin_lock_init(raw_spinlock_t *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

// Function: __request_module
// with type: int __request_module(bool , const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int __request_module(bool arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __wake_up
// with type: void __wake_up(wait_queue_head_t *, unsigned int, int, void *)
// with return type: void
void __wake_up(wait_queue_head_t *arg0, unsigned int arg1, int arg2, void *arg3) {
  // Void type
  return;
}

// Function: _atomic_dec_and_lock
// with type: int _atomic_dec_and_lock(atomic_t *, spinlock_t *)
// with return type: int
int __VERIFIER_nondet_int(void);
int _atomic_dec_and_lock(atomic_t *arg0, spinlock_t *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: _cond_resched
// with type: int _cond_resched()
// with return type: int
int __VERIFIER_nondet_int(void);
int _cond_resched() {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: _raw_spin_lock_irq
// with type: void _raw_spin_lock_irq(raw_spinlock_t *)
// with return type: void
void _raw_spin_lock_irq(raw_spinlock_t *arg0) {
  // Void type
  return;
}

// Function: _raw_spin_lock_irqsave
// with type: unsigned long int _raw_spin_lock_irqsave(raw_spinlock_t *)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int _raw_spin_lock_irqsave(raw_spinlock_t *arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: _raw_spin_unlock
// with type: void _raw_spin_unlock(raw_spinlock_t *)
// with return type: void
void _raw_spin_unlock(raw_spinlock_t *arg0) {
  // Void type
  return;
}

// Function: _raw_spin_unlock_irq
// with type: void _raw_spin_unlock_irq(raw_spinlock_t *)
// with return type: void
void _raw_spin_unlock_irq(raw_spinlock_t *arg0) {
  // Void type
  return;
}

// Function: _raw_spin_unlock_irqrestore
// with type: void _raw_spin_unlock_irqrestore(raw_spinlock_t *, unsigned long)
// with return type: void
void _raw_spin_unlock_irqrestore(raw_spinlock_t *arg0, unsigned long arg1) {
  // Void type
  return;
}

// Function: add_disk
// with type: void add_disk(struct gendisk *)
// with return type: void
void add_disk(struct gendisk *arg0) {
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

// Function: alloc_page_buffers
// with type: struct buffer_head *alloc_page_buffers(struct page *, unsigned long, int)
// with return type: (struct buffer_head)*
struct buffer_head *alloc_page_buffers(struct page *arg0, unsigned long arg1, int arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct buffer_head));
}

// Function: alloc_pages_current
// with type: struct page *alloc_pages_current(gfp_t , unsigned int)
// with return type: (struct page)*
struct page *alloc_pages_current(gfp_t arg0, unsigned int arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct page));
}

// Function: bd_link_disk_holder
// with type: int bd_link_disk_holder(struct block_device *, struct gendisk *)
// with return type: int
int __VERIFIER_nondet_int(void);
int bd_link_disk_holder(struct block_device *arg0, struct gendisk *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: bd_unlink_disk_holder
// with type: void bd_unlink_disk_holder(struct block_device *, struct gendisk *)
// with return type: void
void bd_unlink_disk_holder(struct block_device *arg0, struct gendisk *arg1) {
  // Void type
  return;
}

// Function: bdevname
// with type: const char *bdevname(struct block_device *, char *)
// with return type: (const char)*
const char *bdevname(struct block_device *arg0, char *arg1) {
  // Pointer type
  return ldv_malloc(sizeof(char));
}

// Function: bio_add_page
// with type: int bio_add_page(struct bio *, struct page *, unsigned int, unsigned int)
// with return type: int
int __VERIFIER_nondet_int(void);
int bio_add_page(struct bio *arg0, struct page *arg1, unsigned int arg2, unsigned int arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: bio_alloc_bioset
// with type: struct bio *bio_alloc_bioset(gfp_t , int, struct bio_set *)
// with return type: (struct bio)*
struct bio *bio_alloc_bioset(gfp_t arg0, int arg1, struct bio_set *arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct bio));
}

// Function: bio_clone_bioset
// with type: struct bio *bio_clone_bioset(struct bio *, gfp_t , struct bio_set *)
// with return type: (struct bio)*
struct bio *bio_clone_bioset(struct bio *arg0, gfp_t arg1, struct bio_set *arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct bio));
}

// Function: bio_endio
// with type: void bio_endio(struct bio *, int)
// with return type: void
void bio_endio(struct bio *arg0, int arg1) {
  // Void type
  return;
}

// Function: bio_put
// with type: void bio_put(struct bio *)
// with return type: void
void bio_put(struct bio *arg0) {
  // Void type
  return;
}

// Function: bioset_create
// with type: struct bio_set *bioset_create(unsigned int, unsigned int)
// with return type: (struct bio_set)*
struct bio_set *bioset_create(unsigned int arg0, unsigned int arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct bio_set));
}

// Function: bioset_free
// with type: void bioset_free(struct bio_set *)
// with return type: void
void bioset_free(struct bio_set *arg0) {
  // Void type
  return;
}

// Function: bioset_integrity_create
// with type: int bioset_integrity_create(struct bio_set *, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int bioset_integrity_create(struct bio_set *arg0, int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: blk_alloc_queue
// with type: struct request_queue *blk_alloc_queue(gfp_t )
// with return type: (struct request_queue)*
struct request_queue *blk_alloc_queue(gfp_t arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct request_queue));
}

// Function: blk_cleanup_queue
// with type: void blk_cleanup_queue(struct request_queue *)
// with return type: void
void blk_cleanup_queue(struct request_queue *arg0) {
  // Void type
  return;
}

// Function: blk_finish_plug
// with type: void blk_finish_plug(struct blk_plug *)
// with return type: void
void blk_finish_plug(struct blk_plug *arg0) {
  // Void type
  return;
}

// Function: blk_integrity_compare
// with type: int blk_integrity_compare(struct gendisk *, struct gendisk *)
// with return type: int
int __VERIFIER_nondet_int(void);
int blk_integrity_compare(struct gendisk *arg0, struct gendisk *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: blk_integrity_register
// with type: int blk_integrity_register(struct gendisk *, struct blk_integrity *)
// with return type: int
int __VERIFIER_nondet_int(void);
int blk_integrity_register(struct gendisk *arg0, struct blk_integrity *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: blk_integrity_unregister
// with type: void blk_integrity_unregister(struct gendisk *)
// with return type: void
void blk_integrity_unregister(struct gendisk *arg0) {
  // Void type
  return;
}

// Function: blk_queue_flush
// with type: void blk_queue_flush(struct request_queue *, unsigned int)
// with return type: void
void blk_queue_flush(struct request_queue *arg0, unsigned int arg1) {
  // Void type
  return;
}

// Function: blk_queue_make_request
// with type: void blk_queue_make_request(struct request_queue *, make_request_fn *)
// with return type: void
void blk_queue_make_request(struct request_queue *arg0, make_request_fn *arg1) {
  // Void type
  return;
}

// Function: blk_queue_merge_bvec
// with type: void blk_queue_merge_bvec(struct request_queue *, merge_bvec_fn *)
// with return type: void
void blk_queue_merge_bvec(struct request_queue *arg0, merge_bvec_fn *arg1) {
  // Void type
  return;
}

// Function: blk_register_region
// with type: void blk_register_region(dev_t , unsigned long, struct module *, struct kobject *(*)(dev_t , int *, void *), int (*)(dev_t , void *), void *)
// with return type: void
void blk_register_region(dev_t arg0, unsigned long arg1, struct module *arg2, struct kobject *(*arg3)(dev_t , int *, void *), int (*arg4)(dev_t , void *), void *arg5) {
  // Void type
  return;
}

// Function: blk_set_stacking_limits
// with type: void blk_set_stacking_limits(struct queue_limits *)
// with return type: void
void blk_set_stacking_limits(struct queue_limits *arg0) {
  // Void type
  return;
}

// Function: blk_start_plug
// with type: void blk_start_plug(struct blk_plug *)
// with return type: void
void blk_start_plug(struct blk_plug *arg0) {
  // Void type
  return;
}

// Function: blk_sync_queue
// with type: void blk_sync_queue(struct request_queue *)
// with return type: void
void blk_sync_queue(struct request_queue *arg0) {
  // Void type
  return;
}

// Function: blk_unregister_region
// with type: void blk_unregister_region(dev_t , unsigned long)
// with return type: void
void blk_unregister_region(dev_t arg0, unsigned long arg1) {
  // Void type
  return;
}

// Function: blkdev_get_by_dev
// with type: struct block_device *blkdev_get_by_dev(dev_t , fmode_t , void *)
// with return type: (struct block_device)*
struct block_device *blkdev_get_by_dev(dev_t arg0, fmode_t arg1, void *arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct block_device));
}

// Function: blkdev_put
// with type: void blkdev_put(struct block_device *, fmode_t )
// with return type: void
void blkdev_put(struct block_device *arg0, fmode_t arg1) {
  // Void type
  return;
}

// Function: bmap
// with type: sector_t bmap(struct inode *, sector_t )
// with return type: sector_t 
unsigned long __VERIFIER_nondet_ulong(void);
sector_t bmap(struct inode *arg0, sector_t arg1) {
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
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

// Function: check_disk_change
// with type: int check_disk_change(struct block_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int check_disk_change(struct block_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: debug_lockdep_rcu_enabled
// with type: int debug_lockdep_rcu_enabled()
// with return type: int
int __VERIFIER_nondet_int(void);
int debug_lockdep_rcu_enabled() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: del_gendisk
// with type: void del_gendisk(struct gendisk *)
// with return type: void
void del_gendisk(struct gendisk *arg0) {
  // Void type
  return;
}

// Function: del_timer_sync
// with type: int del_timer_sync(struct timer_list *)
// with return type: int
int __VERIFIER_nondet_int(void);
int del_timer_sync(struct timer_list *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: destroy_workqueue
// with type: void destroy_workqueue(struct workqueue_struct *)
// with return type: void
void destroy_workqueue(struct workqueue_struct *arg0) {
  // Void type
  return;
}

// Function: dump_page
// with type: void dump_page(struct page *, const char *)
// with return type: void
void dump_page(struct page *arg0, const char *arg1) {
  // Void type
  return;
}

// Function: fget
// with type: struct file *fget(unsigned int)
// with return type: (struct file)*
struct file *fget(unsigned int arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct file));
}

// Function: file_path
// with type: char *file_path(struct file *, char *, int)
// with return type: (char)*
char *file_path(struct file *arg0, char *arg1, int arg2) {
  // Pointer type
  return ldv_malloc(sizeof(char));
}

// Function: find_next_bit
// with type: unsigned long int find_next_bit(const unsigned long *, unsigned long, unsigned long)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int find_next_bit(const unsigned long *arg0, unsigned long arg1, unsigned long arg2) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: finish_wait
// with type: void finish_wait(wait_queue_head_t *, wait_queue_t *)
// with return type: void
void finish_wait(wait_queue_head_t *arg0, wait_queue_t *arg1) {
  // Void type
  return;
}

// Function: flush_signals
// with type: void flush_signals(struct task_struct *)
// with return type: void
void flush_signals(struct task_struct *arg0) {
  // Void type
  return;
}

// Function: flush_workqueue
// with type: void flush_workqueue(struct workqueue_struct *)
// with return type: void
void flush_workqueue(struct workqueue_struct *arg0) {
  // Void type
  return;
}

// Function: fput
// with type: void fput(struct file *)
// with return type: void
void fput(struct file *arg0) {
  // Void type
  return;
}

// Function: free_buffer_head
// with type: void free_buffer_head(struct buffer_head *)
// with return type: void
void free_buffer_head(struct buffer_head *arg0) {
  // Void type
  return;
}

// Function: get_random_bytes
// with type: void get_random_bytes(void *, int)
// with return type: void
void get_random_bytes(void *arg0, int arg1) {
  // Void type
  return;
}

// Function: get_seconds
// with type: unsigned long int get_seconds()
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int get_seconds() {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: invalidate_bdev
// with type: void invalidate_bdev(struct block_device *)
// with return type: void
void invalidate_bdev(struct block_device *arg0) {
  // Void type
  return;
}

// Function: invalidate_mapping_pages
// with type: unsigned long int invalidate_mapping_pages(struct address_space *, unsigned long, unsigned long)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int invalidate_mapping_pages(struct address_space *arg0, unsigned long arg1, unsigned long arg2) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: jiffies_to_msecs
// with type: unsigned int jiffies_to_msecs(const unsigned long)
// with return type: unsigned int
unsigned int __VERIFIER_nondet_uint(void);
unsigned int jiffies_to_msecs(const unsigned long arg0) {
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: kernel_sigaction
// with type: void kernel_sigaction(int, __sighandler_t )
// with return type: void
void kernel_sigaction(int arg0, __sighandler_t arg1) {
  // Void type
  return;
}

// Function: kernfs_find_and_get_ns
// with type: struct kernfs_node *kernfs_find_and_get_ns(struct kernfs_node *, const char *, const void *)
// with return type: (struct kernfs_node)*
struct kernfs_node *kernfs_find_and_get_ns(struct kernfs_node *arg0, const char *arg1, const void *arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct kernfs_node));
}

// Function: kernfs_notify
// with type: void kernfs_notify(struct kernfs_node *)
// with return type: void
void kernfs_notify(struct kernfs_node *arg0) {
  // Void type
  return;
}

// Function: kernfs_put
// with type: void kernfs_put(struct kernfs_node *)
// with return type: void
void kernfs_put(struct kernfs_node *arg0) {
  // Void type
  return;
}

// Skip function: kfree

// Function: kobject_add
// with type: int kobject_add(struct kobject *, struct kobject *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int kobject_add(struct kobject *arg0, struct kobject *arg1, const char *arg2, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: kobject_del
// with type: void kobject_del(struct kobject *)
// with return type: void
void kobject_del(struct kobject *arg0) {
  // Void type
  return;
}

// Function: kobject_get
// with type: struct kobject *kobject_get(struct kobject *)
// with return type: (struct kobject)*
struct kobject *kobject_get(struct kobject *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct kobject));
}

// Function: kobject_init
// with type: void kobject_init(struct kobject *, struct kobj_type *)
// with return type: void
void kobject_init(struct kobject *arg0, struct kobj_type *arg1) {
  // Void type
  return;
}

// Function: kobject_init_and_add
// with type: int kobject_init_and_add(struct kobject *, struct kobj_type *, struct kobject *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int kobject_init_and_add(struct kobject *arg0, struct kobj_type *arg1, struct kobject *arg2, const char *arg3, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: kobject_put
// with type: void kobject_put(struct kobject *)
// with return type: void
void kobject_put(struct kobject *arg0) {
  // Void type
  return;
}

// Function: kobject_uevent
// with type: int kobject_uevent(struct kobject *, enum kobject_action )
// with return type: int
int __VERIFIER_nondet_int(void);
int kobject_uevent(struct kobject *arg0, enum kobject_action arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: kstrtoll
// with type: int kstrtoll(const char *, unsigned int, long long *)
// with return type: int
int __VERIFIER_nondet_int(void);
int kstrtoll(const char *arg0, unsigned int arg1, long long *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: kstrtouint
// with type: int kstrtouint(const char *, unsigned int, unsigned int *)
// with return type: int
int __VERIFIER_nondet_int(void);
int kstrtouint(const char *arg0, unsigned int arg1, unsigned int *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: kstrtoull
// with type: int kstrtoull(const char *, unsigned int, unsigned long long *)
// with return type: int
int __VERIFIER_nondet_int(void);
int kstrtoull(const char *arg0, unsigned int arg1, unsigned long long *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: kthread_create_on_node
// with type: struct task_struct *kthread_create_on_node(int (*)(void *), void *, int, const char *, ...)
// with return type: (struct task_struct)*
struct task_struct *kthread_create_on_node(int (*arg0)(void *), void *arg1, int arg2, const char *arg3, ...) {
  // Pointer type
  return ldv_malloc(sizeof(struct task_struct));
}

// Function: kthread_should_stop
// with type: bool kthread_should_stop()
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool kthread_should_stop() {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: kthread_stop
// with type: int kthread_stop(struct task_struct *)
// with return type: int
int __VERIFIER_nondet_int(void);
int kthread_stop(struct task_struct *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_initialize
// with type: void ldv_initialize()
// with return type: void
void ldv_initialize() {
  // Void type
  return;
}

// Function: ldv_probe_21
// with type: int ldv_probe_21()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_probe_21() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_probe_51
// with type: int ldv_probe_51()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_probe_51() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: lock_acquire
// with type: void lock_acquire(struct lockdep_map *, unsigned int, int, int, int, struct lockdep_map *, unsigned long)
// with return type: void
void lock_acquire(struct lockdep_map *arg0, unsigned int arg1, int arg2, int arg3, int arg4, struct lockdep_map *arg5, unsigned long arg6) {
  // Void type
  return;
}

// Function: lock_release
// with type: void lock_release(struct lockdep_map *, int, unsigned long)
// with return type: void
void lock_release(struct lockdep_map *arg0, int arg1, unsigned long arg2) {
  // Void type
  return;
}

// Function: lockdep_init_map
// with type: void lockdep_init_map(struct lockdep_map *, const char *, struct lock_class_key *, int)
// with return type: void
void lockdep_init_map(struct lockdep_map *arg0, const char *arg1, struct lock_class_key *arg2, int arg3) {
  // Void type
  return;
}

// Function: lockdep_rcu_suspicious
// with type: void lockdep_rcu_suspicious(const char *, const int, const char *)
// with return type: void
void lockdep_rcu_suspicious(const char *arg0, const int arg1, const char *arg2) {
  // Void type
  return;
}

// Skip function: malloc

// Skip function: memcmp

// Skip function: memcpy

// Skip function: memmove

// Skip function: memset

// Function: mod_timer
// with type: int mod_timer(struct timer_list *, unsigned long)
// with return type: int
int __VERIFIER_nondet_int(void);
int mod_timer(struct timer_list *arg0, unsigned long arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: module_put
// with type: void module_put(struct module *)
// with return type: void
void module_put(struct module *arg0) {
  // Void type
  return;
}

// Function: msleep
// with type: void msleep(unsigned int)
// with return type: void
void msleep(unsigned int arg0) {
  // Void type
  return;
}

// Function: mutex_lock
// with type: void mutex_lock(struct mutex *)
// with return type: void
void mutex_lock(struct mutex *arg0) {
  // Void type
  return;
}

// Function: mutex_lock_interruptible
// with type: int mutex_lock_interruptible(struct mutex *)
// with return type: int
int __VERIFIER_nondet_int(void);
int mutex_lock_interruptible(struct mutex *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: prepare_to_wait
// with type: void prepare_to_wait(wait_queue_head_t *, wait_queue_t *, int)
// with return type: void
void prepare_to_wait(wait_queue_head_t *arg0, wait_queue_t *arg1, int arg2) {
  // Void type
  return;
}

// Function: prepare_to_wait_event
// with type: long int prepare_to_wait_event(wait_queue_head_t *, wait_queue_t *, int)
// with return type: long int
long __VERIFIER_nondet_long(void);
long int prepare_to_wait_event(wait_queue_head_t *arg0, wait_queue_t *arg1, int arg2) {
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

// Function: proc_create_data
// with type: struct proc_dir_entry *proc_create_data(const char *, umode_t , struct proc_dir_entry *, const struct file_operations *, void *)
// with return type: (struct proc_dir_entry)*
struct proc_dir_entry *proc_create_data(const char *arg0, umode_t arg1, struct proc_dir_entry *arg2, const struct file_operations *arg3, void *arg4) {
  // Pointer type
  return ldv_malloc(0UL);
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

// Function: queue_delayed_work_on
// with type: bool queue_delayed_work_on(int, struct workqueue_struct *, struct delayed_work *, unsigned long)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool queue_delayed_work_on(int arg0, struct workqueue_struct *arg1, struct delayed_work *arg2, unsigned long arg3) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: queue_work_on
// with type: bool queue_work_on(int, struct workqueue_struct *, struct work_struct *)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool queue_work_on(int arg0, struct workqueue_struct *arg1, struct work_struct *arg2) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: rcu_is_watching
// with type: bool rcu_is_watching()
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool rcu_is_watching() {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: register_blkdev
// with type: int register_blkdev(unsigned int, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int register_blkdev(unsigned int arg0, const char *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: register_reboot_notifier
// with type: int register_reboot_notifier(struct notifier_block *)
// with return type: int
int __VERIFIER_nondet_int(void);
int register_reboot_notifier(struct notifier_block *arg0) {
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

// Function: remove_proc_entry
// with type: void remove_proc_entry(const char *, struct proc_dir_entry *)
// with return type: void
void remove_proc_entry(const char *arg0, struct proc_dir_entry *arg1) {
  // Void type
  return;
}

// Function: revalidate_disk
// with type: int revalidate_disk(struct gendisk *)
// with return type: int
int __VERIFIER_nondet_int(void);
int revalidate_disk(struct gendisk *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: schedule
// with type: void schedule()
// with return type: void
void schedule() {
  // Void type
  return;
}

// Function: schedule_timeout
// with type: long int schedule_timeout(long)
// with return type: long int
long __VERIFIER_nondet_long(void);
long int schedule_timeout(long arg0) {
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: seq_file_path
// with type: int seq_file_path(struct seq_file *, struct file *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int seq_file_path(struct seq_file *arg0, struct file *arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: seq_lseek
// with type: loff_t seq_lseek(struct file *, loff_t , int)
// with return type: loff_t 
long __VERIFIER_nondet_long(void);
loff_t seq_lseek(struct file *arg0, loff_t arg1, int arg2) {
  // Typedef type
  // Real type: __kernel_loff_t 
  // Typedef type
  // Real type: long long
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: seq_open
// with type: int seq_open(struct file *, const struct seq_operations *)
// with return type: int
int __VERIFIER_nondet_int(void);
int seq_open(struct file *arg0, const struct seq_operations *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: seq_printf
// with type: int seq_printf(struct seq_file *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int seq_printf(struct seq_file *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: seq_read
// with type: ssize_t seq_read(struct file *, char *, size_t , loff_t *)
// with return type: ssize_t 
long __VERIFIER_nondet_long(void);
ssize_t seq_read(struct file *arg0, char *arg1, size_t arg2, loff_t *arg3) {
  // Typedef type
  // Real type: __kernel_ssize_t 
  // Typedef type
  // Real type: __kernel_long_t 
  // Typedef type
  // Real type: long
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: seq_release_private
// with type: int seq_release_private(struct inode *, struct file *)
// with return type: int
int __VERIFIER_nondet_int(void);
int seq_release_private(struct inode *arg0, struct file *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: set_disk_ro
// with type: void set_disk_ro(struct gendisk *, int)
// with return type: void
void set_disk_ro(struct gendisk *arg0, int arg1) {
  // Void type
  return;
}

// Function: simple_strtoul
// with type: unsigned long int simple_strtoul(const char *, char **, unsigned int)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int simple_strtoul(const char *arg0, char **arg1, unsigned int arg2) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: skip_spaces
// with type: char *skip_spaces(const char *)
// with return type: (char)*
char *skip_spaces(const char *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(char));
}

// Skip function: snprintf

// Skip function: sprintf

// Skip function: sscanf

// Skip function: strcmp

// Skip function: strcpy

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

// Skip function: strlen

// Skip function: strncmp

// Skip function: strncpy

// Function: strreplace
// with type: char *strreplace(char *, char, char)
// with return type: (char)*
char *strreplace(char *arg0, char arg1, char arg2) {
  // Pointer type
  return ldv_malloc(sizeof(char));
}

// Function: submit_bh
// with type: int submit_bh(int, struct buffer_head *)
// with return type: int
int __VERIFIER_nondet_int(void);
int submit_bh(int arg0, struct buffer_head *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: submit_bio
// with type: void submit_bio(int, struct bio *)
// with return type: void
void submit_bio(int arg0, struct bio *arg1) {
  // Void type
  return;
}

// Function: submit_bio_wait
// with type: int submit_bio_wait(int, struct bio *)
// with return type: int
int __VERIFIER_nondet_int(void);
int submit_bio_wait(int arg0, struct bio *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: sync_blockdev
// with type: int sync_blockdev(struct block_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int sync_blockdev(struct block_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: synchronize_sched
// with type: void synchronize_sched()
// with return type: void
void synchronize_sched() {
  // Void type
  return;
}

// Function: sysfs_create_group
// with type: int sysfs_create_group(struct kobject *, const struct attribute_group *)
// with return type: int
int __VERIFIER_nondet_int(void);
int sysfs_create_group(struct kobject *arg0, const struct attribute_group *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: sysfs_create_link
// with type: int sysfs_create_link(struct kobject *, struct kobject *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int sysfs_create_link(struct kobject *arg0, struct kobject *arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: sysfs_notify
// with type: void sysfs_notify(struct kobject *, const char *, const char *)
// with return type: void
void sysfs_notify(struct kobject *arg0, const char *arg1, const char *arg2) {
  // Void type
  return;
}

// Function: sysfs_remove_group
// with type: void sysfs_remove_group(struct kobject *, const struct attribute_group *)
// with return type: void
void sysfs_remove_group(struct kobject *arg0, const struct attribute_group *arg1) {
  // Void type
  return;
}

// Function: sysfs_remove_link
// with type: void sysfs_remove_link(struct kobject *, const char *)
// with return type: void
void sysfs_remove_link(struct kobject *arg0, const char *arg1) {
  // Void type
  return;
}

// Function: trace_hardirqs_off
// with type: void trace_hardirqs_off()
// with return type: void
void trace_hardirqs_off() {
  // Void type
  return;
}

// Function: trace_hardirqs_on
// with type: void trace_hardirqs_on()
// with return type: void
void trace_hardirqs_on() {
  // Void type
  return;
}

// Function: try_module_get
// with type: bool try_module_get(struct module *)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool try_module_get(struct module *arg0) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: unregister_blkdev
// with type: void unregister_blkdev(unsigned int, const char *)
// with return type: void
void unregister_blkdev(unsigned int arg0, const char *arg1) {
  // Void type
  return;
}

// Function: unregister_reboot_notifier
// with type: int unregister_reboot_notifier(struct notifier_block *)
// with return type: int
int __VERIFIER_nondet_int(void);
int unregister_reboot_notifier(struct notifier_block *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: unregister_sysctl_table
// with type: void unregister_sysctl_table(struct ctl_table_header *)
// with return type: void
void unregister_sysctl_table(struct ctl_table_header *arg0) {
  // Void type
  return;
}

// Function: vfs_fsync
// with type: int vfs_fsync(struct file *, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int vfs_fsync(struct file *arg0, int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: wake_up_process
// with type: int wake_up_process(struct task_struct *)
// with return type: int
int __VERIFIER_nondet_int(void);
int wake_up_process(struct task_struct *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: warn_slowpath_fmt
// with type: void warn_slowpath_fmt(const char *, const int, const char *, ...)
// with return type: void
void warn_slowpath_fmt(const char *arg0, const int arg1, const char *arg2, ...) {
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

// Function: autoremove_wake_function
// with type: int autoremove_wake_function(wait_queue_t *, unsigned int, int, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int autoremove_wake_function(wait_queue_t *arg0, unsigned int arg1, int arg2, void * arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

