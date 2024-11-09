#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: irda_qos_bits_to_value
// with type: void irda_qos_bits_to_value(struct qos_info *qos)
// with return type: void
void irda_qos_bits_to_value(struct qos_info *arg0) {
  // Void type
  return;
}

// Function: irda_register_dongle
// with type: int irda_register_dongle(struct dongle_driver *new)
// with return type: int
int __VERIFIER_nondet_int(void);
int irda_register_dongle(struct dongle_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: irda_unregister_dongle
// with type: int irda_unregister_dongle(struct dongle_driver *drv)
// with return type: int
int __VERIFIER_nondet_int(void);
int irda_unregister_dongle(struct dongle_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

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

// Function: sirdev_set_dtr_rts
// with type: int sirdev_set_dtr_rts(struct sir_dev *dev, int dtr, int rts)
// with return type: int
int __VERIFIER_nondet_int(void);
int sirdev_set_dtr_rts(struct sir_dev *arg0, int arg1, int arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

