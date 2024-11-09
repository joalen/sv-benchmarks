#include <klee/klee.h>
extern _Bool __VERIFIER_nondet_bool(void) ;
extern void *malloc(size_t) ;
void *ldv_malloc(size_t size )
{
  if(__VERIFIER_nondet_bool()) return 0;
  return malloc(size);
}
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

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

// Function: printk
// with type: int printk(const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int printk(const char *arg0, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: serial_synth_probe
// with type: int serial_synth_probe(struct spk_synth *)
// with return type: int
int __VERIFIER_nondet_int(void);
int serial_synth_probe(struct spk_synth *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: spk_serial_in
// with type: unsigned char spk_serial_in()
// with return type: unsigned char
unsigned char __VERIFIER_nondet_uchar(void);
unsigned char spk_serial_in() {
  // Simple type
  return __VERIFIER_nondet_uchar();
}

// Function: spk_synth_immediate
// with type: const char *spk_synth_immediate(struct spk_synth *, const char *)
// with return type: (const char)*
const char *spk_synth_immediate(struct spk_synth *arg0, const char *arg1) {
  // Pointer type
  return ldv_malloc(sizeof(char));
}

// Function: synth_add
// with type: int synth_add(struct spk_synth *)
// with return type: int
int __VERIFIER_nondet_int(void);
int synth_add(struct spk_synth *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: synth_remove
// with type: void synth_remove(struct spk_synth *)
// with return type: void
void synth_remove(struct spk_synth *arg0) {
  // Void type
  return;
}

