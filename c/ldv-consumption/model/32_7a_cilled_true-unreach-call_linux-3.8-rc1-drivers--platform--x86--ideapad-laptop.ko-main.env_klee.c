#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: acpi_bus_register_driver
// with type: int acpi_bus_register_driver(struct acpi_driver *)
// with return type: int
int __VERIFIER_nondet_int(void);
int acpi_bus_register_driver(struct acpi_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: acpi_bus_unregister_driver
// with type: void acpi_bus_unregister_driver(struct acpi_driver *)
// with return type: void
void acpi_bus_unregister_driver(struct acpi_driver *arg0) {
  // Void type
  return;
}

// Function: acpi_evaluate_integer
// with type: acpi_status acpi_evaluate_integer(acpi_handle , acpi_string , struct acpi_object_list *, unsigned long long *)
// with return type: acpi_status 
unsigned int __VERIFIER_nondet_uint(void);
acpi_status acpi_evaluate_integer(acpi_handle arg0, acpi_string arg1, struct acpi_object_list *arg2, unsigned long long *arg3) {
  // Typedef type
  // Real type: u32 
  // Typedef type
  // Real type: unsigned int
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: acpi_evaluate_object
// with type: acpi_status acpi_evaluate_object(acpi_handle , acpi_string , struct acpi_object_list *, struct acpi_buffer *)
// with return type: acpi_status 
unsigned int __VERIFIER_nondet_uint(void);
acpi_status acpi_evaluate_object(acpi_handle arg0, acpi_string arg1, struct acpi_object_list *arg2, struct acpi_buffer *arg3) {
  // Typedef type
  // Real type: u32 
  // Typedef type
  // Real type: unsigned int
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: acpi_video_backlight_support
// with type: int acpi_video_backlight_support()
// with return type: int
int __VERIFIER_nondet_int(void);
int acpi_video_backlight_support() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: backlight_device_register
// with type: struct backlight_device *backlight_device_register(const char *, struct device *, void *, const struct backlight_ops *, const struct backlight_properties *)
// with return type: (struct backlight_device)*
struct backlight_device *backlight_device_register(const char *arg0, struct device *arg1, void *arg2, const struct backlight_ops *arg3, const struct backlight_properties *arg4) {
  // Pointer type
  return ldv_malloc(sizeof(struct backlight_device));
}

// Function: backlight_device_unregister
// with type: void backlight_device_unregister(struct backlight_device *)
// with return type: void
void backlight_device_unregister(struct backlight_device *arg0) {
  // Void type
  return;
}

// Function: backlight_force_update
// with type: void backlight_force_update(struct backlight_device *, enum backlight_update_reason )
// with return type: void
void backlight_force_update(struct backlight_device *arg0, enum backlight_update_reason arg1) {
  // Void type
  return;
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

// Function: debugfs_remove_recursive
// with type: void debugfs_remove_recursive(struct dentry *)
// with return type: void
void debugfs_remove_recursive(struct dentry *arg0) {
  // Void type
  return;
}

// Function: dev_get_drvdata
// with type: void *dev_get_drvdata(const struct device *)
// with return type: (void)*
void *dev_get_drvdata(const struct device *arg0) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: dev_set_drvdata
// with type: int dev_set_drvdata(struct device *, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_set_drvdata(struct device *arg0, void *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: i8042_command
// with type: int i8042_command(unsigned char *, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int i8042_command(unsigned char *arg0, int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: input_free_device
// with type: void input_free_device(struct input_dev *)
// with return type: void
void input_free_device(struct input_dev *arg0) {
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

// Function: input_unregister_device
// with type: void input_unregister_device(struct input_dev *)
// with return type: void
void input_unregister_device(struct input_dev *arg0) {
  // Void type
  return;
}

// Skip function: kfree

// Function: ldv_ideapad_pm_complete_2
// with type: int ldv_ideapad_pm_complete_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_complete_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_freeze_2
// with type: int ldv_ideapad_pm_freeze_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_freeze_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_freeze_late_2
// with type: int ldv_ideapad_pm_freeze_late_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_freeze_late_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_freeze_noirq_2
// with type: int ldv_ideapad_pm_freeze_noirq_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_freeze_noirq_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_poweroff_2
// with type: int ldv_ideapad_pm_poweroff_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_poweroff_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_poweroff_late_2
// with type: int ldv_ideapad_pm_poweroff_late_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_poweroff_late_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_poweroff_noirq_2
// with type: int ldv_ideapad_pm_poweroff_noirq_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_poweroff_noirq_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_prepare_2
// with type: int ldv_ideapad_pm_prepare_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_prepare_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_restore_early_2
// with type: int ldv_ideapad_pm_restore_early_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_restore_early_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_restore_noirq_2
// with type: int ldv_ideapad_pm_restore_noirq_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_restore_noirq_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_resume_early_2
// with type: int ldv_ideapad_pm_resume_early_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_resume_early_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_resume_noirq_2
// with type: int ldv_ideapad_pm_resume_noirq_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_resume_noirq_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_suspend_2
// with type: int ldv_ideapad_pm_suspend_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_suspend_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_suspend_late_2
// with type: int ldv_ideapad_pm_suspend_late_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_suspend_late_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_suspend_noirq_2
// with type: int ldv_ideapad_pm_suspend_noirq_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_suspend_noirq_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_thaw_early_2
// with type: int ldv_ideapad_pm_thaw_early_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_thaw_early_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_ideapad_pm_thaw_noirq_2
// with type: int ldv_ideapad_pm_thaw_noirq_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_ideapad_pm_thaw_noirq_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: malloc

// Skip function: memset

// Function: mutex_lock
// with type: void mutex_lock(struct mutex *)
// with return type: void
void mutex_lock(struct mutex *arg0) {
  // Void type
  return;
}

// Function: mutex_trylock
// with type: int mutex_trylock(struct mutex *)
// with return type: int
int __VERIFIER_nondet_int(void);
int mutex_trylock(struct mutex *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: mutex_unlock
// with type: void mutex_unlock(struct mutex *)
// with return type: void
void mutex_unlock(struct mutex *arg0) {
  // Void type
  return;
}

// Function: platform_device_add
// with type: int platform_device_add(struct platform_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int platform_device_add(struct platform_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: platform_device_alloc
// with type: struct platform_device *platform_device_alloc(const char *, int)
// with return type: (struct platform_device)*
struct platform_device *platform_device_alloc(const char *arg0, int arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct platform_device));
}

// Function: platform_device_del
// with type: void platform_device_del(struct platform_device *)
// with return type: void
void platform_device_del(struct platform_device *arg0) {
  // Void type
  return;
}

// Function: platform_device_put
// with type: void platform_device_put(struct platform_device *)
// with return type: void
void platform_device_put(struct platform_device *arg0) {
  // Void type
  return;
}

// Function: platform_device_unregister
// with type: void platform_device_unregister(struct platform_device *)
// with return type: void
void platform_device_unregister(struct platform_device *arg0) {
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

// Function: rfkill_init_sw_state
// with type: void rfkill_init_sw_state(struct rfkill *, bool )
// with return type: void
void rfkill_init_sw_state(struct rfkill *arg0, bool arg1) {
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

// Function: rfkill_set_hw_state
// with type: bool rfkill_set_hw_state(struct rfkill *, bool )
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool rfkill_set_hw_state(struct rfkill *arg0, bool arg1) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
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

// Function: sparse_keymap_free
// with type: void sparse_keymap_free(struct input_dev *)
// with return type: void
void sparse_keymap_free(struct input_dev *arg0) {
  // Void type
  return;
}

// Function: sparse_keymap_report_event
// with type: bool sparse_keymap_report_event(struct input_dev *, unsigned int, unsigned int, bool )
// with return type: bool 
bool __VERIFIER_nondet_bool(void);
bool sparse_keymap_report_event(struct input_dev *arg0, unsigned int arg1, unsigned int arg2, bool arg3) {
  // Typedef type
  // Real type: _Bool
  // Simple type
  return __VERIFIER_nondet_bool();
}

// Function: sparse_keymap_setup
// with type: int sparse_keymap_setup(struct input_dev *, const struct key_entry *, int (*)(struct input_dev *, struct key_entry *))
// with return type: int
int __VERIFIER_nondet_int(void);
int sparse_keymap_setup(struct input_dev *arg0, const struct key_entry *arg1, int (*arg2)(struct input_dev *, struct key_entry *)) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: sprintf

// Skip function: sscanf

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

