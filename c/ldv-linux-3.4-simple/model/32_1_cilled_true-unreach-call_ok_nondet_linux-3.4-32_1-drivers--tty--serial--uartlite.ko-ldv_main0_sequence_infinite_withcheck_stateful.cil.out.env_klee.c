#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __dynamic_pr_debug
// with type: int __dynamic_pr_debug(struct _ddebug *descriptor, const char *fmt, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int __dynamic_pr_debug(struct _ddebug *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __raw_spin_lock_init
// with type: void __raw_spin_lock_init(raw_spinlock_t *lock, const char *name, struct lock_class_key *key)
// with return type: void
void __raw_spin_lock_init(raw_spinlock_t *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

// Function: __release_region
// with type: void __release_region(struct resource *, resource_size_t , resource_size_t )
// with return type: void
void __release_region(struct resource *arg0, resource_size_t arg1, resource_size_t arg2) {
  // Void type
  return;
}
extern _Bool __VERIFIER_nondet_bool(void) ;
extern void *malloc(size_t) ;
void *ldv_malloc(size_t size )
{
  if(__VERIFIER_nondet_bool()) return 0;
  return malloc(size);
}

// Function: __request_region
// with type: struct resource *__request_region(struct resource *, resource_size_t start, resource_size_t n, const char *name, int flags)
// with return type: (struct resource)*
struct resource *__request_region(struct resource *arg0, resource_size_t arg1, resource_size_t arg2, const char *arg3, int arg4) {
  // Pointer type
  return ldv_malloc(sizeof(struct resource));
}

// Function: _raw_spin_lock_irqsave
// with type: unsigned long int _raw_spin_lock_irqsave(raw_spinlock_t *lock)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int _raw_spin_lock_irqsave(raw_spinlock_t *arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: _raw_spin_unlock_irqrestore
// with type: void _raw_spin_unlock_irqrestore(raw_spinlock_t *lock, unsigned long flags)
// with return type: void
void _raw_spin_unlock_irqrestore(raw_spinlock_t *arg0, unsigned long arg1) {
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

// Function: free_irq
// with type: void free_irq(unsigned int, void *)
// with return type: void
void free_irq(unsigned int arg0, void *arg1) {
  // Void type
  return;
}

// Function: ioread32be
// with type: unsigned int ioread32be(void *)
// with return type: unsigned int
unsigned int __VERIFIER_nondet_uint(void);
unsigned int ioread32be(void *arg0) {
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: ioremap_nocache
// with type: void *ioremap_nocache(resource_size_t offset, unsigned long size)
// with return type: (void)*
void *ioremap_nocache(resource_size_t arg0, unsigned long arg1) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: iounmap
// with type: void iounmap(volatile void *addr)
// with return type: void
void iounmap(volatile void *arg0) {
  // Void type
  return;
}

// Function: iowrite32be
// with type: void iowrite32be(u32 , void *)
// with return type: void
void iowrite32be(u32 arg0, void *arg1) {
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

// Function: platform_driver_register
// with type: int platform_driver_register(struct platform_driver *)
// with return type: int
int __VERIFIER_nondet_int(void);
int platform_driver_register(struct platform_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: platform_driver_unregister
// with type: void platform_driver_unregister(struct platform_driver *)
// with return type: void
void platform_driver_unregister(struct platform_driver *arg0) {
  // Void type
  return;
}

// Function: platform_get_resource
// with type: struct resource *platform_get_resource(struct platform_device *, unsigned int, unsigned int)
// with return type: (struct resource)*
struct resource *platform_get_resource(struct platform_device *arg0, unsigned int arg1, unsigned int arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct resource));
}

// Function: printk
// with type: int printk(const char *fmt, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int printk(const char *arg0, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: request_threaded_irq
// with type: int request_threaded_irq(unsigned int irq, irqreturn_t (*handler)(int, void *), irqreturn_t (*thread_fn)(int, void *), unsigned long flags, const char *name, void *dev)
// with return type: int
int __VERIFIER_nondet_int(void);
int request_threaded_irq(unsigned int arg0, irqreturn_t (*arg1)(int, void *), irqreturn_t (*arg2)(int, void *), unsigned long arg3, const char *arg4, void *arg5) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: tty_flip_buffer_push
// with type: void tty_flip_buffer_push(struct tty_struct *tty)
// with return type: void
void tty_flip_buffer_push(struct tty_struct *arg0) {
  // Void type
  return;
}

// Function: tty_insert_flip_string_flags
// with type: int tty_insert_flip_string_flags(struct tty_struct *tty, const unsigned char *chars, const char *flags, size_t size)
// with return type: int
int __VERIFIER_nondet_int(void);
int tty_insert_flip_string_flags(struct tty_struct *arg0, const unsigned char *arg1, const char *arg2, size_t arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: uart_add_one_port
// with type: int uart_add_one_port(struct uart_driver *reg, struct uart_port *port)
// with return type: int
int __VERIFIER_nondet_int(void);
int uart_add_one_port(struct uart_driver *arg0, struct uart_port *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: uart_get_baud_rate
// with type: unsigned int uart_get_baud_rate(struct uart_port *port, struct ktermios *termios, struct ktermios *old, unsigned int min, unsigned int max)
// with return type: unsigned int
unsigned int __VERIFIER_nondet_uint(void);
unsigned int uart_get_baud_rate(struct uart_port *arg0, struct ktermios *arg1, struct ktermios *arg2, unsigned int arg3, unsigned int arg4) {
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: uart_register_driver
// with type: int uart_register_driver(struct uart_driver *uart)
// with return type: int
int __VERIFIER_nondet_int(void);
int uart_register_driver(struct uart_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: uart_remove_one_port
// with type: int uart_remove_one_port(struct uart_driver *reg, struct uart_port *port)
// with return type: int
int __VERIFIER_nondet_int(void);
int uart_remove_one_port(struct uart_driver *arg0, struct uart_port *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: uart_unregister_driver
// with type: void uart_unregister_driver(struct uart_driver *uart)
// with return type: void
void uart_unregister_driver(struct uart_driver *arg0) {
  // Void type
  return;
}

// Function: uart_update_timeout
// with type: void uart_update_timeout(struct uart_port *port, unsigned int cflag, unsigned int baud)
// with return type: void
void uart_update_timeout(struct uart_port *arg0, unsigned int arg1, unsigned int arg2) {
  // Void type
  return;
}

// Function: uart_write_wakeup
// with type: void uart_write_wakeup(struct uart_port *port)
// with return type: void
void uart_write_wakeup(struct uart_port *arg0) {
  // Void type
  return;
}

