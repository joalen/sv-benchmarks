#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Skip function: __VERIFIER_nondet_u16

// Skip function: __VERIFIER_nondet_ulong

// Function: __alloc_percpu
// with type: void *__alloc_percpu(size_t , size_t )
// with return type: (void)*
void *__alloc_percpu(size_t arg0, size_t arg1) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: __compiletime_assert_402
// with type: void __compiletime_assert_402()
// with return type: void
void __compiletime_assert_402() {
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

// Function: __dynamic_netdev_dbg
// with type: int __dynamic_netdev_dbg(struct _ddebug *, const struct net_device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int __dynamic_netdev_dbg(struct _ddebug *arg0, const struct net_device *arg1, const char *arg2, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __ethtool_get_settings
// with type: int __ethtool_get_settings(struct net_device *, struct ethtool_cmd *)
// with return type: int
int __VERIFIER_nondet_int(void);
int __ethtool_get_settings(struct net_device *arg0, struct ethtool_cmd *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __genl_register_family
// with type: int __genl_register_family(struct genl_family *)
// with return type: int
int __VERIFIER_nondet_int(void);
int __genl_register_family(struct genl_family *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: __might_sleep
// with type: void __might_sleep(const char *, int, int)
// with return type: void
void __might_sleep(const char *arg0, int arg1, int arg2) {
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

// Function: __netpoll_cleanup
// with type: void __netpoll_cleanup(struct netpoll *)
// with return type: void
void __netpoll_cleanup(struct netpoll *arg0) {
  // Void type
  return;
}

// Function: __netpoll_setup
// with type: int __netpoll_setup(struct netpoll *, struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int __netpoll_setup(struct netpoll *arg0, struct net_device *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __nlmsg_put
// with type: struct nlmsghdr *__nlmsg_put(struct sk_buff *, u32 , u32 , int, int, int)
// with return type: (struct nlmsghdr)*
struct nlmsghdr *__nlmsg_put(struct sk_buff *arg0, u32 arg1, u32 arg2, int arg3, int arg4, int arg5) {
  // Pointer type
  return ldv_malloc(sizeof(struct nlmsghdr));
}

// Function: __request_module
// with type: int __request_module(bool , const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int __request_module(bool arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: call_netdevice_notifiers
// with type: int call_netdevice_notifiers(unsigned long, struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int call_netdevice_notifiers(unsigned long arg0, struct net_device *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: debug_lockdep_rcu_enabled
// with type: int debug_lockdep_rcu_enabled()
// with return type: int
int __VERIFIER_nondet_int(void);
int debug_lockdep_rcu_enabled() {
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

// Function: dev_get_by_index
// with type: struct net_device *dev_get_by_index(struct net *, int)
// with return type: (struct net_device)*
struct net_device *dev_get_by_index(struct net *arg0, int arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct net_device));
}

// Function: dev_mc_flush
// with type: void dev_mc_flush(struct net_device *)
// with return type: void
void dev_mc_flush(struct net_device *arg0) {
  // Void type
  return;
}

// Function: dev_mc_sync_multiple
// with type: int dev_mc_sync_multiple(struct net_device *, struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_mc_sync_multiple(struct net_device *arg0, struct net_device *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_mc_unsync
// with type: void dev_mc_unsync(struct net_device *, struct net_device *)
// with return type: void
void dev_mc_unsync(struct net_device *arg0, struct net_device *arg1) {
  // Void type
  return;
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

// Function: dev_set_allmulti
// with type: int dev_set_allmulti(struct net_device *, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_set_allmulti(struct net_device *arg0, int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_set_mac_address
// with type: int dev_set_mac_address(struct net_device *, struct sockaddr *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_set_mac_address(struct net_device *arg0, struct sockaddr *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_set_mtu
// with type: int dev_set_mtu(struct net_device *, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_set_mtu(struct net_device *arg0, int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_set_promiscuity
// with type: int dev_set_promiscuity(struct net_device *, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_set_promiscuity(struct net_device *arg0, int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_uc_flush
// with type: void dev_uc_flush(struct net_device *)
// with return type: void
void dev_uc_flush(struct net_device *arg0) {
  // Void type
  return;
}

// Function: dev_uc_sync_multiple
// with type: int dev_uc_sync_multiple(struct net_device *, struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_uc_sync_multiple(struct net_device *arg0, struct net_device *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_uc_unsync
// with type: void dev_uc_unsync(struct net_device *, struct net_device *)
// with return type: void
void dev_uc_unsync(struct net_device *arg0, struct net_device *arg1) {
  // Void type
  return;
}

// Function: ether_setup
// with type: void ether_setup(struct net_device *)
// with return type: void
void ether_setup(struct net_device *arg0) {
  // Void type
  return;
}

// Function: ethtool_op_get_link
// with type: u32 ethtool_op_get_link(struct net_device *)
// with return type: u32 
unsigned int __VERIFIER_nondet_uint(void);
u32 ethtool_op_get_link(struct net_device *arg0) {
  // Typedef type
  // Real type: unsigned int
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: find_next_bit
// with type: unsigned long int find_next_bit(const unsigned long *, unsigned long, unsigned long)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int find_next_bit(const unsigned long *arg0, unsigned long arg1, unsigned long arg2) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: free_netdev
// with type: void free_netdev(struct net_device *)
// with return type: void
void free_netdev(struct net_device *arg0) {
  // Void type
  return;
}

// Function: free_percpu
// with type: void free_percpu(void *)
// with return type: void
void free_percpu(void *arg0) {
  // Void type
  return;
}

// Function: genl_unregister_family
// with type: int genl_unregister_family(struct genl_family *)
// with return type: int
int __VERIFIER_nondet_int(void);
int genl_unregister_family(struct genl_family *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: genlmsg_put
// with type: void *genlmsg_put(struct sk_buff *, u32 , u32 , struct genl_family *, int, u8 )
// with return type: (void)*
void *genlmsg_put(struct sk_buff *arg0, u32 arg1, u32 arg2, struct genl_family *arg3, int arg4, u8 arg5) {
  // Pointer type
  return ldv_malloc(0UL);
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

// Function: kfree_call_rcu
// with type: void kfree_call_rcu(struct callback_head *, void (*)(struct callback_head *))
// with return type: void
void kfree_call_rcu(struct callback_head *arg0, void (*arg1)(struct callback_head *)) {
  // Void type
  return;
}

// Function: kmemdup
// with type: void *kmemdup(const void *, size_t , gfp_t )
// with return type: (void)*
void *kmemdup(const void *arg0, size_t arg1, gfp_t arg2) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: ldv_init_2
// with type: int ldv_init_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_init_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_2
// with type: int ldv_release_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: list_del
// with type: void list_del(struct list_head *)
// with return type: void
void list_del(struct list_head *arg0) {
  // Void type
  return;
}

// Function: lock_acquire
// with type: void lock_acquire(struct lockdep_map *, unsigned int, int, int, int, struct lockdep_map *, unsigned long)
// with return type: void
void lock_acquire(struct lockdep_map *arg0, unsigned int arg1, int arg2, int arg3, int arg4, struct lockdep_map *arg5, unsigned long arg6) {
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

// Function: lockdep_rtnl_is_held
// with type: int lockdep_rtnl_is_held()
// with return type: int
int __VERIFIER_nondet_int(void);
int lockdep_rtnl_is_held() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: malloc

// Skip function: memcpy

// Skip function: memset

// Function: module_put
// with type: void module_put(struct module *)
// with return type: void
void module_put(struct module *arg0) {
  // Void type
  return;
}

// Function: msecs_to_jiffies
// with type: unsigned long int msecs_to_jiffies(const unsigned int)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int msecs_to_jiffies(const unsigned int arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
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

// Function: netdev_change_features
// with type: void netdev_change_features(struct net_device *)
// with return type: void
void netdev_change_features(struct net_device *arg0) {
  // Void type
  return;
}

// Function: netdev_err
// with type: int netdev_err(const struct net_device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int netdev_err(const struct net_device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: netdev_increment_features
// with type: netdev_features_t netdev_increment_features(netdev_features_t , netdev_features_t , netdev_features_t )
// with return type: netdev_features_t 
unsigned long __VERIFIER_nondet_ulong(void);
netdev_features_t netdev_increment_features(netdev_features_t arg0, netdev_features_t arg1, netdev_features_t arg2) {
  // Typedef type
  // Real type: u64 
  // Typedef type
  // Real type: unsigned long long
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: netdev_info
// with type: int netdev_info(const struct net_device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int netdev_info(const struct net_device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: netdev_master_upper_dev_link
// with type: int netdev_master_upper_dev_link(struct net_device *, struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int netdev_master_upper_dev_link(struct net_device *arg0, struct net_device *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: netdev_rx_handler_register
// with type: int netdev_rx_handler_register(struct net_device *, rx_handler_func_t *, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int netdev_rx_handler_register(struct net_device *arg0, rx_handler_func_t *arg1, void *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: netdev_rx_handler_unregister
// with type: void netdev_rx_handler_unregister(struct net_device *)
// with return type: void
void netdev_rx_handler_unregister(struct net_device *arg0) {
  // Void type
  return;
}

// Function: netdev_upper_dev_unlink
// with type: void netdev_upper_dev_unlink(struct net_device *, struct net_device *)
// with return type: void
void netdev_upper_dev_unlink(struct net_device *arg0, struct net_device *arg1) {
  // Void type
  return;
}

// Function: netdev_warn
// with type: int netdev_warn(const struct net_device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int netdev_warn(const struct net_device *arg0, const char *arg1, ...) {
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

// Function: netlink_broadcast
// with type: int netlink_broadcast(struct sock *, struct sk_buff *, __u32 , __u32 , gfp_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int netlink_broadcast(struct sock *arg0, struct sk_buff *arg1, __u32 arg2, __u32 arg3, gfp_t arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: netlink_unicast
// with type: int netlink_unicast(struct sock *, struct sk_buff *, __u32 , int)
// with return type: int
int __VERIFIER_nondet_int(void);
int netlink_unicast(struct sock *arg0, struct sk_buff *arg1, __u32 arg2, int arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: netpoll_send_skb_on_dev
// with type: void netpoll_send_skb_on_dev(struct netpoll *, struct sk_buff *, struct net_device *)
// with return type: void
void netpoll_send_skb_on_dev(struct netpoll *arg0, struct sk_buff *arg1, struct net_device *arg2) {
  // Void type
  return;
}

// Function: nla_parse
// with type: int nla_parse(struct nlattr **, int, const struct nlattr *, int, const struct nla_policy *)
// with return type: int
int __VERIFIER_nondet_int(void);
int nla_parse(struct nlattr **arg0, int arg1, const struct nlattr *arg2, int arg3, const struct nla_policy *arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: nla_put
// with type: int nla_put(struct sk_buff *, int, int, const void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int nla_put(struct sk_buff *arg0, int arg1, int arg2, const void *arg3) {
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

// Function: register_netdevice
// with type: int register_netdevice(struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int register_netdevice(struct net_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: register_netdevice_notifier
// with type: int register_netdevice_notifier(struct notifier_block *)
// with return type: int
int __VERIFIER_nondet_int(void);
int register_netdevice_notifier(struct notifier_block *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: rtnl_link_register
// with type: int rtnl_link_register(struct rtnl_link_ops *)
// with return type: int
int __VERIFIER_nondet_int(void);
int rtnl_link_register(struct rtnl_link_ops *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: rtnl_link_unregister
// with type: void rtnl_link_unregister(struct rtnl_link_ops *)
// with return type: void
void rtnl_link_unregister(struct rtnl_link_ops *arg0) {
  // Void type
  return;
}

// Function: rtnl_trylock
// with type: int rtnl_trylock()
// with return type: int
int __VERIFIER_nondet_int(void);
int rtnl_trylock() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: rtnl_unlock
// with type: void rtnl_unlock()
// with return type: void
void rtnl_unlock() {
  // Void type
  return;
}

// Function: skb_clone
// with type: struct sk_buff *skb_clone(struct sk_buff *, gfp_t )
// with return type: (struct sk_buff)*
struct sk_buff *skb_clone(struct sk_buff *arg0, gfp_t arg1) {
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

// Skip function: strcmp

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

// Function: synchronize_rcu_bh
// with type: void synchronize_rcu_bh()
// with return type: void
void synchronize_rcu_bh() {
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

// Function: unregister_netdevice_notifier
// with type: int unregister_netdevice_notifier(struct notifier_block *)
// with return type: int
int __VERIFIER_nondet_int(void);
int unregister_netdevice_notifier(struct notifier_block *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: vlan_uses_dev
// with type: bool vlan_uses_dev(const struct net_device *)
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool vlan_uses_dev(const struct net_device *arg0) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: vlan_vid_add
// with type: int vlan_vid_add(struct net_device *, __be16 , u16 )
// with return type: int
int __VERIFIER_nondet_int(void);
int vlan_vid_add(struct net_device *arg0, __be16 arg1, u16 arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: vlan_vid_del
// with type: void vlan_vid_del(struct net_device *, __be16 , u16 )
// with return type: void
void vlan_vid_del(struct net_device *arg0, __be16 arg1, u16 arg2) {
  // Void type
  return;
}

// Function: vlan_vids_add_by_dev
// with type: int vlan_vids_add_by_dev(struct net_device *, const struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int vlan_vids_add_by_dev(struct net_device *arg0, const struct net_device *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: vlan_vids_del_by_dev
// with type: void vlan_vids_del_by_dev(struct net_device *, const struct net_device *)
// with return type: void
void vlan_vids_del_by_dev(struct net_device *arg0, const struct net_device *arg1) {
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

