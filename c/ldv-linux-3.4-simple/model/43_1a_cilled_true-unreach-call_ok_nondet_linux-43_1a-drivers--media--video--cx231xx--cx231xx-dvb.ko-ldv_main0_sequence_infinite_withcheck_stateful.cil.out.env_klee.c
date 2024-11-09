#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __mutex_init
// with type: void __mutex_init(struct mutex *, const char *, struct lock_class_key *)
// with return type: void
void __mutex_init(struct mutex *arg0, const char *arg1, struct lock_class_key *arg2) {
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

// Function: __request_module
// with type: int __request_module(bool , const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int __request_module(bool arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __symbol_get
// with type: void *__symbol_get(const char *)
// with return type: (void)*
void *__symbol_get(const char *arg0) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: __symbol_put
// with type: void __symbol_put(const char *)
// with return type: void
void __symbol_put(const char *arg0) {
  // Void type
  return;
}

// Function: cx231xx_demod_reset
// with type: int cx231xx_demod_reset(struct cx231xx *)
// with return type: int
int __VERIFIER_nondet_int(void);
int cx231xx_demod_reset(struct cx231xx *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: cx231xx_enable_i2c_port_3
// with type: int cx231xx_enable_i2c_port_3(struct cx231xx *, bool )
// with return type: int
int __VERIFIER_nondet_int(void);
int cx231xx_enable_i2c_port_3(struct cx231xx *arg0, bool arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: cx231xx_init_bulk
// with type: int cx231xx_init_bulk(struct cx231xx *, int, int, int, int (*)(struct cx231xx *, struct urb *))
// with return type: int
int __VERIFIER_nondet_int(void);
int cx231xx_init_bulk(struct cx231xx *arg0, int arg1, int arg2, int arg3, int (*arg4)(struct cx231xx *, struct urb *)) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: cx231xx_init_isoc
// with type: int cx231xx_init_isoc(struct cx231xx *, int, int, int, int (*)(struct cx231xx *, struct urb *))
// with return type: int
int __VERIFIER_nondet_int(void);
int cx231xx_init_isoc(struct cx231xx *arg0, int arg1, int arg2, int arg3, int (*arg4)(struct cx231xx *, struct urb *)) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: cx231xx_register_extension
// with type: int cx231xx_register_extension(struct cx231xx_ops *)
// with return type: int
int __VERIFIER_nondet_int(void);
int cx231xx_register_extension(struct cx231xx_ops *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: cx231xx_set_alt_setting
// with type: int cx231xx_set_alt_setting(struct cx231xx *, u8 , u8 )
// with return type: int
int __VERIFIER_nondet_int(void);
int cx231xx_set_alt_setting(struct cx231xx *arg0, u8 arg1, u8 arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: cx231xx_set_mode
// with type: int cx231xx_set_mode(struct cx231xx *, enum cx231xx_mode )
// with return type: int
int __VERIFIER_nondet_int(void);
int cx231xx_set_mode(struct cx231xx *arg0, enum cx231xx_mode arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: cx231xx_uninit_bulk
// with type: void cx231xx_uninit_bulk(struct cx231xx *)
// with return type: void
void cx231xx_uninit_bulk(struct cx231xx *arg0) {
  // Void type
  return;
}

// Function: cx231xx_uninit_isoc
// with type: void cx231xx_uninit_isoc(struct cx231xx *)
// with return type: void
void cx231xx_uninit_isoc(struct cx231xx *arg0) {
  // Void type
  return;
}

// Function: cx231xx_unregister_extension
// with type: void cx231xx_unregister_extension(struct cx231xx_ops *)
// with return type: void
void cx231xx_unregister_extension(struct cx231xx_ops *arg0) {
  // Void type
  return;
}

// Function: dvb_dmx_init
// with type: int dvb_dmx_init(struct dvb_demux *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dvb_dmx_init(struct dvb_demux *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dvb_dmx_release
// with type: void dvb_dmx_release(struct dvb_demux *)
// with return type: void
void dvb_dmx_release(struct dvb_demux *arg0) {
  // Void type
  return;
}

// Function: dvb_dmx_swfilter
// with type: void dvb_dmx_swfilter(struct dvb_demux *, const u8 *, size_t )
// with return type: void
void dvb_dmx_swfilter(struct dvb_demux *arg0, const u8 *arg1, size_t arg2) {
  // Void type
  return;
}

// Function: dvb_dmxdev_init
// with type: int dvb_dmxdev_init(struct dmxdev *, struct dvb_adapter *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dvb_dmxdev_init(struct dmxdev *arg0, struct dvb_adapter *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dvb_dmxdev_release
// with type: void dvb_dmxdev_release(struct dmxdev *)
// with return type: void
void dvb_dmxdev_release(struct dmxdev *arg0) {
  // Void type
  return;
}

// Function: dvb_frontend_detach
// with type: void dvb_frontend_detach(struct dvb_frontend *)
// with return type: void
void dvb_frontend_detach(struct dvb_frontend *arg0) {
  // Void type
  return;
}

// Function: dvb_net_init
// with type: int dvb_net_init(struct dvb_adapter *, struct dvb_net *, struct dmx_demux *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dvb_net_init(struct dvb_adapter *arg0, struct dvb_net *arg1, struct dmx_demux *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dvb_net_release
// with type: void dvb_net_release(struct dvb_net *)
// with return type: void
void dvb_net_release(struct dvb_net *arg0) {
  // Void type
  return;
}

// Function: dvb_register_adapter
// with type: int dvb_register_adapter(struct dvb_adapter *, const char *, struct module *, struct device *, short *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dvb_register_adapter(struct dvb_adapter *arg0, const char *arg1, struct module *arg2, struct device *arg3, short *arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dvb_register_frontend
// with type: int dvb_register_frontend(struct dvb_adapter *, struct dvb_frontend *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dvb_register_frontend(struct dvb_adapter *arg0, struct dvb_frontend *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dvb_unregister_adapter
// with type: int dvb_unregister_adapter(struct dvb_adapter *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dvb_unregister_adapter(struct dvb_adapter *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dvb_unregister_frontend
// with type: int dvb_unregister_frontend(struct dvb_frontend *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dvb_unregister_frontend(struct dvb_frontend *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
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

// Function: ldv_some_page
// with type: struct page *ldv_some_page()
// with return type: (struct page)*
struct page *ldv_some_page() {
  // Pointer type
  return ldv_malloc(sizeof(struct page));
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

