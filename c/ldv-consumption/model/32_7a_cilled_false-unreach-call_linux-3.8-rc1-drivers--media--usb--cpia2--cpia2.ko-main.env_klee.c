#include <klee/klee.h>
// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __init_waitqueue_head
// with type: void __init_waitqueue_head(wait_queue_head_t *, const char *, struct lock_class_key *)
// with return type: void
void __init_waitqueue_head(wait_queue_head_t *arg0, const char *arg1, struct lock_class_key *arg2) {
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

// Function: __phys_addr
// with type: unsigned long int __phys_addr(unsigned long)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int __phys_addr(unsigned long arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: __video_register_device
// with type: int __video_register_device(struct video_device *, int, int, int, struct module *)
// with return type: int
int __VERIFIER_nondet_int(void);
int __video_register_device(struct video_device *arg0, int arg1, int arg2, int arg3, struct module *arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __wake_up
// with type: void __wake_up(wait_queue_head_t *, unsigned int, int, void *)
// with return type: void
void __wake_up(wait_queue_head_t *arg0, unsigned int arg1, int arg2, void *arg3) {
  // Void type
  return;
}

// Function: _copy_to_user
// with type: unsigned long int _copy_to_user(void *, const void *, unsigned int)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int _copy_to_user(void *arg0, const void *arg1, unsigned int arg2) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: _dev_info
// with type: int _dev_info(const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int _dev_info(const struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_get_drvdata
// with type: void *dev_get_drvdata(const struct device *)
// with return type: (void)*
void *dev_get_drvdata(const struct device *arg0) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: dev_set_drvdata
// with type: int dev_set_drvdata(struct device *, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_set_drvdata(struct device *arg0, void *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: do_gettimeofday
// with type: void do_gettimeofday(struct timeval *)
// with return type: void
void do_gettimeofday(struct timeval *arg0) {
  // Void type
  return;
}

// Function: finish_wait
// with type: void finish_wait(wait_queue_head_t *, wait_queue_t *)
// with return type: void
void finish_wait(wait_queue_head_t *arg0, wait_queue_t *arg1) {
  // Void type
  return;
}

// Skip function: kfree

// Function: ldv_cpia2_template_probe_3
// with type: int ldv_cpia2_template_probe_3()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_cpia2_template_probe_3() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: malloc

// Skip function: memset

// Function: might_fault
// with type: void might_fault()
// with return type: void
void might_fault() {
  // Void type
  return;
}

// Function: msecs_to_jiffies
// with type: unsigned long int msecs_to_jiffies(const unsigned int)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int msecs_to_jiffies(const unsigned int arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: mutex_lock
// with type: void mutex_lock(struct mutex *)
// with return type: void
void mutex_lock(struct mutex *arg0) {
  // Void type
  return;
}

// Function: mutex_lock_interruptible
// with type: int mutex_lock_interruptible(struct mutex *)
// with return type: int
int __VERIFIER_nondet_int(void);
int mutex_lock_interruptible(struct mutex *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: mutex_trylock
// with type: int mutex_trylock(struct mutex *)
// with return type: int
int __VERIFIER_nondet_int(void);
int mutex_trylock(struct mutex *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: mutex_unlock
// with type: void mutex_unlock(struct mutex *)
// with return type: void
void mutex_unlock(struct mutex *arg0) {
  // Void type
  return;
}

// Function: prepare_to_wait
// with type: void prepare_to_wait(wait_queue_head_t *, wait_queue_t *, int)
// with return type: void
void prepare_to_wait(wait_queue_head_t *arg0, wait_queue_t *arg1, int arg2) {
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

// Function: release_firmware
// with type: void release_firmware(const struct firmware *)
// with return type: void
void release_firmware(const struct firmware *arg0) {
  // Void type
  return;
}

// Function: remap_pfn_range
// with type: int remap_pfn_range(struct vm_area_struct *, unsigned long, unsigned long, unsigned long, pgprot_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int remap_pfn_range(struct vm_area_struct *arg0, unsigned long arg1, unsigned long arg2, unsigned long arg3, pgprot_t arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: request_firmware
// with type: int request_firmware(const struct firmware **, const char *, struct device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int request_firmware(const struct firmware **arg0, const char *arg1, struct device *arg2) {
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

// Function: schedule_timeout
// with type: long int schedule_timeout(long)
// with return type: long int
long __VERIFIER_nondet_long(void);
long int schedule_timeout(long arg0) {
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: schedule_timeout_interruptible
// with type: long int schedule_timeout_interruptible(long)
// with return type: long int
long __VERIFIER_nondet_long(void);
long int schedule_timeout_interruptible(long arg0) {
  // Simple type
  return __VERIFIER_nondet_long();
}

// Skip function: snprintf

// Skip function: strcat

// Skip function: strcpy

// Function: usb_alloc_urb
// with type: struct urb *usb_alloc_urb(int, gfp_t )
// with return type: (struct urb)*
struct urb *usb_alloc_urb(int arg0, gfp_t arg1) {
  // Pointer type
  return ldv_malloc(sizeof(struct urb));
}

// Function: usb_control_msg
// with type: int usb_control_msg(struct usb_device *, unsigned int, __u8 , __u8 , __u16 , __u16 , void *, __u16 , int)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_control_msg(struct usb_device *arg0, unsigned int arg1, __u8 arg2, __u8 arg3, __u16 arg4, __u16 arg5, void *arg6, __u16 arg7, int arg8) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usb_deregister
// with type: void usb_deregister(struct usb_driver *)
// with return type: void
void usb_deregister(struct usb_driver *arg0) {
  // Void type
  return;
}

// Function: usb_driver_release_interface
// with type: void usb_driver_release_interface(struct usb_driver *, struct usb_interface *)
// with return type: void
void usb_driver_release_interface(struct usb_driver *arg0, struct usb_interface *arg1) {
  // Void type
  return;
}

// Function: usb_free_urb
// with type: void usb_free_urb(struct urb *)
// with return type: void
void usb_free_urb(struct urb *arg0) {
  // Void type
  return;
}

// Function: usb_kill_urb
// with type: void usb_kill_urb(struct urb *)
// with return type: void
void usb_kill_urb(struct urb *arg0) {
  // Void type
  return;
}

// Function: usb_register_driver
// with type: int usb_register_driver(struct usb_driver *, struct module *, const char *)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_register_driver(struct usb_driver *arg0, struct module *arg1, const char *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usb_set_interface
// with type: int usb_set_interface(struct usb_device *, int, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_set_interface(struct usb_device *arg0, int arg1, int arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: usb_submit_urb
// with type: int usb_submit_urb(struct urb *, gfp_t )
// with return type: int
int __VERIFIER_nondet_int(void);
int usb_submit_urb(struct urb *arg0, gfp_t arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: v4l2_ctrl_cluster
// with type: void v4l2_ctrl_cluster(unsigned int, struct v4l2_ctrl **)
// with return type: void
void v4l2_ctrl_cluster(unsigned int arg0, struct v4l2_ctrl **arg1) {
  // Void type
  return;
}

// Function: v4l2_ctrl_grab
// with type: void v4l2_ctrl_grab(struct v4l2_ctrl *, bool )
// with return type: void
void v4l2_ctrl_grab(struct v4l2_ctrl *arg0, bool arg1) {
  // Void type
  return;
}

// Function: v4l2_ctrl_handler_free
// with type: void v4l2_ctrl_handler_free(struct v4l2_ctrl_handler *)
// with return type: void
void v4l2_ctrl_handler_free(struct v4l2_ctrl_handler *arg0) {
  // Void type
  return;
}

// Function: v4l2_ctrl_handler_init
// with type: int v4l2_ctrl_handler_init(struct v4l2_ctrl_handler *, unsigned int)
// with return type: int
int __VERIFIER_nondet_int(void);
int v4l2_ctrl_handler_init(struct v4l2_ctrl_handler *arg0, unsigned int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: v4l2_ctrl_handler_setup
// with type: int v4l2_ctrl_handler_setup(struct v4l2_ctrl_handler *)
// with return type: int
int __VERIFIER_nondet_int(void);
int v4l2_ctrl_handler_setup(struct v4l2_ctrl_handler *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: v4l2_ctrl_new_custom
// with type: struct v4l2_ctrl *v4l2_ctrl_new_custom(struct v4l2_ctrl_handler *, const struct v4l2_ctrl_config *, void *)
// with return type: (struct v4l2_ctrl)*
struct v4l2_ctrl *v4l2_ctrl_new_custom(struct v4l2_ctrl_handler *arg0, const struct v4l2_ctrl_config *arg1, void *arg2) {
  // Pointer type
  return ldv_malloc(sizeof(struct v4l2_ctrl));
}

// Function: v4l2_ctrl_new_std
// with type: struct v4l2_ctrl *v4l2_ctrl_new_std(struct v4l2_ctrl_handler *, const struct v4l2_ctrl_ops *, u32 , s32 , s32 , u32 , s32 )
// with return type: (struct v4l2_ctrl)*
struct v4l2_ctrl *v4l2_ctrl_new_std(struct v4l2_ctrl_handler *arg0, const struct v4l2_ctrl_ops *arg1, u32 arg2, s32 arg3, s32 arg4, u32 arg5, s32 arg6) {
  // Pointer type
  return ldv_malloc(sizeof(struct v4l2_ctrl));
}

// Function: v4l2_ctrl_new_std_menu
// with type: struct v4l2_ctrl *v4l2_ctrl_new_std_menu(struct v4l2_ctrl_handler *, const struct v4l2_ctrl_ops *, u32 , s32 , s32 , s32 )
// with return type: (struct v4l2_ctrl)*
struct v4l2_ctrl *v4l2_ctrl_new_std_menu(struct v4l2_ctrl_handler *arg0, const struct v4l2_ctrl_ops *arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5) {
  // Pointer type
  return ldv_malloc(sizeof(struct v4l2_ctrl));
}

// Function: v4l2_ctrl_poll
// with type: unsigned int v4l2_ctrl_poll(struct file *, struct poll_table_struct *)
// with return type: unsigned int
unsigned int __VERIFIER_nondet_uint(void);
unsigned int v4l2_ctrl_poll(struct file *arg0, struct poll_table_struct *arg1) {
  // Simple type
  return __VERIFIER_nondet_uint();
}

// Function: v4l2_ctrl_subscribe_event
// with type: int v4l2_ctrl_subscribe_event(struct v4l2_fh *, const struct v4l2_event_subscription *)
// with return type: int
int __VERIFIER_nondet_int(void);
int v4l2_ctrl_subscribe_event(struct v4l2_fh *arg0, const struct v4l2_event_subscription *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: v4l2_device_disconnect
// with type: void v4l2_device_disconnect(struct v4l2_device *)
// with return type: void
void v4l2_device_disconnect(struct v4l2_device *arg0) {
  // Void type
  return;
}

// Function: v4l2_device_put
// with type: int v4l2_device_put(struct v4l2_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int v4l2_device_put(struct v4l2_device *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: v4l2_device_register
// with type: int v4l2_device_register(struct device *, struct v4l2_device *)
// with return type: int
int __VERIFIER_nondet_int(void);
int v4l2_device_register(struct device *arg0, struct v4l2_device *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: v4l2_device_unregister
// with type: void v4l2_device_unregister(struct v4l2_device *)
// with return type: void
void v4l2_device_unregister(struct v4l2_device *arg0) {
  // Void type
  return;
}

// Function: v4l2_event_unsubscribe
// with type: int v4l2_event_unsubscribe(struct v4l2_fh *, const struct v4l2_event_subscription *)
// with return type: int
int __VERIFIER_nondet_int(void);
int v4l2_event_unsubscribe(struct v4l2_fh *arg0, const struct v4l2_event_subscription *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: v4l2_fh_is_singular
// with type: int v4l2_fh_is_singular(struct v4l2_fh *)
// with return type: int
int __VERIFIER_nondet_int(void);
int v4l2_fh_is_singular(struct v4l2_fh *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: v4l2_fh_open
// with type: int v4l2_fh_open(struct file *)
// with return type: int
int __VERIFIER_nondet_int(void);
int v4l2_fh_open(struct file *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: v4l2_fh_release
// with type: int v4l2_fh_release(struct file *)
// with return type: int
int __VERIFIER_nondet_int(void);
int v4l2_fh_release(struct file *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: vfree
// with type: void vfree(const void *)
// with return type: void
void vfree(const void *arg0) {
  // Void type
  return;
}

// Function: video_devdata
// with type: struct video_device *video_devdata(struct file *)
// with return type: (struct video_device)*
struct video_device *video_devdata(struct file *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct video_device));
}

// Function: video_device_release_empty
// with type: void video_device_release_empty(struct video_device *)
// with return type: void
void video_device_release_empty(struct video_device *arg0) {
  // Void type
  return;
}

// Function: video_ioctl2
// with type: long int video_ioctl2(struct file *, unsigned int, unsigned long)
// with return type: long int
long __VERIFIER_nondet_long(void);
long int video_ioctl2(struct file *arg0, unsigned int arg1, unsigned long arg2) {
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: video_unregister_device
// with type: void video_unregister_device(struct video_device *)
// with return type: void
void video_unregister_device(struct video_device *arg0) {
  // Void type
  return;
}

// Function: vmalloc_32
// with type: void *vmalloc_32(unsigned long)
// with return type: (void)*
void *vmalloc_32(unsigned long arg0) {
  // Pointer type
  return ldv_malloc(0UL);
}

// Function: vmalloc_to_page
// with type: struct page *vmalloc_to_page(const void *)
// with return type: (struct page)*
struct page *vmalloc_to_page(const void *arg0) {
  // Pointer type
  return ldv_malloc(sizeof(struct page));
}

