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

// Function: __init_work
// with type: void __init_work(struct work_struct *, int)
// with return type: void
void __init_work(struct work_struct *arg0, int arg1) {
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

// Function: __usecs_to_jiffies
// with type: unsigned long int __usecs_to_jiffies(const unsigned int)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int __usecs_to_jiffies(const unsigned int arg0) {
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

// Function: _raw_spin_unlock
// with type: void _raw_spin_unlock(raw_spinlock_t *)
// with return type: void
void _raw_spin_unlock(raw_spinlock_t *arg0) {
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

// Function: dev_err
// with type: void dev_err(const struct device *, const char *, ...)
// with return type: void
void dev_err(const struct device *arg0, const char *arg1, ...) {
  // Void type
  return;
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

// Function: dma_supported
// with type: int dma_supported(struct device *, u64 )
// with return type: int
int __VERIFIER_nondet_int(void);
int dma_supported(struct device *arg0, u64 arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: eeprom_93cx6_multiread
// with type: void eeprom_93cx6_multiread(struct eeprom_93cx6 *, const u8 , __le16 *, const u16 )
// with return type: void
void eeprom_93cx6_multiread(struct eeprom_93cx6 *arg0, const u8 arg1, __le16 *arg2, const u16 arg3) {
  // Void type
  return;
}

// Function: eeprom_93cx6_read
// with type: void eeprom_93cx6_read(struct eeprom_93cx6 *, const u8 , u16 *)
// with return type: void
void eeprom_93cx6_read(struct eeprom_93cx6 *arg0, const u8 arg1, u16 *arg2) {
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

// Function: get_random_bytes
// with type: void get_random_bytes(void *, int)
// with return type: void
void get_random_bytes(void *arg0, int arg1) {
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

// Function: ieee80211_queue_stopped
// with type: int ieee80211_queue_stopped(struct ieee80211_hw *, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int ieee80211_queue_stopped(struct ieee80211_hw *arg0, int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: ieee80211_rx_irqsafe
// with type: void ieee80211_rx_irqsafe(struct ieee80211_hw *, struct sk_buff *)
// with return type: void
void ieee80211_rx_irqsafe(struct ieee80211_hw *arg0, struct sk_buff *arg1) {
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

// Function: ieee80211_tx_status_irqsafe
// with type: void ieee80211_tx_status_irqsafe(struct ieee80211_hw *, struct sk_buff *)
// with return type: void
void ieee80211_tx_status_irqsafe(struct ieee80211_hw *arg0, struct sk_buff *arg1) {
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

// Function: init_timer_key
// with type: void init_timer_key(struct timer_list *, unsigned int, const char *, struct lock_class_key *)
// with return type: void
void init_timer_key(struct timer_list *arg0, unsigned int arg1, const char *arg2, struct lock_class_key *arg3) {
  // Void type
  return;
}

// Function: ioread16
// with type: unsigned int ioread16(void *)
// with return type: unsigned int
unsigned int __VERIFIER_nondet_uint(void);
unsigned int ioread16(void *arg0) {
  // Simple type
  return __VERIFIER_nondet_uint();
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

// Function: iowrite16
// with type: void iowrite16(u16 , void *)
// with return type: void
void iowrite16(u16 arg0, void *arg1) {
  // Void type
  return;
}

// Function: iowrite32
// with type: void iowrite32(u32 , void *)
// with return type: void
void iowrite32(u32 arg0, void *arg1) {
  // Void type
  return;
}

// Function: iowrite8
// with type: void iowrite8(u8 , void *)
// with return type: void
void iowrite8(u8 arg0, void *arg1) {
  // Void type
  return;
}

// Function: kfree_skb
// with type: void kfree_skb(struct sk_buff *)
// with return type: void
void kfree_skb(struct sk_buff *arg0) {
  // Void type
  return;
}

// Function: ldv_bind_4
// with type: int ldv_bind_4()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_bind_4() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_bind_5
// with type: int ldv_bind_5()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_bind_5() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_bind_6
// with type: int ldv_bind_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_bind_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_bind_7
// with type: int ldv_bind_7()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_bind_7() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_bind_8
// with type: int ldv_bind_8()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_bind_8() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_bind_9
// with type: int ldv_bind_9()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_bind_9() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_check_final_state
// with type: void ldv_check_final_state()
// with return type: void
void ldv_check_final_state() {
  // Void type
  return;
}

// Function: ldv_disconnect_4
// with type: int ldv_disconnect_4()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_disconnect_4() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_disconnect_5
// with type: int ldv_disconnect_5()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_disconnect_5() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_disconnect_6
// with type: int ldv_disconnect_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_disconnect_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_disconnect_7
// with type: int ldv_disconnect_7()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_disconnect_7() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_disconnect_8
// with type: int ldv_disconnect_8()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_disconnect_8() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_disconnect_9
// with type: int ldv_disconnect_9()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_disconnect_9() {
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

// Function: ldv_release_4
// with type: int ldv_release_4()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_4() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_5
// with type: int ldv_release_5()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_5() {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: ldv_release_8
// with type: int ldv_release_8()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_8() {
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

// Function: ldv_resume_early_10
// with type: int ldv_resume_early_10()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_resume_early_10() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_shutdown_10
// with type: int ldv_shutdown_10()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_shutdown_10() {
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

// Function: ldv_start_4
// with type: int ldv_start_4()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_start_4() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_start_5
// with type: int ldv_start_5()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_start_5() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_start_6
// with type: int ldv_start_6()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_start_6() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_start_7
// with type: int ldv_start_7()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_start_7() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_start_8
// with type: int ldv_start_8()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_start_8() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_start_9
// with type: int ldv_start_9()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_start_9() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_suspend_late_10
// with type: int ldv_suspend_late_10()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_suspend_late_10() {
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

// Skip function: malloc

// Skip function: memcpy

// Skip function: memset

// Function: msleep
// with type: void msleep(unsigned int)
// with return type: void
void msleep(unsigned int arg0) {
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

// Function: pci_choose_state
// with type: pci_power_t pci_choose_state(struct pci_dev *, pm_message_t )
// with return type: pci_power_t 
int __VERIFIER_nondet_int(void);
pci_power_t pci_choose_state(struct pci_dev *arg0, pm_message_t arg1) {
  // Typedef type
  // Real type: int
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

// Function: pci_release_regions
// with type: void pci_release_regions(struct pci_dev *)
// with return type: void
void pci_release_regions(struct pci_dev *arg0) {
  // Void type
  return;
}

// Function: pci_request_regions
// with type: int pci_request_regions(struct pci_dev *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_request_regions(struct pci_dev *arg0, const char *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_restore_state
// with type: void pci_restore_state(struct pci_dev *)
// with return type: void
void pci_restore_state(struct pci_dev *arg0) {
  // Void type
  return;
}

// Function: pci_save_state
// with type: int pci_save_state(struct pci_dev *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_save_state(struct pci_dev *arg0) {
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

// Function: pci_set_power_state
// with type: int pci_set_power_state(struct pci_dev *, pci_power_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_set_power_state(struct pci_dev *arg0, pci_power_t arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_try_set_mwi
// with type: int pci_try_set_mwi(struct pci_dev *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_try_set_mwi(struct pci_dev *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: request_threaded_irq
// with type: int request_threaded_irq(unsigned int, irqreturn_t (*)(int, void *), irqreturn_t (*)(int, void *), unsigned long, const char *, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int request_threaded_irq(unsigned int arg0, irqreturn_t (*arg1)(int, void *), irqreturn_t (*arg2)(int, void *), unsigned long arg3, const char *arg4, void *arg5) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: usleep_range
// with type: void usleep_range(unsigned long, unsigned long)
// with return type: void
void usleep_range(unsigned long arg0, unsigned long arg1) {
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

