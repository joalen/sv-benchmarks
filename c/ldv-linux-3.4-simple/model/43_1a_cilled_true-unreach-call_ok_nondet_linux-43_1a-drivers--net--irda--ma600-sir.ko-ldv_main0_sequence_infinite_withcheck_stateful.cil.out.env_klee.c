#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __const_udelay
// with type: void __const_udelay(unsigned long)
// with return type: void
void __const_udelay(unsigned long arg0) {
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

// Function: __netdev_alloc_skb
// with type: struct sk_buff *__netdev_alloc_skb(struct net_device *, unsigned int, gfp_t )
// with return type: (struct sk_buff)*
struct sk_buff *__netdev_alloc_skb(struct net_device *arg0, unsigned int arg1, gfp_t arg2) {
  // Pointer type
  struct sk_buff *skb = ldv_malloc(sizeof(struct sk_buff));
  if(skb) {
    skb->dev = arg0;
    skb->head = ldv_malloc(arg1);
    skb->data = skb->head;
    skb->tail = 0;
  }
  return skb;
}

// Function: irda_qos_bits_to_value
// with type: void irda_qos_bits_to_value(struct qos_info *)
// with return type: void
void irda_qos_bits_to_value(struct qos_info *arg0) {
  // Void type
  return;
}

// Function: irda_register_dongle
// with type: int irda_register_dongle(struct dongle_driver *)
// with return type: int
int __VERIFIER_nondet_int(void);
int irda_register_dongle(struct dongle_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: irda_unregister_dongle
// with type: int irda_unregister_dongle(struct dongle_driver *)
// with return type: int
int __VERIFIER_nondet_int(void);
int irda_unregister_dongle(struct dongle_driver *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: msleep
// with type: void msleep(unsigned int)
// with return type: void
void msleep(unsigned int arg0) {
  // Void type
  return;
}

// Function: net_ratelimit
// with type: int net_ratelimit()
// with return type: int
int __VERIFIER_nondet_int(void);
int net_ratelimit() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: printk
// with type: int printk(const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int printk(const char *arg0, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: pskb_expand_head
// with type: int pskb_expand_head(struct sk_buff *, int, int, gfp_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int pskb_expand_head(struct sk_buff *arg0, int arg1, int arg2, gfp_t arg3) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: sirdev_raw_read
// with type: int sirdev_raw_read(struct sir_dev *, char *, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int sirdev_raw_read(struct sir_dev *arg0, char *arg1, int arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: sirdev_raw_write
// with type: int sirdev_raw_write(struct sir_dev *, const char *, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int sirdev_raw_write(struct sir_dev *arg0, const char *arg1, int arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: sirdev_set_dtr_rts
// with type: int sirdev_set_dtr_rts(struct sir_dev *, int, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int sirdev_set_dtr_rts(struct sir_dev *arg0, int arg1, int arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: skb_clone
// with type: struct sk_buff *skb_clone(struct sk_buff *, gfp_t )
// with return type: (struct sk_buff)*
struct sk_buff *skb_clone(struct sk_buff *arg0, gfp_t arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct sk_buff));
}

// Function: skb_copy
// with type: struct sk_buff *skb_copy(const struct sk_buff *, gfp_t )
// with return type: (struct sk_buff)*
struct sk_buff *skb_copy(const struct sk_buff *arg0, gfp_t arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct sk_buff));
}

