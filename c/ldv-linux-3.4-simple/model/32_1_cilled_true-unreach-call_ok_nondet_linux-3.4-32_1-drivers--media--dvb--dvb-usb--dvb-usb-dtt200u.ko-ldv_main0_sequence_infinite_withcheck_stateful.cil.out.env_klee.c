#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: dvb_usb_device_init
// with type: int dvb_usb_device_init(struct usb_interface *, struct dvb_usb_device_properties *, struct module *, struct dvb_usb_device **, short *adapter_nums)
// with return type: int
int __VERIFIER_nondet_int(void);
int dvb_usb_device_init(struct usb_interface *arg0, struct dvb_usb_device_properties *arg1, struct module *arg2, struct dvb_usb_device **arg3, short *arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dvb_usb_generic_rw
// with type: int dvb_usb_generic_rw(struct dvb_usb_device *, u8 *, u16 , u8 *, u16 , int)
// with return type: int
int __VERIFIER_nondet_int(void);
int dvb_usb_generic_rw(struct dvb_usb_device *arg0, u8 *arg1, u16 arg2, u8 *arg3, u16 arg4, int arg5) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dvb_usb_generic_write
// with type: int dvb_usb_generic_write(struct dvb_usb_device *, u8 *, u16 )
// with return type: int
int __VERIFIER_nondet_int(void);
int dvb_usb_generic_write(struct dvb_usb_device *arg0, u8 *arg1, u16 arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dvb_usb_nec_rc_key_to_event
// with type: int dvb_usb_nec_rc_key_to_event(struct dvb_usb_device *, u8 *, u32 *, int *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dvb_usb_nec_rc_key_to_event(struct dvb_usb_device *arg0, u8 *arg1, u32 *arg2, int *arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Skip function: memcpy

// Function: msleep
// with type: void msleep(unsigned int msecs)
// with return type: void
void msleep(unsigned int arg0) {
  // Void type
  return;
}

// Function: printk
// with type: int printk(const char *fmt, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int printk(const char *arg0, ...) {
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

// Function: usb_register_driver
// with type: int usb_register_driver(struct usb_driver *, struct module *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_register_driver(struct usb_driver *arg0, struct module *arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

