#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Skip function: __VERIFIER_nondet_uint

// Skip function: __VERIFIER_nondet_ulong

// Function: __dynamic_dev_dbg
// with type: int __dynamic_dev_dbg(struct _ddebug *, const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int __dynamic_dev_dbg(struct _ddebug *arg0, const struct device *arg1, const char *arg2, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: __mutex_init
// with type: void __mutex_init(struct mutex *, const char *, struct lock_class_key *)
// with return type: void
void __mutex_init(struct mutex *arg0, const char *arg1, struct lock_class_key *arg2) {
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

// Function: __netif_schedule
// with type: void __netif_schedule(struct Qdisc *)
// with return type: void
void __netif_schedule(struct Qdisc *arg0) {
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

// Function: __tasklet_hi_schedule
// with type: void __tasklet_hi_schedule(struct tasklet_struct *)
// with return type: void
void __tasklet_hi_schedule(struct tasklet_struct *arg0) {
  // Void type
  return;
}

// Function: __tty_alloc_driver
// with type: struct tty_driver *__tty_alloc_driver(unsigned int, struct module *, unsigned long)
// with return type: (struct tty_driver)*
struct tty_driver *__tty_alloc_driver(unsigned int arg0, struct module *arg1, unsigned long arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct tty_driver));
}

