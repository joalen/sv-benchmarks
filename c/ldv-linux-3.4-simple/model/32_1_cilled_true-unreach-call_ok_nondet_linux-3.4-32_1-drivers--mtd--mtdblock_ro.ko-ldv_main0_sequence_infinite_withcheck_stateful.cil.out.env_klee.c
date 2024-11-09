#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: add_mtd_blktrans_dev
// with type: int add_mtd_blktrans_dev(struct mtd_blktrans_dev *dev)
// with return type: int
int __VERIFIER_nondet_int(void);
int add_mtd_blktrans_dev(struct mtd_blktrans_dev *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: del_mtd_blktrans_dev
// with type: int del_mtd_blktrans_dev(struct mtd_blktrans_dev *dev)
// with return type: int
int __VERIFIER_nondet_int(void);
int del_mtd_blktrans_dev(struct mtd_blktrans_dev *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: deregister_mtd_blktrans
// with type: int deregister_mtd_blktrans(struct mtd_blktrans_ops *tr)
// with return type: int
int __VERIFIER_nondet_int(void);
int deregister_mtd_blktrans(struct mtd_blktrans_ops *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: kfree

// Function: ldv_initialize
// with type: void ldv_initialize()
// with return type: void
void ldv_initialize() {
  // Void type
  return;
}

// Skip function: malloc

// Function: mtd_read
// with type: int mtd_read(struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf)
// with return type: int
int __VERIFIER_nondet_int(void);
int mtd_read(struct mtd_info *arg0, loff_t arg1, size_t arg2, size_t *arg3, u_char *arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: mtd_write
// with type: int mtd_write(struct mtd_info *mtd, loff_t to, size_t len, size_t *retlen, const u_char *buf)
// with return type: int
int __VERIFIER_nondet_int(void);
int mtd_write(struct mtd_info *arg0, loff_t arg1, size_t arg2, size_t *arg3, const u_char *arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: register_mtd_blktrans
// with type: int register_mtd_blktrans(struct mtd_blktrans_ops *tr)
// with return type: int
int __VERIFIER_nondet_int(void);
int register_mtd_blktrans(struct mtd_blktrans_ops *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

