#include <klee/klee.h>
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

// Function: __dev_kfree_skb_any
// with type: void __dev_kfree_skb_any(struct sk_buff *, enum skb_free_reason )
// with return type: void
void __dev_kfree_skb_any(struct sk_buff *arg0, enum skb_free_reason arg1) {
  // Void type
  return;
}

// Function: __ieee80211_get_rx_led_name
// with type: const char *__ieee80211_get_rx_led_name(struct ieee80211_hw *)
// with return type: (const char)*
const char *__ieee80211_get_rx_led_name(struct ieee80211_hw *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(char));
}

// Function: __ieee80211_get_tx_led_name
// with type: const char *__ieee80211_get_tx_led_name(struct ieee80211_hw *)
// with return type: (const char)*
const char *__ieee80211_get_tx_led_name(struct ieee80211_hw *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(char));
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

// Function: __pci_register_driver
// with type: int __pci_register_driver(struct pci_driver *, struct module *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int __pci_register_driver(struct pci_driver *arg0, struct module *arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __phys_addr
// with type: unsigned long int __phys_addr(unsigned long)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int __phys_addr(unsigned long arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: __raw_spin_lock_init
// with type: void __raw_spin_lock_init(raw_spinlock_t *, const char *, struct lock_class_key *)
// with return type: void
void __raw_spin_lock_init(raw_spinlock_t *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

// Function: __tasklet_hi_schedule
// with type: void __tasklet_hi_schedule(struct tasklet_struct *)
// with return type: void
void __tasklet_hi_schedule(struct tasklet_struct *arg0) {
  // Void type
  return;
}

// Function: __tasklet_schedule
// with type: void __tasklet_schedule(struct tasklet_struct *)
// with return type: void
void __tasklet_schedule(struct tasklet_struct *arg0) {
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

// Function: _dev_info
// with type: void _dev_info(const struct device *, const char *, ...)
// with return type: void
void _dev_info(const struct device *arg0, const char *arg1, ...) {
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

// Function: ath_hw_cycle_counters_update
// with type: void ath_hw_cycle_counters_update(struct ath_common *)
// with return type: void
void ath_hw_cycle_counters_update(struct ath_common *arg0) {
  // Void type
  return;
}

// Function: ath_hw_get_listen_time
// with type: int32_t ath_hw_get_listen_time(struct ath_common *)
// with return type: int32_t 
int __VERIFIER_nondet_int(void);
int32_t ath_hw_get_listen_time(struct ath_common *arg0) {
  // Typedef type
  // Real type: __s32 
  // Typedef type
  // Real type: int
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ath_hw_keyreset
// with type: bool ath_hw_keyreset(struct ath_common *, u16 )
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool ath_hw_keyreset(struct ath_common *arg0, u16 arg1) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: ath_hw_setbssidmask
// with type: void ath_hw_setbssidmask(struct ath_common *)
// with return type: void
void ath_hw_setbssidmask(struct ath_common *arg0) {
  // Void type
  return;
}

// Function: ath_is_49ghz_allowed
// with type: bool ath_is_49ghz_allowed(u16 )
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool ath_is_49ghz_allowed(u16 arg0) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: ath_is_mybeacon
// with type: bool ath_is_mybeacon(struct ath_common *, struct ieee80211_hdr *)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool ath_is_mybeacon(struct ath_common *arg0, struct ieee80211_hdr *arg1) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: ath_is_world_regd
// with type: bool ath_is_world_regd(struct ath_regulatory *)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool ath_is_world_regd(struct ath_regulatory *arg0) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: ath_key_config
// with type: int ath_key_config(struct ath_common *, struct ieee80211_vif *, struct ieee80211_sta *, struct ieee80211_key_conf *)
// with return type: int
int __VERIFIER_nondet_int(void);
int ath_key_config(struct ath_common *arg0, struct ieee80211_vif *arg1, struct ieee80211_sta *arg2, struct ieee80211_key_conf *arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ath_key_delete
// with type: void ath_key_delete(struct ath_common *, struct ieee80211_key_conf *)
// with return type: void
void ath_key_delete(struct ath_common *arg0, struct ieee80211_key_conf *arg1) {
  // Void type
  return;
}

// Function: ath_opmode_to_string
// with type: const char *ath_opmode_to_string(enum nl80211_iftype )
// with return type: (const char)*
const char *ath_opmode_to_string(enum nl80211_iftype arg0) {
  // Pointer type
  return ldv_malloc(sizeof(char));
}

// Function: ath_reg_notifier_apply
// with type: void ath_reg_notifier_apply(struct wiphy *, struct regulatory_request *, struct ath_regulatory *)
// with return type: void
void ath_reg_notifier_apply(struct wiphy *arg0, struct regulatory_request *arg1, struct ath_regulatory *arg2) {
  // Void type
  return;
}

// Function: ath_regd_get_band_ctl
// with type: u32 ath_regd_get_band_ctl(struct ath_regulatory *, enum ieee80211_band )
// with return type: u32 
unsigned int __VERIFIER_nondet_uint(void);
u32 ath_regd_get_band_ctl(struct ath_regulatory *arg0, enum ieee80211_band arg1) {
  // Typedef type
  // Real type: unsigned int
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: ath_regd_init
// with type: int ath_regd_init(struct ath_regulatory *, struct wiphy *, void (*)(struct wiphy *, struct regulatory_request *))
// with return type: int
int __VERIFIER_nondet_int(void);
int ath_regd_init(struct ath_regulatory *arg0, struct wiphy *arg1, void (*arg2)(struct wiphy *, struct regulatory_request *)) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ath_rxbuf_alloc
// with type: struct sk_buff *ath_rxbuf_alloc(struct ath_common *, u32 , gfp_t )
// with return type: (struct sk_buff)*
struct sk_buff *ath_rxbuf_alloc(struct ath_common *arg0, u32 arg1, gfp_t arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct sk_buff));
}

// Skip function: calloc

// Function: cancel_delayed_work_sync
// with type: bool cancel_delayed_work_sync(struct delayed_work *)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool cancel_delayed_work_sync(struct delayed_work *arg0) {
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

// Function: debug_dma_map_page
// with type: void debug_dma_map_page(struct device *, struct page *, size_t , size_t , int, dma_addr_t , bool )
// with return type: void
void debug_dma_map_page(struct device *arg0, struct page *arg1, size_t arg2, size_t arg3, int arg4, dma_addr_t arg5, bool arg6) {
  // Void type
  return;
}

// Function: debug_dma_mapping_error
// with type: void debug_dma_mapping_error(struct device *, dma_addr_t )
// with return type: void
void debug_dma_mapping_error(struct device *arg0, dma_addr_t arg1) {
  // Void type
  return;
}

// Function: debug_dma_unmap_page
// with type: void debug_dma_unmap_page(struct device *, dma_addr_t , size_t , int, bool )
// with return type: void
void debug_dma_unmap_page(struct device *arg0, dma_addr_t arg1, size_t arg2, int arg3, bool arg4) {
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

// Function: debugfs_create_bool
// with type: struct dentry *debugfs_create_bool(const char *, umode_t , struct dentry *, u32 *)
// with return type: (struct dentry)*
struct dentry *debugfs_create_bool(const char *arg0, umode_t arg1, struct dentry *arg2, u32 *arg3) {
  // Pointer type
  return ldv_malloc(sizeof(struct dentry));
}

// Function: debugfs_create_dir
// with type: struct dentry *debugfs_create_dir(const char *, struct dentry *)
// with return type: (struct dentry)*
struct dentry *debugfs_create_dir(const char *arg0, struct dentry *arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct dentry));
}

// Function: debugfs_create_file
// with type: struct dentry *debugfs_create_file(const char *, umode_t , struct dentry *, void *, const struct file_operations *)
// with return type: (struct dentry)*
struct dentry *debugfs_create_file(const char *arg0, umode_t arg1, struct dentry *arg2, void *arg3, const struct file_operations *arg4) {
  // Pointer type
  return ldv_malloc(sizeof(struct dentry));
}

// Function: default_llseek
// with type: loff_t default_llseek(struct file *, loff_t , int)
// with return type: loff_t 
long __VERIFIER_nondet_long(void);
loff_t default_llseek(struct file *arg0, loff_t arg1, int arg2) {
  // Typedef type
  // Real type: __kernel_loff_t 
  // Typedef type
  // Real type: long long
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: dev_err
// with type: void dev_err(const struct device *, const char *, ...)
// with return type: void
void dev_err(const struct device *arg0, const char *arg1, ...) {
  // Void type
  return;
}

// Function: dma_alloc_attrs
// with type: void *dma_alloc_attrs(struct device *, size_t , dma_addr_t *, gfp_t , struct dma_attrs *)
// with return type: (void)*
void *dma_alloc_attrs(struct device *arg0, size_t arg1, dma_addr_t *arg2, gfp_t arg3, struct dma_attrs *arg4) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: dma_free_attrs
// with type: void dma_free_attrs(struct device *, size_t , void *, dma_addr_t , struct dma_attrs *)
// with return type: void
void dma_free_attrs(struct device *arg0, size_t arg1, void *arg2, dma_addr_t arg3, struct dma_attrs *arg4) {
  // Void type
  return;
}

// Function: dma_set_mask
// with type: int dma_set_mask(struct device *, u64 )
// with return type: int
int __VERIFIER_nondet_int(void);
int dma_set_mask(struct device *arg0, u64 arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ewma_add
// with type: struct ewma *ewma_add(struct ewma *, unsigned long)
// with return type: (struct ewma)*
struct ewma *ewma_add(struct ewma *arg0, unsigned long arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct ewma));
}

// Function: ewma_init
// with type: void ewma_init(struct ewma *, unsigned long, unsigned long)
// with return type: void
void ewma_init(struct ewma *arg0, unsigned long arg1, unsigned long arg2) {
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

// Function: free_irq
// with type: void free_irq(unsigned int, void *)
// with return type: void
void free_irq(unsigned int arg0, void *arg1) {
  // Void type
  return;
}

// Function: ieee80211_alloc_hw_nm
// with type: struct ieee80211_hw *ieee80211_alloc_hw_nm(size_t , const struct ieee80211_ops *, const char *)
// with return type: (struct ieee80211_hw)*
struct ieee80211_hw *ieee80211_alloc_hw_nm(size_t arg0, const struct ieee80211_ops *arg1, const char *arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct ieee80211_hw));
}

// Function: ieee80211_beacon_get_tim
// with type: struct sk_buff *ieee80211_beacon_get_tim(struct ieee80211_hw *, struct ieee80211_vif *, u16 *, u16 *)
// with return type: (struct sk_buff)*
struct sk_buff *ieee80211_beacon_get_tim(struct ieee80211_hw *arg0, struct ieee80211_vif *arg1, u16 *arg2, u16 *arg3) {
  // Pointer type
  return ldv_malloc(sizeof(struct sk_buff));
}

// Function: ieee80211_channel_to_frequency
// with type: int ieee80211_channel_to_frequency(int, enum ieee80211_band )
// with return type: int
int __VERIFIER_nondet_int(void);
int ieee80211_channel_to_frequency(int arg0, enum ieee80211_band arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ieee80211_ctstoself_duration
// with type: __le16 ieee80211_ctstoself_duration(struct ieee80211_hw *, struct ieee80211_vif *, size_t , const struct ieee80211_tx_info *)
// with return type: __le16 
unsigned short __VERIFIER_nondet_ushort(void);
__le16 ieee80211_ctstoself_duration(struct ieee80211_hw *arg0, struct ieee80211_vif *arg1, size_t arg2, const struct ieee80211_tx_info *arg3) {
  // Typedef type
  // Real type: __u16 
  // Typedef type
  // Real type: unsigned short
  // Simple type
  return __VERIFIER_nondet_ushort();
}

// Function: ieee80211_free_hw
// with type: void ieee80211_free_hw(struct ieee80211_hw *)
// with return type: void
void ieee80211_free_hw(struct ieee80211_hw *arg0) {
  // Void type
  return;
}

// Function: ieee80211_free_txskb
// with type: void ieee80211_free_txskb(struct ieee80211_hw *, struct sk_buff *)
// with return type: void
void ieee80211_free_txskb(struct ieee80211_hw *arg0, struct sk_buff *arg1) {
  // Void type
  return;
}

// Function: ieee80211_frequency_to_channel
// with type: int ieee80211_frequency_to_channel(int)
// with return type: int
int __VERIFIER_nondet_int(void);
int ieee80211_frequency_to_channel(int arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ieee80211_generic_frame_duration
// with type: __le16 ieee80211_generic_frame_duration(struct ieee80211_hw *, struct ieee80211_vif *, enum ieee80211_band , size_t , struct ieee80211_rate *)
// with return type: __le16 
unsigned short __VERIFIER_nondet_ushort(void);
__le16 ieee80211_generic_frame_duration(struct ieee80211_hw *arg0, struct ieee80211_vif *arg1, enum ieee80211_band arg2, size_t arg3, struct ieee80211_rate *arg4) {
  // Typedef type
  // Real type: __u16 
  // Typedef type
  // Real type: unsigned short
  // Simple type
  return __VERIFIER_nondet_ushort();
}

// Function: ieee80211_get_buffered_bc
// with type: struct sk_buff *ieee80211_get_buffered_bc(struct ieee80211_hw *, struct ieee80211_vif *)
// with return type: (struct sk_buff)*
struct sk_buff *ieee80211_get_buffered_bc(struct ieee80211_hw *arg0, struct ieee80211_vif *arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct sk_buff));
}

// Function: ieee80211_get_hdrlen_from_skb
// with type: unsigned int ieee80211_get_hdrlen_from_skb(const struct sk_buff *)
// with return type: unsigned int
unsigned int __VERIFIER_nondet_uint(void);
unsigned int ieee80211_get_hdrlen_from_skb(const struct sk_buff *arg0) {
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: ieee80211_get_tx_rates
// with type: void ieee80211_get_tx_rates(struct ieee80211_vif *, struct ieee80211_sta *, struct sk_buff *, struct ieee80211_tx_rate *, int)
// with return type: void
void ieee80211_get_tx_rates(struct ieee80211_vif *arg0, struct ieee80211_sta *arg1, struct sk_buff *arg2, struct ieee80211_tx_rate *arg3, int arg4) {
  // Void type
  return;
}

// Function: ieee80211_hdrlen
// with type: unsigned int ieee80211_hdrlen(__le16 )
// with return type: unsigned int
unsigned int __VERIFIER_nondet_uint(void);
unsigned int ieee80211_hdrlen(__le16 arg0) {
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: ieee80211_iterate_active_interfaces_atomic
// with type: void ieee80211_iterate_active_interfaces_atomic(struct ieee80211_hw *, u32 , void (*)(void *, u8 *, struct ieee80211_vif *), void *)
// with return type: void
void ieee80211_iterate_active_interfaces_atomic(struct ieee80211_hw *arg0, u32 arg1, void (*arg2)(void *, u8 *, struct ieee80211_vif *), void *arg3) {
  // Void type
  return;
}

// Function: ieee80211_queue_delayed_work
// with type: void ieee80211_queue_delayed_work(struct ieee80211_hw *, struct delayed_work *, unsigned long)
// with return type: void
void ieee80211_queue_delayed_work(struct ieee80211_hw *arg0, struct delayed_work *arg1, unsigned long arg2) {
  // Void type
  return;
}

// Function: ieee80211_queue_work
// with type: void ieee80211_queue_work(struct ieee80211_hw *, struct work_struct *)
// with return type: void
void ieee80211_queue_work(struct ieee80211_hw *arg0, struct work_struct *arg1) {
  // Void type
  return;
}

// Function: ieee80211_register_hw
// with type: int ieee80211_register_hw(struct ieee80211_hw *)
// with return type: int
int __VERIFIER_nondet_int(void);
int ieee80211_register_hw(struct ieee80211_hw *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ieee80211_rts_duration
// with type: __le16 ieee80211_rts_duration(struct ieee80211_hw *, struct ieee80211_vif *, size_t , const struct ieee80211_tx_info *)
// with return type: __le16 
unsigned short __VERIFIER_nondet_ushort(void);
__le16 ieee80211_rts_duration(struct ieee80211_hw *arg0, struct ieee80211_vif *arg1, size_t arg2, const struct ieee80211_tx_info *arg3) {
  // Typedef type
  // Real type: __u16 
  // Typedef type
  // Real type: unsigned short
  // Simple type
  return __VERIFIER_nondet_ushort();
}

// Function: ieee80211_rx
// with type: void ieee80211_rx(struct ieee80211_hw *, struct sk_buff *)
// with return type: void
void ieee80211_rx(struct ieee80211_hw *arg0, struct sk_buff *arg1) {
  // Void type
  return;
}

// Function: ieee80211_stop_queue
// with type: void ieee80211_stop_queue(struct ieee80211_hw *, int)
// with return type: void
void ieee80211_stop_queue(struct ieee80211_hw *arg0, int arg1) {
  // Void type
  return;
}

// Function: ieee80211_stop_queues
// with type: void ieee80211_stop_queues(struct ieee80211_hw *)
// with return type: void
void ieee80211_stop_queues(struct ieee80211_hw *arg0) {
  // Void type
  return;
}

// Function: ieee80211_tx_status
// with type: void ieee80211_tx_status(struct ieee80211_hw *, struct sk_buff *)
// with return type: void
void ieee80211_tx_status(struct ieee80211_hw *arg0, struct sk_buff *arg1) {
  // Void type
  return;
}

// Function: ieee80211_unregister_hw
// with type: void ieee80211_unregister_hw(struct ieee80211_hw *)
// with return type: void
void ieee80211_unregister_hw(struct ieee80211_hw *arg0) {
  // Void type
  return;
}

// Function: ieee80211_wake_queue
// with type: void ieee80211_wake_queue(struct ieee80211_hw *, int)
// with return type: void
void ieee80211_wake_queue(struct ieee80211_hw *arg0, int arg1) {
  // Void type
  return;
}

// Function: ieee80211_wake_queues
// with type: void ieee80211_wake_queues(struct ieee80211_hw *)
// with return type: void
void ieee80211_wake_queues(struct ieee80211_hw *arg0) {
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

// Function: ioread32
// with type: unsigned int ioread32(void *)
// with return type: unsigned int
unsigned int __VERIFIER_nondet_uint(void);
unsigned int ioread32(void *arg0) {
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: iowrite32
// with type: void iowrite32(u32 , void *)
// with return type: void
void iowrite32(u32 arg0, void *arg1) {
  // Void type
  return;
}

// Skip function: kfree

// Function: kstrtoint
// with type: int kstrtoint(const char *, unsigned int, int *)
// with return type: int
int __VERIFIER_nondet_int(void);
int kstrtoint(const char *arg0, unsigned int arg1, int *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv__builtin_va_end
// with type: void ldv__builtin_va_end(__builtin_va_list *)
// with return type: void
void ldv__builtin_va_end(__builtin_va_list *arg0) {
  // Void type
  return;
}

// Function: ldv__builtin_va_start
// with type: void ldv__builtin_va_start(__builtin_va_list *)
// with return type: void
void ldv__builtin_va_start(__builtin_va_list *arg0) {
  // Void type
  return;
}

// Function: ldv_check_final_state
// with type: void ldv_check_final_state()
// with return type: void
void ldv_check_final_state() {
  // Void type
  return;
}

// Function: ldv_complete_6
// with type: int ldv_complete_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_complete_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_freeze_late_6
// with type: int ldv_freeze_late_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_freeze_late_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_freeze_noirq_6
// with type: int ldv_freeze_noirq_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_freeze_noirq_6() {
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

// Function: ldv_poweroff_late_6
// with type: int ldv_poweroff_late_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_poweroff_late_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_poweroff_noirq_6
// with type: int ldv_poweroff_noirq_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_poweroff_noirq_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_prepare_6
// with type: int ldv_prepare_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_prepare_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_probe_29
// with type: int ldv_probe_29()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_probe_29() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_probe_7
// with type: int ldv_probe_7()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_probe_7() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_10
// with type: int ldv_release_10()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_10() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_11
// with type: int ldv_release_11()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_11() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_12
// with type: int ldv_release_12()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_12() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_13
// with type: int ldv_release_13()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_13() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_14
// with type: int ldv_release_14()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_14() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_15
// with type: int ldv_release_15()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_15() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_16
// with type: int ldv_release_16()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_16() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_29
// with type: int ldv_release_29()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_29() {
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

// Function: ldv_release_9
// with type: int ldv_release_9()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_9() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_restore_early_6
// with type: int ldv_restore_early_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_restore_early_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_restore_noirq_6
// with type: int ldv_restore_noirq_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_restore_noirq_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_resume_early_6
// with type: int ldv_resume_early_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_resume_early_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_resume_noirq_6
// with type: int ldv_resume_noirq_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_resume_noirq_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_shutdown_5
// with type: int ldv_shutdown_5()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_shutdown_5() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_some_page
// with type: struct page *ldv_some_page()
// with return type: (struct page)*
struct page *ldv_some_page() {
  // Pointer type
  return ldv_malloc(sizeof(struct page));
}

// Function: ldv_suspend_late_6
// with type: int ldv_suspend_late_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_suspend_late_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_suspend_noirq_6
// with type: int ldv_suspend_noirq_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_suspend_noirq_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_thaw_early_6
// with type: int ldv_thaw_early_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_thaw_early_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_thaw_noirq_6
// with type: int ldv_thaw_noirq_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_thaw_noirq_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: led_classdev_register
// with type: int led_classdev_register(struct device *, struct led_classdev *)
// with return type: int
int __VERIFIER_nondet_int(void);
int led_classdev_register(struct device *arg0, struct led_classdev *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: led_classdev_unregister
// with type: void led_classdev_unregister(struct led_classdev *)
// with return type: void
void led_classdev_unregister(struct led_classdev *arg0) {
  // Void type
  return;
}

// Function: list_del
// with type: void list_del(struct list_head *)
// with return type: void
void list_del(struct list_head *arg0) {
  // Void type
  return;
}

// Function: lock_is_held
// with type: int lock_is_held(struct lockdep_map *)
// with return type: int
int __VERIFIER_nondet_int(void);
int lock_is_held(struct lockdep_map *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Skip function: memcpy

// Skip function: memmove

// Skip function: memset

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

// Function: net_ratelimit
// with type: int net_ratelimit()
// with return type: int
int __VERIFIER_nondet_int(void);
int net_ratelimit() {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: pci_bus_read_config_byte
// with type: int pci_bus_read_config_byte(struct pci_bus *, unsigned int, int, u8 *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_bus_read_config_byte(struct pci_bus *arg0, unsigned int arg1, int arg2, u8 *arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_bus_write_config_byte
// with type: int pci_bus_write_config_byte(struct pci_bus *, unsigned int, int, u8 )
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_bus_write_config_byte(struct pci_bus *arg0, unsigned int arg1, int arg2, u8 arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_disable_device
// with type: void pci_disable_device(struct pci_dev *)
// with return type: void
void pci_disable_device(struct pci_dev *arg0) {
  // Void type
  return;
}

// Function: pci_disable_link_state
// with type: void pci_disable_link_state(struct pci_dev *, int)
// with return type: void
void pci_disable_link_state(struct pci_dev *arg0, int arg1) {
  // Void type
  return;
}

// Function: pci_enable_device
// with type: int pci_enable_device(struct pci_dev *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_enable_device(struct pci_dev *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: pci_match_id
// with type: const struct pci_device_id *pci_match_id(const struct pci_device_id *, struct pci_dev *)
// with return type: (struct pci_device_id)*
const struct pci_device_id *pci_match_id(const struct pci_device_id *arg0, struct pci_dev *arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct pci_device_id));
}

// Function: pci_release_region
// with type: void pci_release_region(struct pci_dev *, int)
// with return type: void
void pci_release_region(struct pci_dev *arg0, int arg1) {
  // Void type
  return;
}

// Function: pci_request_region
// with type: int pci_request_region(struct pci_dev *, int, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_request_region(struct pci_dev *arg0, int arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_set_master
// with type: void pci_set_master(struct pci_dev *)
// with return type: void
void pci_set_master(struct pci_dev *arg0) {
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

// Function: rcu_lockdep_current_cpu_online
// with type: bool rcu_lockdep_current_cpu_online()
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool rcu_lockdep_current_cpu_online() {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: regulatory_hint
// with type: int regulatory_hint(struct wiphy *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int regulatory_hint(struct wiphy *arg0, const char *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: request_threaded_irq
// with type: int request_threaded_irq(unsigned int, irqreturn_t (*)(int, void *), irqreturn_t (*)(int, void *), unsigned long, const char *, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int request_threaded_irq(unsigned int arg0, irqreturn_t (*arg1)(int, void *), irqreturn_t (*arg2)(int, void *), unsigned long arg3, const char *arg4, void *arg5) {
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

// Function: seq_release
// with type: int seq_release(struct inode *, struct file *)
// with return type: int
int __VERIFIER_nondet_int(void);
int seq_release(struct inode *arg0, struct file *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: simple_open
// with type: int simple_open(struct inode *, struct file *)
// with return type: int
int __VERIFIER_nondet_int(void);
int simple_open(struct inode *arg0, struct file *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: simple_read_from_buffer
// with type: ssize_t simple_read_from_buffer(void *, size_t , loff_t *, const void *, size_t )
// with return type: ssize_t 
long __VERIFIER_nondet_long(void);
ssize_t simple_read_from_buffer(void *arg0, size_t arg1, loff_t *arg2, const void *arg3, size_t arg4) {
  // Typedef type
  // Real type: __kernel_ssize_t 
  // Typedef type
  // Real type: __kernel_long_t 
  // Typedef type
  // Real type: long
  // Simple type
  return __VERIFIER_nondet_long();
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

// Skip function: snprintf

// Skip function: strcpy

// Skip function: strlen

// Skip function: strncmp

// Skip function: strncpy

// Function: synchronize_irq
// with type: void synchronize_irq(unsigned int)
// with return type: void
void synchronize_irq(unsigned int arg0) {
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

// Function: sysfs_remove_group
// with type: void sysfs_remove_group(struct kobject *, const struct attribute_group *)
// with return type: void
void sysfs_remove_group(struct kobject *arg0, const struct attribute_group *arg1) {
  // Void type
  return;
}

// Function: tasklet_init
// with type: void tasklet_init(struct tasklet_struct *, void (*)(unsigned long), unsigned long)
// with return type: void
void tasklet_init(struct tasklet_struct *arg0, void (*arg1)(unsigned long), unsigned long arg2) {
  // Void type
  return;
}

// Function: tasklet_kill
// with type: void tasklet_kill(struct tasklet_struct *)
// with return type: void
void tasklet_kill(struct tasklet_struct *arg0) {
  // Void type
  return;
}

// Function: trace_define_field
// with type: int trace_define_field(struct trace_event_call *, const char *, const char *, int, int, int, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int trace_define_field(struct trace_event_call *arg0, const char *arg1, const char *arg2, int arg3, int arg4, int arg5, int arg6) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: trace_event_raw_init
// with type: int trace_event_raw_init(struct trace_event_call *)
// with return type: int
int __VERIFIER_nondet_int(void);
int trace_event_raw_init(struct trace_event_call *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: trace_event_reg
// with type: int trace_event_reg(struct trace_event_call *, enum trace_reg , void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int trace_event_reg(struct trace_event_call *arg0, enum trace_reg arg1, void *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: trace_raw_output_prep
// with type: int trace_raw_output_prep(struct trace_iterator *, struct trace_event *)
// with return type: int
int __VERIFIER_nondet_int(void);
int trace_raw_output_prep(struct trace_iterator *arg0, struct trace_event *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: trace_seq_printf
// with type: void trace_seq_printf(struct trace_seq *, const char *, ...)
// with return type: void
void trace_seq_printf(struct trace_seq *arg0, const char *arg1, ...) {
  // Void type
  return;
}

// Function: usleep_range
// with type: void usleep_range(unsigned long, unsigned long)
// with return type: void
void usleep_range(unsigned long arg0, unsigned long arg1) {
  // Void type
  return;
}

// Function: vfree
// with type: void vfree(const void *)
// with return type: void
void vfree(const void *arg0) {
  // Void type
  return;
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

// Function: wiphy_rfkill_set_hw_state
// with type: void wiphy_rfkill_set_hw_state(struct wiphy *, bool )
// with return type: void
void wiphy_rfkill_set_hw_state(struct wiphy *arg0, bool arg1) {
  // Void type
  return;
}

// Function: wiphy_to_ieee80211_hw
// with type: struct ieee80211_hw *wiphy_to_ieee80211_hw(struct wiphy *)
// with return type: (struct ieee80211_hw)*
struct ieee80211_hw *wiphy_to_ieee80211_hw(struct wiphy *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct ieee80211_hw));
}

