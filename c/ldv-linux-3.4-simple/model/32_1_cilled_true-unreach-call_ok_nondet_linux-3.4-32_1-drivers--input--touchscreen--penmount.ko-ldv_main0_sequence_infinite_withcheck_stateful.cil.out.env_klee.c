#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __serio_register_driver
// with type: int __serio_register_driver(struct serio_driver *drv, struct module *owner, const char *mod_name)
// with return type: int
int __VERIFIER_nondet_int(void);
int __serio_register_driver(struct serio_driver *arg0, struct module *arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_get_drvdata
// with type: void *dev_get_drvdata(const struct device *dev)
// with return type: (void)*
void *dev_get_drvdata(const struct device *arg0) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: dev_set_drvdata
// with type: int dev_set_drvdata(struct device *dev, void *data)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_set_drvdata(struct device *arg0, void *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: input_event
// with type: void input_event(struct input_dev *dev, unsigned int type, unsigned int code, int value)
// with return type: void
void input_event(struct input_dev *arg0, unsigned int arg1, unsigned int arg2, int arg3) {
  // Void type
  return;
}

// Function: input_free_device
// with type: void input_free_device(struct input_dev *dev)
// with return type: void
void input_free_device(struct input_dev *arg0) {
  // Void type
  return;
}

// Function: input_mt_init_slots
// with type: int input_mt_init_slots(struct input_dev *dev, unsigned int num_slots)
// with return type: int
int __VERIFIER_nondet_int(void);
int input_mt_init_slots(struct input_dev *arg0, unsigned int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: input_mt_report_pointer_emulation
// with type: void input_mt_report_pointer_emulation(struct input_dev *dev, bool use_count)
// with return type: void
void input_mt_report_pointer_emulation(struct input_dev *arg0, bool arg1) {
  // Void type
  return;
}

// Function: input_mt_report_slot_state
// with type: void input_mt_report_slot_state(struct input_dev *dev, unsigned int tool_type, bool active)
// with return type: void
void input_mt_report_slot_state(struct input_dev *arg0, unsigned int arg1, bool arg2) {
  // Void type
  return;
}

// Function: input_register_device
// with type: int input_register_device(struct input_dev *)
// with return type: int
int __VERIFIER_nondet_int(void);
int input_register_device(struct input_dev *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: input_set_abs_params
// with type: void input_set_abs_params(struct input_dev *dev, unsigned int axis, int min, int max, int fuzz, int flat)
// with return type: void
void input_set_abs_params(struct input_dev *arg0, unsigned int arg1, int arg2, int arg3, int arg4, int arg5) {
  // Void type
  return;
}

// Function: input_unregister_device
// with type: void input_unregister_device(struct input_dev *)
// with return type: void
void input_unregister_device(struct input_dev *arg0) {
  // Void type
  return;
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

// Function: serio_close
// with type: void serio_close(struct serio *serio)
// with return type: void
void serio_close(struct serio *arg0) {
  // Void type
  return;
}

// Function: serio_open
// with type: int serio_open(struct serio *serio, struct serio_driver *drv)
// with return type: int
int __VERIFIER_nondet_int(void);
int serio_open(struct serio *arg0, struct serio_driver *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: serio_unregister_driver
// with type: void serio_unregister_driver(struct serio_driver *drv)
// with return type: void
void serio_unregister_driver(struct serio_driver *arg0) {
  // Void type
  return;
}

// Skip function: snprintf

