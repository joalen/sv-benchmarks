#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Skip function: __VERIFIER_nondet_size_t

// Skip function: __VERIFIER_nondet_uchar

// Skip function: __VERIFIER_nondet_ulong

// Function: __const_udelay
// with type: void __const_udelay(unsigned long)
// with return type: void
void __const_udelay(unsigned long arg0) {
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

// Function: __list_del_entry
// with type: void __list_del_entry(struct list_head *)
// with return type: void
void __list_del_entry(struct list_head *arg0) {
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

// Function: __pci_register_driver
// with type: int __pci_register_driver(struct pci_driver *, struct module *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int __pci_register_driver(struct pci_driver *arg0, struct module *arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __phys_addr
// with type: unsigned long int __phys_addr(unsigned long)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int __phys_addr(unsigned long arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: __platform_driver_register
// with type: int __platform_driver_register(struct platform_driver *, struct module *)
// with return type: int
int __VERIFIER_nondet_int(void);
int __platform_driver_register(struct platform_driver *arg0, struct module *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __release_region
// with type: void __release_region(struct resource *, resource_size_t , resource_size_t )
// with return type: void
void __release_region(struct resource *arg0, resource_size_t arg1, resource_size_t arg2) {
  // Void type
  return;
}

// Function: __request_region
// with type: struct resource *__request_region(struct resource *, resource_size_t , resource_size_t , const char *, int)
// with return type: (struct resource)*
struct resource *__request_region(struct resource *arg0, resource_size_t arg1, resource_size_t arg2, const char *arg3, int arg4) {
  // Pointer type
  return ldv_malloc(sizeof(struct resource));
}

// Function: _cond_resched
// with type: int _cond_resched()
// with return type: int
int __VERIFIER_nondet_int(void);
int _cond_resched() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: _dev_info
// with type: int _dev_info(const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int _dev_info(const struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: _raw_spin_lock
// with type: void _raw_spin_lock(raw_spinlock_t *)
// with return type: void
void _raw_spin_lock(raw_spinlock_t *arg0) {
  // Void type
  return;
}

// Function: _raw_spin_unlock
// with type: void _raw_spin_unlock(raw_spinlock_t *)
// with return type: void
void _raw_spin_unlock(raw_spinlock_t *arg0) {
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

// Skip function: calloc

// Function: debug_dma_alloc_coherent
// with type: void debug_dma_alloc_coherent(struct device *, size_t , dma_addr_t , void *)
// with return type: void
void debug_dma_alloc_coherent(struct device *arg0, size_t arg1, dma_addr_t arg2, void *arg3) {
  // Void type
  return;
}

// Function: debug_dma_free_coherent
// with type: void debug_dma_free_coherent(struct device *, size_t , void *, dma_addr_t )
// with return type: void
void debug_dma_free_coherent(struct device *arg0, size_t arg1, void *arg2, dma_addr_t arg3) {
  // Void type
  return;
}

// Function: debug_dma_map_page
// with type: void debug_dma_map_page(struct device *, struct page *, size_t , size_t , int, dma_addr_t , bool )
// with return type: void
void debug_dma_map_page(struct device *arg0, struct page *arg1, size_t arg2, size_t arg3, int arg4, dma_addr_t arg5, bool arg6) {
  // Void type
  return;
}

// Function: debug_dma_unmap_page
// with type: void debug_dma_unmap_page(struct device *, dma_addr_t , size_t , int, bool )
// with return type: void
void debug_dma_unmap_page(struct device *arg0, dma_addr_t arg1, size_t arg2, int arg3, bool arg4) {
  // Void type
  return;
}

// Function: dev_err
// with type: int dev_err(const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_err(const struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dma_set_mask
// with type: int dma_set_mask(struct device *, u64 )
// with return type: int
int __VERIFIER_nondet_int(void);
int dma_set_mask(struct device *arg0, u64 arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dma_supported
// with type: int dma_supported(struct device *, u64 )
// with return type: int
int __VERIFIER_nondet_int(void);
int dma_supported(struct device *arg0, u64 arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: free_dma
// with type: void free_dma(unsigned int)
// with return type: void
void free_dma(unsigned int arg0) {
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

// Function: ldv_initialize
// with type: void ldv_initialize()
// with return type: void
void ldv_initialize() {
  // Void type
  return;
}

// Function: ldv_probe_5
// with type: int ldv_probe_5()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_probe_5() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_2
// with type: int ldv_release_2()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_2() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_release_5
// with type: int ldv_release_5()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_release_5() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_some_page
// with type: struct page___0 *ldv_some_page()
// with return type: (struct page___0)*
struct page___0 *ldv_some_page() {
  // Pointer type
  return ldv_malloc(sizeof(struct page___0));
}

// Skip function: malloc

// Skip function: memcpy

// Function: msecs_to_jiffies
// with type: unsigned long int msecs_to_jiffies(const unsigned int)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int msecs_to_jiffies(const unsigned int arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: parport_announce_port
// with type: void parport_announce_port(struct parport *)
// with return type: void
void parport_announce_port(struct parport *arg0) {
  // Void type
  return;
}

// Function: parport_ieee1284_ecp_read_data
// with type: size_t parport_ieee1284_ecp_read_data(struct parport *, void *, size_t , int)
// with return type: size_t 
unsigned long __VERIFIER_nondet_ulong(void);
size_t parport_ieee1284_ecp_read_data(struct parport *arg0, void *arg1, size_t arg2, int arg3) {
  // Typedef type
  // Real type: __kernel_size_t 
  // Typedef type
  // Real type: __kernel_ulong_t 
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: parport_ieee1284_ecp_write_addr
// with type: size_t parport_ieee1284_ecp_write_addr(struct parport *, const void *, size_t , int)
// with return type: size_t 
unsigned long __VERIFIER_nondet_ulong(void);
size_t parport_ieee1284_ecp_write_addr(struct parport *arg0, const void *arg1, size_t arg2, int arg3) {
  // Typedef type
  // Real type: __kernel_size_t 
  // Typedef type
  // Real type: __kernel_ulong_t 
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: parport_ieee1284_ecp_write_data
// with type: size_t parport_ieee1284_ecp_write_data(struct parport *, const void *, size_t , int)
// with return type: size_t 
unsigned long __VERIFIER_nondet_ulong(void);
size_t parport_ieee1284_ecp_write_data(struct parport *arg0, const void *arg1, size_t arg2, int arg3) {
  // Typedef type
  // Real type: __kernel_size_t 
  // Typedef type
  // Real type: __kernel_ulong_t 
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: parport_ieee1284_epp_read_addr
// with type: size_t parport_ieee1284_epp_read_addr(struct parport *, void *, size_t , int)
// with return type: size_t 
unsigned long __VERIFIER_nondet_ulong(void);
size_t parport_ieee1284_epp_read_addr(struct parport *arg0, void *arg1, size_t arg2, int arg3) {
  // Typedef type
  // Real type: __kernel_size_t 
  // Typedef type
  // Real type: __kernel_ulong_t 
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: parport_ieee1284_epp_read_data
// with type: size_t parport_ieee1284_epp_read_data(struct parport *, void *, size_t , int)
// with return type: size_t 
unsigned long __VERIFIER_nondet_ulong(void);
size_t parport_ieee1284_epp_read_data(struct parport *arg0, void *arg1, size_t arg2, int arg3) {
  // Typedef type
  // Real type: __kernel_size_t 
  // Typedef type
  // Real type: __kernel_ulong_t 
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: parport_ieee1284_epp_write_addr
// with type: size_t parport_ieee1284_epp_write_addr(struct parport *, const void *, size_t , int)
// with return type: size_t 
unsigned long __VERIFIER_nondet_ulong(void);
size_t parport_ieee1284_epp_write_addr(struct parport *arg0, const void *arg1, size_t arg2, int arg3) {
  // Typedef type
  // Real type: __kernel_size_t 
  // Typedef type
  // Real type: __kernel_ulong_t 
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: parport_ieee1284_epp_write_data
// with type: size_t parport_ieee1284_epp_write_data(struct parport *, const void *, size_t , int)
// with return type: size_t 
unsigned long __VERIFIER_nondet_ulong(void);
size_t parport_ieee1284_epp_write_data(struct parport *arg0, const void *arg1, size_t arg2, int arg3) {
  // Typedef type
  // Real type: __kernel_size_t 
  // Typedef type
  // Real type: __kernel_ulong_t 
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: parport_ieee1284_read_byte
// with type: size_t parport_ieee1284_read_byte(struct parport *, void *, size_t , int)
// with return type: size_t 
unsigned long __VERIFIER_nondet_ulong(void);
size_t parport_ieee1284_read_byte(struct parport *arg0, void *arg1, size_t arg2, int arg3) {
  // Typedef type
  // Real type: __kernel_size_t 
  // Typedef type
  // Real type: __kernel_ulong_t 
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: parport_ieee1284_read_nibble
// with type: size_t parport_ieee1284_read_nibble(struct parport *, void *, size_t , int)
// with return type: size_t 
unsigned long __VERIFIER_nondet_ulong(void);
size_t parport_ieee1284_read_nibble(struct parport *arg0, void *arg1, size_t arg2, int arg3) {
  // Typedef type
  // Real type: __kernel_size_t 
  // Typedef type
  // Real type: __kernel_ulong_t 
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: parport_ieee1284_write_compat
// with type: size_t parport_ieee1284_write_compat(struct parport *, const void *, size_t , int)
// with return type: size_t 
unsigned long __VERIFIER_nondet_ulong(void);
size_t parport_ieee1284_write_compat(struct parport *arg0, const void *arg1, size_t arg2, int arg3) {
  // Typedef type
  // Real type: __kernel_size_t 
  // Typedef type
  // Real type: __kernel_ulong_t 
  // Typedef type
  // Real type: unsigned long
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: parport_irq_handler
// with type: irqreturn_t parport_irq_handler(int, void *)
// with return type: irqreturn_t 
int __VERIFIER_nondet_int(void);
irqreturn_t parport_irq_handler(int arg0, void *arg1) {
  // Typedef type
  // Real type: enum irqreturn
  // Enum type
  return __VERIFIER_nondet_int();
}

// Function: parport_put_port
// with type: void parport_put_port(struct parport *)
// with return type: void
void parport_put_port(struct parport *arg0) {
  // Void type
  return;
}

// Function: parport_register_port
// with type: struct parport *parport_register_port(unsigned long, int, int, struct parport_operations *)
// with return type: (struct parport)*
struct parport *parport_register_port(unsigned long arg0, int arg1, int arg2, struct parport_operations *arg3) {
  // Pointer type
  return ldv_malloc(sizeof(struct parport));
}

// Function: parport_remove_port
// with type: void parport_remove_port(struct parport *)
// with return type: void
void parport_remove_port(struct parport *arg0) {
  // Void type
  return;
}

// Function: parport_wait_event
// with type: int parport_wait_event(struct parport *, long)
// with return type: int
int __VERIFIER_nondet_int(void);
int parport_wait_event(struct parport *arg0, long arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: parport_wait_peripheral
// with type: int parport_wait_peripheral(struct parport *, unsigned char, unsigned char)
// with return type: int
int __VERIFIER_nondet_int(void);
int parport_wait_peripheral(struct parport *arg0, unsigned char arg1, unsigned char arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: pci_enable_device
// with type: int pci_enable_device(struct pci_dev *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pci_enable_device(struct pci_dev *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pci_get_device
// with type: struct pci_dev *pci_get_device(unsigned int, unsigned int, struct pci_dev *)
// with return type: (struct pci_dev)*
struct pci_dev *pci_get_device(unsigned int arg0, unsigned int arg1, struct pci_dev *arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct pci_dev));
}

// Function: pci_match_id
// with type: const struct pci_device_id *pci_match_id(const struct pci_device_id *, struct pci_dev *)
// with return type: (struct pci_device_id)*
const struct pci_device_id *pci_match_id(const struct pci_device_id *arg0, struct pci_dev *arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct pci_device_id));
}

// Function: pci_unregister_driver
// with type: void pci_unregister_driver(struct pci_driver *)
// with return type: void
void pci_unregister_driver(struct pci_driver *arg0) {
  // Void type
  return;
}

// Function: platform_device_register_full
// with type: struct platform_device *platform_device_register_full(const struct platform_device_info *)
// with return type: (struct platform_device)*
struct platform_device *platform_device_register_full(const struct platform_device_info *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct platform_device));
}

// Function: platform_device_unregister
// with type: void platform_device_unregister(struct platform_device *)
// with return type: void
void platform_device_unregister(struct platform_device *arg0) {
  // Void type
  return;
}

// Function: platform_driver_unregister
// with type: void platform_driver_unregister(struct platform_driver *)
// with return type: void
void platform_driver_unregister(struct platform_driver *arg0) {
  // Void type
  return;
}

// Function: pnp_get_resource
// with type: struct resource *pnp_get_resource(struct pnp_dev *, unsigned long, unsigned int)
// with return type: (struct resource)*
struct resource *pnp_get_resource(struct pnp_dev *arg0, unsigned long arg1, unsigned int arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct resource));
}

// Function: pnp_register_driver
// with type: int pnp_register_driver(struct pnp_driver *)
// with return type: int
int __VERIFIER_nondet_int(void);
int pnp_register_driver(struct pnp_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pnp_unregister_driver
// with type: void pnp_unregister_driver(struct pnp_driver *)
// with return type: void
void pnp_unregister_driver(struct pnp_driver *arg0) {
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

// Function: probe_irq_off
// with type: int probe_irq_off(unsigned long)
// with return type: int
int __VERIFIER_nondet_int(void);
int probe_irq_off(unsigned long arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: probe_irq_on
// with type: unsigned long int probe_irq_on()
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int probe_irq_on() {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: request_dma
// with type: int request_dma(unsigned int, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int request_dma(unsigned int arg0, const char *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: request_threaded_irq
// with type: int request_threaded_irq(unsigned int, irqreturn_t (*)(int, void *), irqreturn_t (*)(int, void *), unsigned long, const char *, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int request_threaded_irq(unsigned int arg0, irqreturn_t (*arg1)(int, void *), irqreturn_t (*arg2)(int, void *), unsigned long arg3, const char *arg4, void *arg5) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: schedule
// with type: void schedule()
// with return type: void
void schedule() {
  // Void type
  return;
}

// Function: schedule_timeout_interruptible
// with type: long int schedule_timeout_interruptible(long)
// with return type: long int
long __VERIFIER_nondet_long(void);
long int schedule_timeout_interruptible(long arg0) {
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: simple_strtoul
// with type: unsigned long int simple_strtoul(const char *, char **, unsigned int)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int simple_strtoul(const char *arg0, char **arg1, unsigned int arg2) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Skip function: strcmp

// Skip function: strncmp

// Function: warn_slowpath_null
// with type: void warn_slowpath_null(const char *, const int)
// with return type: void
void warn_slowpath_null(const char *arg0, const int arg1) {
  // Void type
  return;
}

