#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __apei_exec_run
// with type: int __apei_exec_run(struct apei_exec_context *, u8 , bool )
// with return type: int
int __VERIFIER_nondet_int(void);
int __apei_exec_run(struct apei_exec_context *arg0, u8 arg1, bool arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __const_udelay
// with type: void __const_udelay(unsigned long)
// with return type: void
void __const_udelay(unsigned long arg0) {
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
// with type: struct resource *__request_region(struct resource *, resource_size_t , resource_size_t , const char *, int)
// with return type: (struct resource)*
struct resource *__request_region(struct resource *arg0, resource_size_t arg1, resource_size_t arg2, const char *arg3, int arg4) {
  // Pointer type
  return ldv_malloc(sizeof(struct resource));
}

// Function: acpi_format_exception
// with type: const char *acpi_format_exception(acpi_status )
// with return type: (const char)*
const char *acpi_format_exception(acpi_status arg0) {
  // Pointer type
  return ldv_malloc(sizeof(char));
}

// Function: acpi_get_table
// with type: acpi_status acpi_get_table(acpi_string , u32 , struct acpi_table_header **)
// with return type: acpi_status 
unsigned int __VERIFIER_nondet_uint(void);
acpi_status acpi_get_table(acpi_string arg0, u32 arg1, struct acpi_table_header **arg2) {
  // Typedef type
  // Real type: u32 
  // Typedef type
  // Real type: unsigned int
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: acpi_os_map_memory
// with type: void *acpi_os_map_memory(acpi_physical_address , acpi_size )
// with return type: (void)*
void *acpi_os_map_memory(acpi_physical_address arg0, acpi_size arg1) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: acpi_os_unmap_memory
// with type: void acpi_os_unmap_memory(void *, acpi_size )
// with return type: void
void acpi_os_unmap_memory(void *arg0, acpi_size arg1) {
  // Void type
  return;
}

// Function: apei_exec_collect_resources
// with type: int apei_exec_collect_resources(struct apei_exec_context *, struct apei_resources *)
// with return type: int
int __VERIFIER_nondet_int(void);
int apei_exec_collect_resources(struct apei_exec_context *arg0, struct apei_resources *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: apei_exec_ctx_init
// with type: void apei_exec_ctx_init(struct apei_exec_context *, struct apei_exec_ins_type *, u32 , struct acpi_whea_header *, u32 )
// with return type: void
void apei_exec_ctx_init(struct apei_exec_context *arg0, struct apei_exec_ins_type *arg1, u32 arg2, struct acpi_whea_header *arg3, u32 arg4) {
  // Void type
  return;
}

// Function: apei_exec_post_unmap_gars
// with type: int apei_exec_post_unmap_gars(struct apei_exec_context *)
// with return type: int
int __VERIFIER_nondet_int(void);
int apei_exec_post_unmap_gars(struct apei_exec_context *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: apei_exec_pre_map_gars
// with type: int apei_exec_pre_map_gars(struct apei_exec_context *)
// with return type: int
int __VERIFIER_nondet_int(void);
int apei_exec_pre_map_gars(struct apei_exec_context *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: apei_get_debugfs_dir
// with type: struct dentry *apei_get_debugfs_dir()
// with return type: (struct dentry)*
struct dentry *apei_get_debugfs_dir() {
  // Pointer type
  return ldv_malloc(sizeof(struct dentry));
}

// Function: apei_resources_add
// with type: int apei_resources_add(struct apei_resources *, unsigned long, unsigned long, bool )
// with return type: int
int __VERIFIER_nondet_int(void);
int apei_resources_add(struct apei_resources *arg0, unsigned long arg1, unsigned long arg2, bool arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: apei_resources_fini
// with type: void apei_resources_fini(struct apei_resources *)
// with return type: void
void apei_resources_fini(struct apei_resources *arg0) {
  // Void type
  return;
}

// Function: apei_resources_release
// with type: void apei_resources_release(struct apei_resources *)
// with return type: void
void apei_resources_release(struct apei_resources *arg0) {
  // Void type
  return;
}

// Function: apei_resources_request
// with type: int apei_resources_request(struct apei_resources *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int apei_resources_request(struct apei_resources *arg0, const char *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: apei_resources_sub
// with type: int apei_resources_sub(struct apei_resources *, struct apei_resources *)
// with return type: int
int __VERIFIER_nondet_int(void);
int apei_resources_sub(struct apei_resources *arg0, struct apei_resources *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: debugfs_create_blob
// with type: struct dentry *debugfs_create_blob(const char *, umode_t , struct dentry *, struct debugfs_blob_wrapper *)
// with return type: (struct dentry)*
struct dentry *debugfs_create_blob(const char *arg0, umode_t arg1, struct dentry *arg2, struct debugfs_blob_wrapper *arg3) {
  // Pointer type
  return ldv_malloc(sizeof(struct dentry));
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

// Function: debugfs_create_x32
// with type: struct dentry *debugfs_create_x32(const char *, umode_t , struct dentry *, u32 *)
// with return type: (struct dentry)*
struct dentry *debugfs_create_x32(const char *arg0, umode_t arg1, struct dentry *arg2, u32 *arg3) {
  // Pointer type
  return ldv_malloc(sizeof(struct dentry));
}

// Function: debugfs_create_x64
// with type: struct dentry *debugfs_create_x64(const char *, umode_t , struct dentry *, u64 *)
// with return type: (struct dentry)*
struct dentry *debugfs_create_x64(const char *arg0, umode_t arg1, struct dentry *arg2, u64 *arg3) {
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

// Function: ioremap_cache
// with type: void *ioremap_cache(resource_size_t , unsigned long)
// with return type: (void)*
void *ioremap_cache(resource_size_t arg0, unsigned long arg1) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: iounmap
// with type: void iounmap(volatile void *)
// with return type: void
void iounmap(volatile void *arg0) {
  // Void type
  return;
}

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
  return ldv_malloc(sizeof(struct page));
}

// Skip function: memcpy

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

// Function: printk
// with type: int printk(const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int printk(const char *arg0, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: seq_printf
// with type: int seq_printf(struct seq_file *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int seq_printf(struct seq_file *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: simple_attr_open
// with type: int simple_attr_open(struct inode *, struct file *, int (*)(void *, u64 *), int (*)(void *, u64 ), const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int simple_attr_open(struct inode *arg0, struct file *arg1, int (*arg2)(void *, u64 *), int (*arg3)(void *, u64 ), const char *arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: single_open
// with type: int single_open(struct file *, int (*)(struct seq_file *, void *), void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int single_open(struct file *arg0, int (*arg1)(struct seq_file *, void *), void *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: sprintf

// Skip function: strlen

// Function: touch_nmi_watchdog
// with type: void touch_nmi_watchdog()
// with return type: void
void touch_nmi_watchdog() {
  // Void type
  return;
}

