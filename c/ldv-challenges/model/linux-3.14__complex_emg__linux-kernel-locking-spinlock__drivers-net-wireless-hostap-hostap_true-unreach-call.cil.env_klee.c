#include <klee/klee.h>
// Function: PDE_DATA
// with type: void *PDE_DATA(const struct inode *)
// with return type: (void)*
void *PDE_DATA(const struct inode *arg0) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Skip function: __VERIFIER_nondet_ulong

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

// Function: __dev_kfree_skb_any
// with type: void __dev_kfree_skb_any(struct sk_buff *, enum skb_free_reason )
// with return type: void
void __dev_kfree_skb_any(struct sk_buff *arg0, enum skb_free_reason arg1) {
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

// Function: __ldv_spin_lock
// with type: void __ldv_spin_lock(spinlock_t *)
// with return type: void
void __ldv_spin_lock(spinlock_t *arg0) {
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

// Function: __list_del_entry
// with type: void __list_del_entry(struct list_head *)
// with return type: void
void __list_del_entry(struct list_head *arg0) {
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

// Function: __netdev_alloc_skb
// with type: struct sk_buff *__netdev_alloc_skb(struct net_device *, unsigned int, gfp_t )
// with return type: (struct sk_buff)*
struct sk_buff *__netdev_alloc_skb(struct net_device *arg0, unsigned int arg1, gfp_t arg2) {
  // Pointer type
  struct sk_buff *skb = ldv_malloc(sizeof(struct sk_buff));
  if(skb) {
    skb->dev = arg0;
    skb->head = ldv_malloc(arg1);
    skb->data = skb->head;
    skb->tail = 0;
  }
  return skb;
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

// Function: _raw_read_lock_bh
// with type: void _raw_read_lock_bh(rwlock_t *)
// with return type: void
void _raw_read_lock_bh(rwlock_t *arg0) {
  // Void type
  return;
}

// Function: _raw_read_unlock_bh
// with type: void _raw_read_unlock_bh(rwlock_t *)
// with return type: void
void _raw_read_unlock_bh(rwlock_t *arg0) {
  // Void type
  return;
}

// Function: _raw_spin_lock
// with type: void _raw_spin_lock(raw_spinlock_t *)
// with return type: void
void _raw_spin_lock(raw_spinlock_t *arg0) {
  // Void type
  return;
}

// Function: _raw_spin_lock_bh
// with type: void _raw_spin_lock_bh(raw_spinlock_t *)
// with return type: void
void _raw_spin_lock_bh(raw_spinlock_t *arg0) {
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

// Function: _raw_spin_unlock_bh
// with type: void _raw_spin_unlock_bh(raw_spinlock_t *)
// with return type: void
void _raw_spin_unlock_bh(raw_spinlock_t *arg0) {
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

// Function: _raw_write_lock_irqsave
// with type: unsigned long int _raw_write_lock_irqsave(rwlock_t *)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int _raw_write_lock_irqsave(rwlock_t *arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: _raw_write_unlock_irqrestore
// with type: void _raw_write_unlock_irqrestore(rwlock_t *, unsigned long)
// with return type: void
void _raw_write_unlock_irqrestore(rwlock_t *arg0, unsigned long arg1) {
  // Void type
  return;
}

// Function: add_timer
// with type: void add_timer(struct timer_list *)
// with return type: void
void add_timer(struct timer_list *arg0) {
  // Void type
  return;
}

// Function: add_wait_queue
// with type: void add_wait_queue(wait_queue_head_t *, wait_queue_t *)
// with return type: void
void add_wait_queue(wait_queue_head_t *arg0, wait_queue_t *arg1) {
  // Void type
  return;
}

// Function: alloc_etherdev_mqs
// with type: struct net_device *alloc_etherdev_mqs(int, unsigned int, unsigned int)
// with return type: (struct net_device)*
struct net_device *alloc_etherdev_mqs(int arg0, unsigned int arg1, unsigned int arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct net_device));
}

// Skip function: calloc

// Function: cancel_work_sync
// with type: bool cancel_work_sync(struct work_struct *)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool cancel_work_sync(struct work_struct *arg0) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

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

// Function: consume_skb
// with type: void consume_skb(struct sk_buff *)
// with return type: void
void consume_skb(struct sk_buff *arg0) {
  // Void type
  return;
}

// Function: del_timer
// with type: int del_timer(struct timer_list *)
// with return type: int
int __VERIFIER_nondet_int(void);
int del_timer(struct timer_list *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: del_timer_sync
// with type: int del_timer_sync(struct timer_list *)
// with return type: int
int __VERIFIER_nondet_int(void);
int del_timer_sync(struct timer_list *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_close
// with type: int dev_close(struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_close(struct net_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_open
// with type: int dev_open(struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_open(struct net_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_queue_xmit
// with type: int dev_queue_xmit(struct sk_buff *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_queue_xmit(struct sk_buff *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: eth_header
// with type: int eth_header(struct sk_buff *, struct net_device *, unsigned short, const void *, const void *, unsigned int)
// with return type: int
int __VERIFIER_nondet_int(void);
int eth_header(struct sk_buff *arg0, struct net_device *arg1, unsigned short arg2, const void *arg3, const void *arg4, unsigned int arg5) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: eth_header_cache
// with type: int eth_header_cache(const struct neighbour *, struct hh_cache *, __be16 )
// with return type: int
int __VERIFIER_nondet_int(void);
int eth_header_cache(const struct neighbour *arg0, struct hh_cache *arg1, __be16 arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: eth_header_cache_update
// with type: void eth_header_cache_update(struct hh_cache *, const struct net_device *, const unsigned char *)
// with return type: void
void eth_header_cache_update(struct hh_cache *arg0, const struct net_device *arg1, const unsigned char *arg2) {
  // Void type
  return;
}

// Function: eth_rebuild_header
// with type: int eth_rebuild_header(struct sk_buff *)
// with return type: int
int __VERIFIER_nondet_int(void);
int eth_rebuild_header(struct sk_buff *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: eth_type_trans
// with type: __be16 eth_type_trans(struct sk_buff *, struct net_device *)
// with return type: __be16 
unsigned short __VERIFIER_nondet_ushort(void);
__be16 eth_type_trans(struct sk_buff *arg0, struct net_device *arg1) {
  // Typedef type
  // Real type: __u16 
  // Typedef type
  // Real type: unsigned short
  // Simple type
  return __VERIFIER_nondet_ushort();
}

// Function: eth_validate_addr
// with type: int eth_validate_addr(struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int eth_validate_addr(struct net_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ether_setup
// with type: void ether_setup(struct net_device *)
// with return type: void
void ether_setup(struct net_device *arg0) {
  // Void type
  return;
}

// Function: flush_work
// with type: bool flush_work(struct work_struct *)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool flush_work(struct work_struct *arg0) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Skip function: free

// Function: free_netdev
// with type: void free_netdev(struct net_device *)
// with return type: void
void free_netdev(struct net_device *arg0) {
  // Void type
  return;
}

// Function: generic_file_llseek
// with type: loff_t generic_file_llseek(struct file *, loff_t , int)
// with return type: loff_t 
long __VERIFIER_nondet_long(void);
loff_t generic_file_llseek(struct file *arg0, loff_t arg1, int arg2) {
  // Typedef type
  // Real type: __kernel_loff_t 
  // Typedef type
  // Real type: long long
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: get_random_bytes
// with type: void get_random_bytes(void *, int)
// with return type: void
void get_random_bytes(void *arg0, int arg1) {
  // Void type
  return;
}

// Function: init_timer_key
// with type: void init_timer_key(struct timer_list *, unsigned int, const char *, struct lock_class_key *)
// with return type: void
void init_timer_key(struct timer_list *arg0, unsigned int arg1, const char *arg2, struct lock_class_key *arg3) {
  // Void type
  return;
}

// Skip function: kfree

// Function: kfree_skb
// with type: void kfree_skb(struct sk_buff *)
// with return type: void
void kfree_skb(struct sk_buff *arg0) {
  // Void type
  return;
}

// Function: ldv_after_alloc
// with type: void ldv_after_alloc(void *)
// with return type: void
void ldv_after_alloc(void *arg0) {
  // Void type
  return;
}

// Function: ldv_alloc_etherdev_mqs
// with type: struct net_device *ldv_alloc_etherdev_mqs(struct net_device *, int, unsigned int, unsigned int)
// with return type: (struct net_device)*
struct net_device *ldv_alloc_etherdev_mqs(struct net_device *arg0, int arg1, unsigned int arg2, unsigned int arg3) {
  // Pointer type
  return ldv_malloc(sizeof(struct net_device));
}

// Function: ldv_assert
// with type: void ldv_assert(const char *, int)
// with return type: void
void ldv_assert(const char *arg0, int arg1) {
  // Void type
  return;
}

// Function: ldv_check_alloc_flags
// with type: void ldv_check_alloc_flags(gfp_t )
// with return type: void
void ldv_check_alloc_flags(gfp_t arg0) {
  // Void type
  return;
}

// Function: ldv_free_netdev
// with type: void ldv_free_netdev(void *, struct net_device *)
// with return type: void
void ldv_free_netdev(void *arg0, struct net_device *arg1) {
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

// Function: ldv_register_netdevice
// with type: int ldv_register_netdevice(int, struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_register_netdevice(int arg0, struct net_device *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_switch_to_interrupt_context
// with type: void ldv_switch_to_interrupt_context()
// with return type: void
void ldv_switch_to_interrupt_context() {
  // Void type
  return;
}

// Function: ldv_switch_to_process_context
// with type: void ldv_switch_to_process_context()
// with return type: void
void ldv_switch_to_process_context() {
  // Void type
  return;
}

// Function: ldv_unregister_netdev
// with type: void ldv_unregister_netdev(void *, struct net_device *)
// with return type: void
void ldv_unregister_netdev(void *arg0, struct net_device *arg1) {
  // Void type
  return;
}

// Function: lib80211_crypt_delayed_deinit
// with type: void lib80211_crypt_delayed_deinit(struct lib80211_crypt_info *, struct lib80211_crypt_data **)
// with return type: void
void lib80211_crypt_delayed_deinit(struct lib80211_crypt_info *arg0, struct lib80211_crypt_data **arg1) {
  // Void type
  return;
}

// Function: lib80211_get_crypto_ops
// with type: struct lib80211_crypto_ops *lib80211_get_crypto_ops(const char *)
// with return type: (struct lib80211_crypto_ops)*
struct lib80211_crypto_ops *lib80211_get_crypto_ops(const char *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct lib80211_crypto_ops));
}

// Function: list_del
// with type: void list_del(struct list_head *)
// with return type: void
void list_del(struct list_head *arg0) {
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

// Skip function: malloc

// Skip function: memcmp

// Skip function: memcpy

// Skip function: memset

// Function: might_fault
// with type: void might_fault()
// with return type: void
void might_fault() {
  // Void type
  return;
}

// Function: module_put
// with type: void module_put(struct module *)
// with return type: void
void module_put(struct module *arg0) {
  // Void type
  return;
}

// Function: net_ratelimit
// with type: int net_ratelimit()
// with return type: int
int __VERIFIER_nondet_int(void);
int net_ratelimit() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: netif_carrier_off
// with type: void netif_carrier_off(struct net_device *)
// with return type: void
void netif_carrier_off(struct net_device *arg0) {
  // Void type
  return;
}

// Function: netif_carrier_on
// with type: void netif_carrier_on(struct net_device *)
// with return type: void
void netif_carrier_on(struct net_device *arg0) {
  // Void type
  return;
}

// Function: netif_device_attach
// with type: void netif_device_attach(struct net_device *)
// with return type: void
void netif_device_attach(struct net_device *arg0) {
  // Void type
  return;
}

// Function: netif_device_detach
// with type: void netif_device_detach(struct net_device *)
// with return type: void
void netif_device_detach(struct net_device *arg0) {
  // Void type
  return;
}

// Function: netif_rx
// with type: int netif_rx(struct sk_buff *)
// with return type: int
int __VERIFIER_nondet_int(void);
int netif_rx(struct sk_buff *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: proc_mkdir
// with type: struct proc_dir_entry *proc_mkdir(const char *, struct proc_dir_entry *)
// with return type: (struct proc_dir_entry)*
struct proc_dir_entry *proc_mkdir(const char *arg0, struct proc_dir_entry *arg1) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: proc_remove
// with type: void proc_remove(struct proc_dir_entry *)
// with return type: void
void proc_remove(struct proc_dir_entry *arg0) {
  // Void type
  return;
}

// Function: pskb_expand_head
// with type: int pskb_expand_head(struct sk_buff *, int, int, gfp_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int pskb_expand_head(struct sk_buff *arg0, int arg1, int arg2, gfp_t arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: register_netdevice
// with type: int register_netdevice(struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int register_netdevice(struct net_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: remove_proc_entry
// with type: void remove_proc_entry(const char *, struct proc_dir_entry *)
// with return type: void
void remove_proc_entry(const char *arg0, struct proc_dir_entry *arg1) {
  // Void type
  return;
}

// Function: remove_wait_queue
// with type: void remove_wait_queue(wait_queue_head_t *, wait_queue_t *)
// with return type: void
void remove_wait_queue(wait_queue_head_t *arg0, wait_queue_t *arg1) {
  // Void type
  return;
}

// Function: rtnl_lock
// with type: void rtnl_lock()
// with return type: void
void rtnl_lock() {
  // Void type
  return;
}

// Function: rtnl_unlock
// with type: void rtnl_unlock()
// with return type: void
void rtnl_unlock() {
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

// Function: seq_list_next
// with type: struct list_head *seq_list_next(void *, struct list_head *, loff_t *)
// with return type: (struct list_head)*
struct list_head *seq_list_next(void *arg0, struct list_head *arg1, loff_t *arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct list_head));
}

// Function: seq_list_start
// with type: struct list_head *seq_list_start(struct list_head *, loff_t )
// with return type: (struct list_head)*
struct list_head *seq_list_start(struct list_head *arg0, loff_t arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct list_head));
}

// Function: seq_list_start_head
// with type: struct list_head *seq_list_start_head(struct list_head *, loff_t )
// with return type: (struct list_head)*
struct list_head *seq_list_start_head(struct list_head *arg0, loff_t arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct list_head));
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

// Function: seq_putc
// with type: int seq_putc(struct seq_file *, char)
// with return type: int
int __VERIFIER_nondet_int(void);
int seq_putc(struct seq_file *arg0, char arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: seq_puts
// with type: int seq_puts(struct seq_file *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int seq_puts(struct seq_file *arg0, const char *arg1) {
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

// Function: seq_release
// with type: int seq_release(struct inode *, struct file *)
// with return type: int
int __VERIFIER_nondet_int(void);
int seq_release(struct inode *arg0, struct file *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: single_open
// with type: int single_open(struct file *, int (*)(struct seq_file *, void *), void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int single_open(struct file *arg0, int (*arg1)(struct seq_file *, void *), void *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: single_release
// with type: int single_release(struct inode *, struct file *)
// with return type: int
int __VERIFIER_nondet_int(void);
int single_release(struct inode *arg0, struct file *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: skb_clone
// with type: struct sk_buff *skb_clone(struct sk_buff *, gfp_t )
// with return type: (struct sk_buff)*
struct sk_buff *skb_clone(struct sk_buff *arg0, gfp_t arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct sk_buff));
}

// Function: skb_copy
// with type: struct sk_buff *skb_copy(const struct sk_buff *, gfp_t )
// with return type: (struct sk_buff)*
struct sk_buff *skb_copy(const struct sk_buff *arg0, gfp_t arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct sk_buff));
}

// Function: skb_dequeue
// with type: struct sk_buff *skb_dequeue(struct sk_buff_head *)
// with return type: (struct sk_buff)*
struct sk_buff *skb_dequeue(struct sk_buff_head *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct sk_buff));
}

// Function: skb_pull
// with type: unsigned char *skb_pull(struct sk_buff *, unsigned int)
// with return type: (unsigned char)*
unsigned char *skb_pull(struct sk_buff *arg0, unsigned int arg1) {
  // Pointer type
  return ldv_malloc(sizeof(unsigned char));
}

// Function: skb_push
// with type: unsigned char *skb_push(struct sk_buff *, unsigned int)
// with return type: (unsigned char)*
unsigned char *skb_push(struct sk_buff *arg0, unsigned int arg1) {
  // Pointer type
  return ldv_malloc(sizeof(unsigned char));
}

// Function: skb_put
// with type: unsigned char *skb_put(struct sk_buff *, unsigned int)
// with return type: (unsigned char)*
unsigned char *skb_put(struct sk_buff *arg0, unsigned int arg1) {
  unsigned char *ret_val = arg0->data + arg0->tail;
  // a more precise implementation of skb_put would actually re-allocate memory
  // here
  arg0->tail += arg1;
  // Pointer type
  return ret_val;
}

// Function: skb_queue_purge
// with type: void skb_queue_purge(struct sk_buff_head *)
// with return type: void
void skb_queue_purge(struct sk_buff_head *arg0) {
  // Void type
  return;
}

// Function: skb_queue_tail
// with type: void skb_queue_tail(struct sk_buff_head *, struct sk_buff *)
// with return type: void
void skb_queue_tail(struct sk_buff_head *arg0, struct sk_buff *arg1) {
  // Void type
  return;
}

// Function: skb_realloc_headroom
// with type: struct sk_buff *skb_realloc_headroom(struct sk_buff *, unsigned int)
// with return type: (struct sk_buff)*
struct sk_buff *skb_realloc_headroom(struct sk_buff *arg0, unsigned int arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct sk_buff));
}

// Function: skb_trim
// with type: void skb_trim(struct sk_buff *, unsigned int)
// with return type: void
void skb_trim(struct sk_buff *arg0, unsigned int arg1) {
  // Void type
  return;
}

// Skip function: snprintf

// Skip function: sprintf

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

// Skip function: strncpy

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

// Function: unregister_netdev
// with type: void unregister_netdev(struct net_device *)
// with return type: void
void unregister_netdev(struct net_device *arg0) {
  // Void type
  return;
}

// Function: unregister_netdevice_queue
// with type: void unregister_netdevice_queue(struct net_device *, struct list_head *)
// with return type: void
void unregister_netdevice_queue(struct net_device *arg0, struct list_head *arg1) {
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

// Function: wireless_send_event
// with type: void wireless_send_event(struct net_device *, unsigned int, union iwreq_data *, const char *)
// with return type: void
void wireless_send_event(struct net_device *arg0, unsigned int arg1, union iwreq_data *arg2, const char *arg3) {
  // Void type
  return;
}

// Function: wireless_spy_update
// with type: void wireless_spy_update(struct net_device *, unsigned char *, struct iw_quality *)
// with return type: void
void wireless_spy_update(struct net_device *arg0, unsigned char *arg1, struct iw_quality *arg2) {
  // Void type
  return;
}

// Function: default_wake_function
// with type: int default_wake_function(wait_queue_t *, unsigned int, int, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int default_wake_function(wait_queue_t *arg0, unsigned int arg1, int arg2, void *arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

