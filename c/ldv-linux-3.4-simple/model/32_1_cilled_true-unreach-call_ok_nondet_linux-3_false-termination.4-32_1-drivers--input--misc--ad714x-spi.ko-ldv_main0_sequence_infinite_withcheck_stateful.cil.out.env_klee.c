#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __list_add
// with type: void __list_add(struct list_head *new, struct list_head *prev, struct list_head *next)
// with return type: void
void __list_add(struct list_head *arg0, struct list_head *arg1, struct list_head *arg2) {
  // Void type
  return;
}

// Function: ad714x_disable
// with type: int ad714x_disable(struct ad714x_chip *ad714x)
// with return type: int
int __VERIFIER_nondet_int(void);
int ad714x_disable(struct ad714x_chip *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ad714x_enable
// with type: int ad714x_enable(struct ad714x_chip *ad714x)
// with return type: int
int __VERIFIER_nondet_int(void);
int ad714x_enable(struct ad714x_chip *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}
extern _Bool __VERIFIER_nondet_bool(void) ;
extern void *malloc(size_t) ;
void *ldv_malloc(size_t size )
{
  if(__VERIFIER_nondet_bool()) return 0;
  return malloc(size);
}

// Function: ad714x_probe
// with type: struct ad714x_chip *ad714x_probe(struct device *dev, u16 bus_type, int irq, int (*read)(struct ad714x_chip *, unsigned short, unsigned short *, size_t ), int (*write)(struct ad714x_chip *, unsigned short, unsigned short))
// with return type: (struct ad714x_chip)*
struct ad714x_chip *ad714x_probe(struct device *arg0, u16 arg1, int arg2, int (*arg3)(struct ad714x_chip *, unsigned short, unsigned short *, size_t ), int (*arg4)(struct ad714x_chip *, unsigned short, unsigned short)) {
  // Pointer type
  return ldv_malloc(sizeof(struct ad714x_chip));
}

// Function: ad714x_remove
// with type: void ad714x_remove(struct ad714x_chip *ad714x)
// with return type: void
void ad714x_remove(struct ad714x_chip *arg0) {
  // Void type
  return;
}

// Function: dev_err
// with type: int dev_err(const struct device *dev, const char *fmt, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_err(const struct device *arg0, const char *arg1, ...) {
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

// Function: driver_unregister
// with type: void driver_unregister(struct device_driver *drv)
// with return type: void
void driver_unregister(struct device_driver *arg0) {
  // Void type
  return;
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

// Skip function: memset

// Function: spi_register_driver
// with type: int spi_register_driver(struct spi_driver *sdrv)
// with return type: int
int __VERIFIER_nondet_int(void);
int spi_register_driver(struct spi_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: spi_setup
// with type: int spi_setup(struct spi_device *spi)
// with return type: int
int __VERIFIER_nondet_int(void);
int spi_setup(struct spi_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: spi_sync
// with type: int spi_sync(struct spi_device *spi, struct spi_message *message)
// with return type: int
int __VERIFIER_nondet_int(void);
int spi_sync(struct spi_device *arg0, struct spi_message *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

