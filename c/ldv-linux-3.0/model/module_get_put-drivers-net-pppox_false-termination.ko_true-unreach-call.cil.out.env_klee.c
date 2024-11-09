#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __request_module
// with type: int __request_module(bool , const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int __request_module(bool arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ldv_initialize
// with type: void ldv_initialize()
// with return type: void
void ldv_initialize() {
  // Void type
  return;
}

// Function: ldv_undefined_int
// with type: int ldv_undefined_int()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_undefined_int() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: lock_sock_nested
// with type: void lock_sock_nested(struct sock *, int)
// with return type: void
void lock_sock_nested(struct sock *arg0, int arg1) {
  // Void type
  return;
}

// Function: might_fault
// with type: void might_fault()
// with return type: void
void might_fault() {
  // Void type
  return;
}

// Function: ppp_channel_index
// with type: int ppp_channel_index(struct ppp_channel *)
// with return type: int
int __VERIFIER_nondet_int(void);
int ppp_channel_index(struct ppp_channel *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: ppp_unregister_channel
// with type: void ppp_unregister_channel(struct ppp_channel *)
// with return type: void
void ppp_unregister_channel(struct ppp_channel *arg0) {
  // Void type
  return;
}

// Function: release_sock
// with type: void release_sock(struct sock *)
// with return type: void
void release_sock(struct sock *arg0) {
  // Void type
  return;
}

// Function: sock_register
// with type: int sock_register(const struct net_proto_family *)
// with return type: int
int __VERIFIER_nondet_int(void);
int sock_register(const struct net_proto_family *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: sock_unregister
// with type: void sock_unregister(int)
// with return type: void
void sock_unregister(int arg0) {
  // Void type
  return;
}