// Function: __wake_up
// with type: void __wake_up(wait_queue_head_t *, unsigned int, int, void *)
// with return type: void
void __wake_up(wait_queue_head_t *arg0, unsigned int arg1, int arg2, void *arg3) {
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

// Function: _raw_spin_lock_irq
// with type: void _raw_spin_lock_irq(raw_spinlock_t *)
// with return type: void
void _raw_spin_lock_irq(raw_spinlock_t *arg0) {
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

// Function: add_wait_queue
// with type: void add_wait_queue(wait_queue_head_t *, wait_queue_t *)
// with return type: void
void add_wait_queue(wait_queue_head_t *arg0, wait_queue_t *arg1) {
  // Void type
  return;
}

// Function: alloc_netdev_mqs
// with type: struct net_device *alloc_netdev_mqs(int, const char *, void (*)(struct net_device *), unsigned int, unsigned int)
// with return type: (struct net_device)*
struct net_device *alloc_netdev_mqs(int arg0, const char *arg1, void (*arg2)(struct net_device *), unsigned int arg3, unsigned int arg4) {
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

// Function: consume_skb
// with type: void consume_skb(struct sk_buff *)
// with return type: void
void consume_skb(struct sk_buff *arg0) {
  // Void type
  return;
}

// Function: dev_err
// with type: int dev_err(const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_err(const struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_warn
// with type: int dev_warn(const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_warn(const struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: device_create_file
// with type: int device_create_file(struct device *, const struct device_attribute *)
// with return type: int
int __VERIFIER_nondet_int(void);
int device_create_file(struct device *arg0, const struct device_attribute *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: device_remove_file
// with type: void device_remove_file(struct device *, const struct device_attribute *)
// with return type: void
void device_remove_file(struct device *arg0, const struct device_attribute *arg1) {
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

// Function: free_netdev
// with type: void free_netdev(struct net_device *)
// with return type: void
void free_netdev(struct net_device *arg0) {
  // Void type
  return;
}

// Skip function: kfree

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
// with type: struct page___0 *ldv_some_page()
// with return type: (struct page___0)*
struct page___0 *ldv_some_page() {
  // Pointer type
  return ldv_malloc(sizeof(struct page___0));
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

// Function: pskb_expand_head
// with type: int pskb_expand_head(struct sk_buff *, int, int, gfp_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int pskb_expand_head(struct sk_buff *arg0, int arg1, int arg2, gfp_t arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: put_tty_driver
// with type: void put_tty_driver(struct tty_driver *)
// with return type: void
void put_tty_driver(struct tty_driver *arg0) {
  // Void type
  return;
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

// Function: register_netdev
// with type: int register_netdev(struct net_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int register_netdev(struct net_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: remove_wait_queue
// with type: void remove_wait_queue(wait_queue_head_t *, wait_queue_t *)
// with return type: void
void remove_wait_queue(wait_queue_head_t *arg0, wait_queue_t *arg1) {
  // Void type
  return;
}

// Function: rfkill_alloc
// with type: struct rfkill *rfkill_alloc(const char *, struct device *, const enum rfkill_type , const struct rfkill_ops *, void *)
// with return type: (struct rfkill)*
struct rfkill *rfkill_alloc(const char *arg0, struct device *arg1, const enum rfkill_type arg2, const struct rfkill_ops *arg3, void *arg4) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: rfkill_destroy
// with type: void rfkill_destroy(struct rfkill *)
// with return type: void
void rfkill_destroy(struct rfkill *arg0) {
  // Void type
  return;
}

// Function: rfkill_register
// with type: int rfkill_register(struct rfkill *)
// with return type: int
int __VERIFIER_nondet_int(void);
int rfkill_register(struct rfkill *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: rfkill_unregister
// with type: void rfkill_unregister(struct rfkill *)
// with return type: void
void rfkill_unregister(struct rfkill *arg0) {
  // Void type
  return;
}

// Function: schedule
// with type: void schedule()
// with return type: void
void schedule() {
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

// Function: skb_copy
// with type: struct sk_buff *skb_copy(const struct sk_buff *, gfp_t )
// with return type: (struct sk_buff)*
struct sk_buff *skb_copy(const struct sk_buff *arg0, gfp_t arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct sk_buff));
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

// Skip function: sprintf

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

// Function: tty_encode_baud_rate
// with type: void tty_encode_baud_rate(struct tty_struct *, speed_t , speed_t )
// with return type: void
void tty_encode_baud_rate(struct tty_struct *arg0, speed_t arg1, speed_t arg2) {
  // Void type
  return;
}

// Function: tty_flip_buffer_push
// with type: void tty_flip_buffer_push(struct tty_port *)
// with return type: void
void tty_flip_buffer_push(struct tty_port *arg0) {
  // Void type
  return;
}

// Function: tty_insert_flip_string_fixed_flag
// with type: int tty_insert_flip_string_fixed_flag(struct tty_port *, const unsigned char *, char, size_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int tty_insert_flip_string_fixed_flag(struct tty_port *arg0, const unsigned char *arg1, char arg2, size_t arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: tty_kref_put
// with type: void tty_kref_put(struct tty_struct *)
// with return type: void
void tty_kref_put(struct tty_struct *arg0) {
  // Void type
  return;
}

// Function: tty_port_destroy
// with type: void tty_port_destroy(struct tty_port *)
// with return type: void
void tty_port_destroy(struct tty_port *arg0) {
  // Void type
  return;
}

// Function: tty_port_init
// with type: void tty_port_init(struct tty_port *)
// with return type: void
void tty_port_init(struct tty_port *arg0) {
  // Void type
  return;
}

// Function: tty_port_register_device
// with type: struct device *tty_port_register_device(struct tty_port *, struct tty_driver *, unsigned int, struct device *)
// with return type: (struct device)*
struct device *tty_port_register_device(struct tty_port *arg0, struct tty_driver *arg1, unsigned int arg2, struct device *arg3) {
  // Pointer type
  return ldv_malloc(sizeof(struct device));
}

// Function: tty_port_tty_get
// with type: struct tty_struct *tty_port_tty_get(struct tty_port *)
// with return type: (struct tty_struct)*
struct tty_struct *tty_port_tty_get(struct tty_port *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct tty_struct));
}

// Function: tty_port_tty_hangup
// with type: void tty_port_tty_hangup(struct tty_port *, bool )
// with return type: void
void tty_port_tty_hangup(struct tty_port *arg0, bool arg1) {
  // Void type
  return;
}

// Function: tty_port_tty_set
// with type: void tty_port_tty_set(struct tty_port *, struct tty_struct *)
// with return type: void
void tty_port_tty_set(struct tty_port *arg0, struct tty_struct *arg1) {
  // Void type
  return;
}

// Function: tty_port_tty_wakeup
// with type: void tty_port_tty_wakeup(struct tty_port *)
// with return type: void
void tty_port_tty_wakeup(struct tty_port *arg0) {
  // Void type
  return;
}

// Function: tty_register_driver
// with type: int tty_register_driver(struct tty_driver *)
// with return type: int
int __VERIFIER_nondet_int(void);
int tty_register_driver(struct tty_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: tty_set_operations
// with type: void tty_set_operations(struct tty_driver *, const struct tty_operations *)
// with return type: void
void tty_set_operations(struct tty_driver *arg0, const struct tty_operations *arg1) {
  // Void type
  return;
}

// Function: tty_termios_encode_baud_rate
// with type: void tty_termios_encode_baud_rate(struct ktermios *, speed_t , speed_t )
// with return type: void
void tty_termios_encode_baud_rate(struct ktermios *arg0, speed_t arg1, speed_t arg2) {
  // Void type
  return;
}

// Function: tty_unregister_device
// with type: void tty_unregister_device(struct tty_driver *, unsigned int)
// with return type: void
void tty_unregister_device(struct tty_driver *arg0, unsigned int arg1) {
  // Void type
  return;
}

// Function: tty_unregister_driver
// with type: int tty_unregister_driver(struct tty_driver *)
// with return type: int
int __VERIFIER_nondet_int(void);
int tty_unregister_driver(struct tty_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: unregister_netdev
// with type: void unregister_netdev(struct net_device *)
// with return type: void
void unregister_netdev(struct net_device *arg0) {
  // Void type
  return;
}

// Function: usb_alloc_urb
// with type: struct urb *usb_alloc_urb(int, gfp_t )
// with return type: (struct urb)*
struct urb *usb_alloc_urb(int arg0, gfp_t arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct urb));
}

// Function: usb_autopm_get_interface
// with type: int usb_autopm_get_interface(struct usb_interface *)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_autopm_get_interface(struct usb_interface *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usb_autopm_put_interface
// with type: void usb_autopm_put_interface(struct usb_interface *)
// with return type: void
void usb_autopm_put_interface(struct usb_interface *arg0) {
  // Void type
  return;
}

// Function: usb_control_msg
// with type: int usb_control_msg(struct usb_device *, unsigned int, __u8 , __u8 , __u16 , __u16 , void *, __u16 , int)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_control_msg(struct usb_device *arg0, unsigned int arg1, __u8 arg2, __u8 arg3, __u16 arg4, __u16 arg5, void *arg6, __u16 arg7, int arg8) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usb_deregister
// with type: void usb_deregister(struct usb_driver *)
// with return type: void
void usb_deregister(struct usb_driver *arg0) {
  // Void type
  return;
}

// Function: usb_free_urb
// with type: void usb_free_urb(struct urb *)
// with return type: void
void usb_free_urb(struct urb *arg0) {
  // Void type
  return;
}

// Function: usb_kill_urb
// with type: void usb_kill_urb(struct urb *)
// with return type: void
void usb_kill_urb(struct urb *arg0) {
  // Void type
  return;
}

// Function: usb_lock_device_for_reset
// with type: int usb_lock_device_for_reset(struct usb_device *, const struct usb_interface *)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_lock_device_for_reset(struct usb_device *arg0, const struct usb_interface *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usb_register_driver
// with type: int usb_register_driver(struct usb_driver *, struct module *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_register_driver(struct usb_driver *arg0, struct module *arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usb_reset_device
// with type: int usb_reset_device(struct usb_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_reset_device(struct usb_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usb_set_interface
// with type: int usb_set_interface(struct usb_device *, int, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_set_interface(struct usb_device *arg0, int arg1, int arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usb_submit_urb
// with type: int usb_submit_urb(struct urb *, gfp_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_submit_urb(struct urb *arg0, gfp_t arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usb_unlink_urb
// with type: int usb_unlink_urb(struct urb *)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_unlink_urb(struct urb *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: warn_slowpath_null
// with type: void warn_slowpath_null(const char *, const int)
// with return type: void
void warn_slowpath_null(const char *arg0, const int arg1) {
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

