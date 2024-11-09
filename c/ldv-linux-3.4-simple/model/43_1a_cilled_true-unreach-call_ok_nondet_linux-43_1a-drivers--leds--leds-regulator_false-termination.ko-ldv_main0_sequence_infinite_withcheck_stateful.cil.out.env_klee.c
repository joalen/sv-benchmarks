#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __dynamic_dev_dbg
// with type: int __dynamic_dev_dbg(struct _ddebug *, const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int __dynamic_dev_dbg(struct _ddebug *arg0, const struct device *arg1, const char *arg2, ...) {
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

// Function: __mutex_init
// with type: void __mutex_init(struct mutex *, const char *, struct lock_class_key *)
// with return type: void
void __mutex_init(struct mutex *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

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

// Function: dev_err
// with type: int dev_err(const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_err(const struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_set_drvdata
// with type: int dev_set_drvdata(struct device *, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_set_drvdata(struct device *arg0, void *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}
extern _Bool __VERIFIER_nondet_bool(void) ;
extern void *malloc(size_t) ;
__inline static  IS_ERR(void const *ptr ) ;
void *ldv_malloc(size_t size )
{
  if(__VERIFIER_nondet_bool()) return 0;
  void *p = malloc(size);
  assume_abort_if_not(IS_ERR(p) == 0);
  return p;
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

// Function: ldv_check_return_value
// with type: void ldv_check_return_value(int)
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

// Function: ldv_some_page
// with type: struct page *ldv_some_page()
// with return type: (struct page)*
struct page *ldv_some_page() {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: led_classdev_register
// with type: int led_classdev_register(struct device *, struct led_classdev *)
// with return type: int
int __VERIFIER_nondet_int(void);
int led_classdev_register(struct device *arg0, struct led_classdev *arg1) {
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

// Function: regulator_count_voltages
// with type: int regulator_count_voltages(struct regulator *)
// with return type: int
int __VERIFIER_nondet_int(void);
int regulator_count_voltages(struct regulator *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: regulator_disable
// with type: int regulator_disable(struct regulator *)
// with return type: int
int __VERIFIER_nondet_int(void);
int regulator_disable(struct regulator *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: regulator_enable
// with type: int regulator_enable(struct regulator *)
// with return type: int
int __VERIFIER_nondet_int(void);
int regulator_enable(struct regulator *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: regulator_get_exclusive
// with type: struct regulator *regulator_get_exclusive(struct device *, const char *)
// with return type: (struct regulator)*
struct regulator *regulator_get_exclusive(struct device *arg0, const char *arg1) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: regulator_is_enabled
// with type: int regulator_is_enabled(struct regulator *)
// with return type: int
int __VERIFIER_nondet_int(void);
int regulator_is_enabled(struct regulator *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: regulator_list_voltage
// with type: int regulator_list_voltage(struct regulator *, unsigned int)
// with return type: int
int __VERIFIER_nondet_int(void);
int regulator_list_voltage(struct regulator *arg0, unsigned int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: regulator_put
// with type: void regulator_put(struct regulator *)
// with return type: void
void regulator_put(struct regulator *arg0) {
  // Void type
  return;
}

// Function: regulator_set_voltage
// with type: int regulator_set_voltage(struct regulator *, int, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int regulator_set_voltage(struct regulator *arg0, int arg1, int arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: schedule_work
// with type: int schedule_work(struct work_struct *)
// with return type: int
int __VERIFIER_nondet_int(void);
int schedule_work(struct work_struct *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

