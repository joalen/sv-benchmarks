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

// Function: __dynamic_netdev_dbg
// with type: void __dynamic_netdev_dbg(struct _ddebug *, const struct net_device *, const char *, ...)
// with return type: void
void __dynamic_netdev_dbg(struct _ddebug *arg0, const struct net_device *arg1, const char *arg2, ...) {
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

// Function: add_timer
// with type: void add_timer(struct timer_list *)
// with return type: void
void add_timer(struct timer_list *arg0) {
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

// Function: consume_skb
// with type: void consume_skb(struct sk_buff *)
// with return type: void
void consume_skb(struct sk_buff *arg0) {
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

// Function: dev_err
// with type: void dev_err(const struct device *, const char *, ...)
// with return type: void
void dev_err(const struct device *arg0, const char *arg1, ...) {
  // Void type
  return;
}

// Function: eth_change_mtu
// with type: int eth_change_mtu(struct net_device *, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int eth_change_mtu(struct net_device *arg0, int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: eth_mac_addr
// with type: int eth_mac_addr(struct net_device *, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int eth_mac_addr(struct net_device *arg0, void *arg1) {
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

// Function: free_netdev
// with type: void free_netdev(struct net_device *)
// with return type: void
void free_netdev(struct net_device *arg0) {
  // Void type
  return;
}

// Skip function: kfree

// Function: ldv_check_final_state
// with type: void ldv_check_final_state()
// with return type: void
void ldv_check_final_state() {
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

// Function: ldv_ndo_init_4
// with type: int ldv_ndo_init_4()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ndo_init_4() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ndo_uninit_4
// with type: int ldv_ndo_uninit_4()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ndo_uninit_4() {
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

// Skip function: malloc

// Skip function: memset

// Function: mod_timer
// with type: int mod_timer(struct timer_list *, unsigned long)
// with return type: int
int __VERIFIER_nondet_int(void);
int mod_timer(struct timer_list *arg0, unsigned long arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: netdev_err
// with type: void netdev_err(const struct net_device *, const char *, ...)
// with return type: void
void netdev_err(const struct net_device *arg0, const char *arg1, ...) {
  // Void type
  return;
}

// Function: netdev_info
// with type: void netdev_info(const struct net_device *, const char *, ...)
// with return type: void
void netdev_info(const struct net_device *arg0, const char *arg1, ...) {
  // Void type
  return;
}

// Function: netdev_warn
// with type: void netdev_warn(const struct net_device *, const char *, ...)
// with return type: void
void netdev_warn(const struct net_device *arg0, const char *arg1, ...) {
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

// Function: netif_tx_wake_queue
// with type: void netif_tx_wake_queue(struct netdev_queue *)
// with return type: void
void netif_tx_wake_queue(struct netdev_queue *arg0) {
  // Void type
  return;
}

// Function: pcmcia_dev_present
// with type: struct pcmcia_device *pcmcia_dev_present(struct pcmcia_device *)
// with return type: (struct pcmcia_device)*
struct pcmcia_device *pcmcia_dev_present(struct pcmcia_device *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct pcmcia_device));
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

// Function: pcmcia_get_tuple
// with type: size_t pcmcia_get_tuple(struct pcmcia_device *, cisdata_t , u8 **)
// with return type: size_t 
unsigned long __VERIFIER_nondet_ulong(void);
size_t pcmcia_get_tuple(struct pcmcia_device *arg0, cisdata_t arg1, u8 **arg2) {
  // Typedef type
  // Real type: __kernel_size_t 
  // Typedef type
  // Real type: __kernel_ulong_t 
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
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

// Function: pcmcia_request_irq
// with type: int pcmcia_request_irq(struct pcmcia_device *, irqreturn_t (*)(int, void *))
// with return type: int
int __VERIFIER_nondet_int(void);
int pcmcia_request_irq(struct pcmcia_device *arg0, irqreturn_t (*arg1)(int, void *)) {
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

// Function: register_netdev
// with type: int register_netdev(struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int register_netdev(struct net_device *arg0) {
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

// Skip function: snprintf

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

// Function: unregister_netdev
// with type: void unregister_netdev(struct net_device *)
// with return type: void
void unregister_netdev(struct net_device *arg0) {
  // Void type
  return;
}

