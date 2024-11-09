#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Skip function: __VERIFIER_nondet_ulong

// Function: ___ratelimit
// with type: int ___ratelimit(struct ratelimit_state *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int ___ratelimit(struct ratelimit_state *arg0, const char *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __alloc_workqueue_key
// with type: struct workqueue_struct *__alloc_workqueue_key(const char *, unsigned int, int, struct lock_class_key *, const char *, ...)
// with return type: (struct workqueue_struct)*
struct workqueue_struct *__alloc_workqueue_key(const char *arg0, unsigned int arg1, int arg2, struct lock_class_key *arg3, const char *arg4, ...) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: __dynamic_dev_dbg
// with type: void __dynamic_dev_dbg(struct _ddebug *, const struct device *, const char *, ...)
// with return type: void
void __dynamic_dev_dbg(struct _ddebug *arg0, const struct device *arg1, const char *arg2, ...) {
  // Void type
  return;
}

// Function: __dynamic_pr_debug
// with type: void __dynamic_pr_debug(struct _ddebug *, const char *, ...)
// with return type: void
void __dynamic_pr_debug(struct _ddebug *arg0, const char *arg1, ...) {
  // Void type
  return;
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

// Function: __list_add
// with type: void __list_add(struct list_head *, struct list_head *, struct list_head *)
// with return type: void
void __list_add(struct list_head *arg0, struct list_head *arg1, struct list_head *arg2) {
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

// Function: __pci_register_driver
// with type: int __pci_register_driver(struct pci_driver *, struct module *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int __pci_register_driver(struct pci_driver *arg0, struct module *arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __pci_reset_function_locked
// with type: int __pci_reset_function_locked(struct pci_dev *)
// with return type: int
int __VERIFIER_nondet_int(void);
int __pci_reset_function_locked(struct pci_dev *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __raw_spin_lock_init
// with type: void __raw_spin_lock_init(raw_spinlock_t *, const char *, struct lock_class_key *)
// with return type: void
void __raw_spin_lock_init(raw_spinlock_t *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

// Function: __wake_up
// with type: void __wake_up(wait_queue_head_t *, unsigned int, int, void *)
// with return type: void
void __wake_up(wait_queue_head_t *arg0, unsigned int arg1, int arg2, void *arg3) {
  // Void type
  return;
}

// Function: __xenbus_register_backend
// with type: int __xenbus_register_backend(struct xenbus_driver *, struct module *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int __xenbus_register_backend(struct xenbus_driver *arg0, struct module *arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: _dev_info
// with type: void _dev_info(const struct device *, const char *, ...)
// with return type: void
void _dev_info(const struct device *arg0, const char *arg1, ...) {
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

// Function: bind_interdomain_evtchn_to_irqhandler
// with type: int bind_interdomain_evtchn_to_irqhandler(unsigned int, unsigned int, irqreturn_t (*)(int, void *), unsigned long, const char *, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int bind_interdomain_evtchn_to_irqhandler(unsigned int arg0, unsigned int arg1, irqreturn_t (*arg2)(int, void *), unsigned long arg3, const char *arg4, void *arg5) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: bus_register_notifier
// with type: int bus_register_notifier(struct bus_type *, struct notifier_block *)
// with return type: int
int __VERIFIER_nondet_int(void);
int bus_register_notifier(struct bus_type *arg0, struct notifier_block *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: bus_unregister_notifier
// with type: int bus_unregister_notifier(struct bus_type *, struct notifier_block *)
// with return type: int
int __VERIFIER_nondet_int(void);
int bus_unregister_notifier(struct bus_type *arg0, struct notifier_block *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: calloc

// Function: destroy_workqueue
// with type: void destroy_workqueue(struct workqueue_struct *)
// with return type: void
void destroy_workqueue(struct workqueue_struct *arg0) {
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

// Function: dev_warn
// with type: void dev_warn(const struct device *, const char *, ...)
// with return type: void
void dev_warn(const struct device *arg0, const char *arg1, ...) {
  // Void type
  return;
}

// Function: device_release_driver
// with type: void device_release_driver(struct device *)
// with return type: void
void device_release_driver(struct device *arg0) {
  // Void type
  return;
}

// Function: device_unregister
// with type: void device_unregister(struct device *)
// with return type: void
void device_unregister(struct device *arg0) {
  // Void type
  return;
}

// Function: down_write
// with type: void down_write(struct rw_semaphore *)
// with return type: void
void down_write(struct rw_semaphore *arg0) {
  // Void type
  return;
}

// Function: driver_create_file
// with type: int driver_create_file(struct device_driver *, const struct driver_attribute *)
// with return type: int
int __VERIFIER_nondet_int(void);
int driver_create_file(struct device_driver *arg0, const struct driver_attribute *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: driver_remove_file
// with type: void driver_remove_file(struct device_driver *, const struct driver_attribute *)
// with return type: void
void driver_remove_file(struct device_driver *arg0, const struct driver_attribute *arg1) {
  // Void type
  return;
}

// Function: finish_wait
// with type: void finish_wait(wait_queue_head_t *, wait_queue_t *)
// with return type: void
void finish_wait(wait_queue_head_t *arg0, wait_queue_t *arg1) {
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

// Function: ldv_probe_15
// with type: int ldv_probe_15()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_probe_15() {
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

// Function: ldv_shutdown_14
// with type: int ldv_shutdown_14()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_shutdown_14() {
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

// Function: ldv_suspend_15
// with type: int ldv_suspend_15()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_suspend_15() {
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

// Skip function: malloc

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

// Function: notify_remote_via_irq
// with type: void notify_remote_via_irq(int)
// with return type: void
void notify_remote_via_irq(int arg0) {
  // Void type
  return;
}

// Function: pci_bus_read_config_byte
// with type: int pci_bus_read_config_byte(struct pci_bus *, unsigned int, int, u8 *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_bus_read_config_byte(struct pci_bus *arg0, unsigned int arg1, int arg2, u8 *arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_bus_read_config_dword
// with type: int pci_bus_read_config_dword(struct pci_bus *, unsigned int, int, u32 *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_bus_read_config_dword(struct pci_bus *arg0, unsigned int arg1, int arg2, u32 *arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_bus_read_config_word
// with type: int pci_bus_read_config_word(struct pci_bus *, unsigned int, int, u16 *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_bus_read_config_word(struct pci_bus *arg0, unsigned int arg1, int arg2, u16 *arg3) {
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

// Function: pci_bus_write_config_dword
// with type: int pci_bus_write_config_dword(struct pci_bus *, unsigned int, int, u32 )
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_bus_write_config_dword(struct pci_bus *arg0, unsigned int arg1, int arg2, u32 arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_bus_write_config_word
// with type: int pci_bus_write_config_word(struct pci_bus *, unsigned int, int, u16 )
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_bus_write_config_word(struct pci_bus *arg0, unsigned int arg1, int arg2, u16 arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_clear_master
// with type: void pci_clear_master(struct pci_dev *)
// with return type: void
void pci_clear_master(struct pci_dev *arg0) {
  // Void type
  return;
}

// Function: pci_clear_mwi
// with type: void pci_clear_mwi(struct pci_dev *)
// with return type: void
void pci_clear_mwi(struct pci_dev *arg0) {
  // Void type
  return;
}

// Function: pci_dev_get
// with type: struct pci_dev *pci_dev_get(struct pci_dev *)
// with return type: (struct pci_dev)*
struct pci_dev *pci_dev_get(struct pci_dev *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct pci_dev));
}

// Function: pci_dev_put
// with type: void pci_dev_put(struct pci_dev *)
// with return type: void
void pci_dev_put(struct pci_dev *arg0) {
  // Void type
  return;
}

// Function: pci_disable_device
// with type: void pci_disable_device(struct pci_dev *)
// with return type: void
void pci_disable_device(struct pci_dev *arg0) {
  // Void type
  return;
}

// Function: pci_disable_msi
// with type: void pci_disable_msi(struct pci_dev *)
// with return type: void
void pci_disable_msi(struct pci_dev *arg0) {
  // Void type
  return;
}

// Function: pci_disable_msix
// with type: void pci_disable_msix(struct pci_dev *)
// with return type: void
void pci_disable_msix(struct pci_dev *arg0) {
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

// Function: pci_enable_msi_range
// with type: int pci_enable_msi_range(struct pci_dev *, int, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_enable_msi_range(struct pci_dev *arg0, int arg1, int arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_enable_msix_range
// with type: int pci_enable_msix_range(struct pci_dev *, struct msix_entry *, int, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_enable_msix_range(struct pci_dev *arg0, struct msix_entry *arg1, int arg2, int arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_find_capability
// with type: int pci_find_capability(struct pci_dev *, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_find_capability(struct pci_dev *arg0, int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_load_and_free_saved_state
// with type: int pci_load_and_free_saved_state(struct pci_dev *, struct pci_saved_state **)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_load_and_free_saved_state(struct pci_dev *arg0, struct pci_saved_state **arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_load_saved_state
// with type: int pci_load_saved_state(struct pci_dev *, struct pci_saved_state *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_load_saved_state(struct pci_dev *arg0, struct pci_saved_state *arg1) {
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

// Function: pci_set_mwi
// with type: int pci_set_mwi(struct pci_dev *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_set_mwi(struct pci_dev *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_set_power_state
// with type: int pci_set_power_state(struct pci_dev *, pci_power_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_set_power_state(struct pci_dev *arg0, pci_power_t arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_store_saved_state
// with type: struct pci_saved_state *pci_store_saved_state(struct pci_dev *)
// with return type: (struct pci_saved_state)*
struct pci_saved_state *pci_store_saved_state(struct pci_dev *arg0) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: pci_unregister_driver
// with type: void pci_unregister_driver(struct pci_driver *)
// with return type: void
void pci_unregister_driver(struct pci_driver *arg0) {
  // Void type
  return;
}

// Function: prepare_to_wait_event
// with type: long int prepare_to_wait_event(wait_queue_head_t *, wait_queue_t *, int)
// with return type: long int
long __VERIFIER_nondet_long(void);
long int prepare_to_wait_event(wait_queue_head_t *arg0, wait_queue_t *arg1, int arg2) {
  // Simple type
  return __VERIFIER_nondet_long();
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

// Function: schedule_timeout
// with type: long int schedule_timeout(long)
// with return type: long int
long __VERIFIER_nondet_long(void);
long int schedule_timeout(long arg0) {
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: scnprintf
// with type: int scnprintf(char *, size_t , const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int scnprintf(char *arg0, size_t arg1, const char *arg2, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: snprintf

// Skip function: sprintf

// Skip function: sscanf

// Skip function: strcmp

// Skip function: strlen

// Function: unbind_from_irqhandler
// with type: void unbind_from_irqhandler(unsigned int, void *)
// with return type: void
void unbind_from_irqhandler(unsigned int arg0, void *arg1) {
  // Void type
  return;
}

// Function: unregister_xenbus_watch
// with type: void unregister_xenbus_watch(struct xenbus_watch *)
// with return type: void
void unregister_xenbus_watch(struct xenbus_watch *arg0) {
  // Void type
  return;
}

// Function: up_write
// with type: void up_write(struct rw_semaphore *)
// with return type: void
void up_write(struct rw_semaphore *arg0) {
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

// Function: xen_find_device_domain_owner
// with type: int xen_find_device_domain_owner(struct pci_dev *)
// with return type: int
int __VERIFIER_nondet_int(void);
int xen_find_device_domain_owner(struct pci_dev *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xen_physdev_op_compat
// with type: int xen_physdev_op_compat(int, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int xen_physdev_op_compat(int arg0, void *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xen_pirq_from_irq
// with type: int xen_pirq_from_irq(unsigned int)
// with return type: int
int __VERIFIER_nondet_int(void);
int xen_pirq_from_irq(unsigned int arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xen_register_device_domain_owner
// with type: int xen_register_device_domain_owner(struct pci_dev *, uint16_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int xen_register_device_domain_owner(struct pci_dev *arg0, uint16_t arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xen_test_irq_shared
// with type: int xen_test_irq_shared(int)
// with return type: int
int __VERIFIER_nondet_int(void);
int xen_test_irq_shared(int arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xen_unregister_device_domain_owner
// with type: int xen_unregister_device_domain_owner(struct pci_dev *)
// with return type: int
int __VERIFIER_nondet_int(void);
int xen_unregister_device_domain_owner(struct pci_dev *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xenbus_dev_fatal
// with type: void xenbus_dev_fatal(struct xenbus_device *, int, const char *, ...)
// with return type: void
void xenbus_dev_fatal(struct xenbus_device *arg0, int arg1, const char *arg2, ...) {
  // Void type
  return;
}

// Function: xenbus_dev_is_online
// with type: int xenbus_dev_is_online(struct xenbus_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int xenbus_dev_is_online(struct xenbus_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xenbus_gather
// with type: int xenbus_gather(struct xenbus_transaction , const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int xenbus_gather(struct xenbus_transaction arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xenbus_map_ring_valloc
// with type: int xenbus_map_ring_valloc(struct xenbus_device *, grant_ref_t *, unsigned int, void **)
// with return type: int
int __VERIFIER_nondet_int(void);
int xenbus_map_ring_valloc(struct xenbus_device *arg0, grant_ref_t *arg1, unsigned int arg2, void **arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xenbus_printf
// with type: int xenbus_printf(struct xenbus_transaction , const char *, const char *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int xenbus_printf(struct xenbus_transaction arg0, const char *arg1, const char *arg2, const char *arg3, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xenbus_read_driver_state
// with type: enum xenbus_state xenbus_read_driver_state(const char *)
// with return type: enum xenbus_state
int __VERIFIER_nondet_int(void);
enum xenbus_state xenbus_read_driver_state(const char *arg0) {
  // Enum type
  return __VERIFIER_nondet_int();
}

// Function: xenbus_scanf
// with type: int xenbus_scanf(struct xenbus_transaction , const char *, const char *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int xenbus_scanf(struct xenbus_transaction arg0, const char *arg1, const char *arg2, const char *arg3, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xenbus_switch_state
// with type: int xenbus_switch_state(struct xenbus_device *, enum xenbus_state )
// with return type: int
int __VERIFIER_nondet_int(void);
int xenbus_switch_state(struct xenbus_device *arg0, enum xenbus_state arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xenbus_transaction_end
// with type: int xenbus_transaction_end(struct xenbus_transaction , int)
// with return type: int
int __VERIFIER_nondet_int(void);
int xenbus_transaction_end(struct xenbus_transaction arg0, int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xenbus_transaction_start
// with type: int xenbus_transaction_start(struct xenbus_transaction *)
// with return type: int
int __VERIFIER_nondet_int(void);
int xenbus_transaction_start(struct xenbus_transaction *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xenbus_unmap_ring_vfree
// with type: int xenbus_unmap_ring_vfree(struct xenbus_device *, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int xenbus_unmap_ring_vfree(struct xenbus_device *arg0, void *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: xenbus_unregister_driver
// with type: void xenbus_unregister_driver(struct xenbus_driver *)
// with return type: void
void xenbus_unregister_driver(struct xenbus_driver *arg0) {
  // Void type
  return;
}

// Function: xenbus_watch_path
// with type: int xenbus_watch_path(struct xenbus_device *, const char *, struct xenbus_watch *, void (*)(struct xenbus_watch *, const char **, unsigned int))
// with return type: int
int __VERIFIER_nondet_int(void);
int xenbus_watch_path(struct xenbus_device *arg0, const char *arg1, struct xenbus_watch *arg2, void (*arg3)(struct xenbus_watch *, const char **, unsigned int)) {
  // Simple type
  return __VERIFIER_nondet_int();
}

