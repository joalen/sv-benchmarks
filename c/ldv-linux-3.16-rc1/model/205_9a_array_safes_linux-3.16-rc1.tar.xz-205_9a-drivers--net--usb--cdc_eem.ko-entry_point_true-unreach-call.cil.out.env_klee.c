#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Skip function: __VERIFIER_nondet_ulong

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

// Skip function: calloc

// Function: crc32_le
// with type: u32 crc32_le(u32 , const unsigned char *, size_t )
// with return type: u32 
unsigned int __VERIFIER_nondet_uint(void);
u32 crc32_le(u32 arg0, const unsigned char *arg1, size_t arg2) {
  // Typedef type
  // Real type: unsigned int
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: ldv_release_2
// with type: int ldv_release_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_reset_resume_1
// with type: int ldv_reset_resume_1()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_reset_resume_1() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: malloc

// Skip function: memmove

// Skip function: memset

// Function: netdev_warn
// with type: int netdev_warn(const struct net_device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int netdev_warn(const struct net_device *arg0, const char *arg1, ...) {
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

// Function: skb_copy_expand
// with type: struct sk_buff *skb_copy_expand(const struct sk_buff *, int, int, gfp_t )
// with return type: (struct sk_buff)*
struct sk_buff *skb_copy_expand(const struct sk_buff *arg0, int arg1, int arg2, gfp_t arg3) {
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

// Function: skb_trim
// with type: void skb_trim(struct sk_buff *, unsigned int)
// with return type: void
void skb_trim(struct sk_buff *arg0, unsigned int arg1) {
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

// Function: usb_deregister
// with type: void usb_deregister(struct usb_driver *)
// with return type: void
void usb_deregister(struct usb_driver *arg0) {
  // Void type
  return;
}

// Function: usb_driver_release_interface
// with type: void usb_driver_release_interface(struct usb_driver *, struct usb_interface *)
// with return type: void
void usb_driver_release_interface(struct usb_driver *arg0, struct usb_interface *arg1) {
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

// Function: usb_register_driver
// with type: int usb_register_driver(struct usb_driver *, struct module *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_register_driver(struct usb_driver *arg0, struct module *arg1, const char *arg2) {
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

// Function: usbnet_device_suggests_idle
// with type: void usbnet_device_suggests_idle(struct usbnet *)
// with return type: void
void usbnet_device_suggests_idle(struct usbnet *arg0) {
  // Void type
  return;
}

// Function: usbnet_disconnect
// with type: void usbnet_disconnect(struct usb_interface *)
// with return type: void
void usbnet_disconnect(struct usb_interface *arg0) {
  // Void type
  return;
}

// Function: usbnet_get_endpoints
// with type: int usbnet_get_endpoints(struct usbnet *, struct usb_interface *)
// with return type: int
int __VERIFIER_nondet_int(void);
int usbnet_get_endpoints(struct usbnet *arg0, struct usb_interface *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usbnet_probe
// with type: int usbnet_probe(struct usb_interface *, const struct usb_device_id *)
// with return type: int
int __VERIFIER_nondet_int(void);
int usbnet_probe(struct usb_interface *arg0, const struct usb_device_id *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usbnet_resume
// with type: int usbnet_resume(struct usb_interface *)
// with return type: int
int __VERIFIER_nondet_int(void);
int usbnet_resume(struct usb_interface *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usbnet_skb_return
// with type: void usbnet_skb_return(struct usbnet *, struct sk_buff *)
// with return type: void
void usbnet_skb_return(struct usbnet *arg0, struct sk_buff *arg1) {
  // Void type
  return;
}

// Function: usbnet_suspend
// with type: int usbnet_suspend(struct usb_interface *, pm_message_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int usbnet_suspend(struct usb_interface *arg0, pm_message_t arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

