#include <klee/klee.h>
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "kundu1.cil.c", 3, "reach_error"); }

extern int __VERIFIER_nondet_int();

void error(void) 
{ 

  {
  ERROR: {reach_error();abort();}
  return;
}
}

void immediate_notify(void) ;
int max_loop ;
    klee_make_symbolic(&max_loop, sizeof(int), "max_loop");
int num ;
    klee_make_symbolic(&num, sizeof(int), "num");
int i  ;
    klee_make_symbolic(&i, sizeof(int), "i");
int e  ;
    klee_make_symbolic(&e, sizeof(int), "e");
int timer ;
    klee_make_symbolic(&timer, sizeof(int), "timer");
char data_0  ;
    klee_make_symbolic(&data_0, sizeof(char), "data_0");
char data_1  ;
    klee_make_symbolic(&data_1, sizeof(char), "data_1");
char read_data(int i___0 ) 
{ char c ;
    klee_make_symbolic(&c, sizeof(char), "c");
  char __retres3 ;
    klee_make_symbolic(&__retres3, sizeof(char), "__retres3");

  {
  if (i___0 == 0) {
    __retres3 = data_0;
    goto return_label;
  } else {
    if (i___0 == 1) {
      __retres3 = data_1;
      goto return_label;
    } else {
      {
	error();
      }
    }
  }
  __retres3 = c;
  return_label: /* CIL Label */ 
  return (__retres3);
}
}
void write_data(int i___0 , char c ) 
{ 

  {
  if (i___0 == 0) {
    data_0 = c;
  } else {
    if (i___0 == 1) {
      data_1 = c;
    } else {
      {
	error();
      }
    }
  }

  return;
}
}
int P_1_pc;
    klee_make_symbolic(&P_1_pc, sizeof(int), "P_1_pc");
int P_1_st  ;
    klee_make_symbolic(&P_1_st, sizeof(int), "P_1_st");
int P_1_i  ;
    klee_make_symbolic(&P_1_i, sizeof(int), "P_1_i");
int P_1_ev  ;
    klee_make_symbolic(&P_1_ev, sizeof(int), "P_1_ev");
void P_1(void) 
{ 

  {
  if ((int )P_1_pc == 0) {
    goto P_1_ENTRY_LOC;
  } else {
    if ((int )P_1_pc == 1) {
      goto P_1_WAIT_LOC;
    } else {

    }
  }
  P_1_ENTRY_LOC: 
  {
  while (i < max_loop) {
    while_0_continue: /* CIL Label */ ;
    {
    write_data(num, 'A');
    num += 1;
    P_1_pc = 1;
    P_1_st = 2;
    }

    goto return_label;
    P_1_WAIT_LOC: ;
  }
  while_0_break: /* CIL Label */ ;
  }
  P_1_st = 2;

  return_label: /* CIL Label */ 
  return;
}
}
int is_P_1_triggered(void) 
{ int __retres1 ;
    klee_make_symbolic(&__retres1, sizeof(int), "__retres1");

  {
  if ((int )P_1_pc == 1) {
    if ((int )P_1_ev == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: /* CIL Label */ 
  return (__retres1);
}
}
int C_1_pc  ;
    klee_make_symbolic(&C_1_pc, sizeof(int), "C_1_pc");
int C_1_st  ;
    klee_make_symbolic(&C_1_st, sizeof(int), "C_1_st");
int C_1_i  ;
    klee_make_symbolic(&C_1_i, sizeof(int), "C_1_i");
int C_1_ev  ;
    klee_make_symbolic(&C_1_ev, sizeof(int), "C_1_ev");
int C_1_pr  ;
    klee_make_symbolic(&C_1_pr, sizeof(int), "C_1_pr");
void C_1(void) 
{ char c ;

  {
  if ((int )C_1_pc == 0) {
    goto C_1_ENTRY_LOC;
  } else {
    if ((int )C_1_pc == 1) {
      goto C_1_WAIT_1_LOC;
    } else {
      if ((int )C_1_pc == 2) {
        goto C_1_WAIT_2_LOC;
      } else {

      }
    }
  }
  C_1_ENTRY_LOC: 
  {
  while (i < max_loop) {
    while_2_continue: /* CIL Label */ ;
    if (num == 0) {
      timer = 1;
      i += 1;
      C_1_pc = 1;
      C_1_st = 2;

      goto return_label;
      C_1_WAIT_1_LOC: ;
    } else {

    }
    num -= 1;
    if (! (num >= 0)) {
      {
	error();
      }
    } else {

    }
    {
    c = read_data(num);
    i += 1;
    C_1_pc = 2;
    C_1_st = 2;
    }

    goto return_label;
    C_1_WAIT_2_LOC: ;
  }
  while_2_break: /* CIL Label */ ;
  }
  C_1_st = 2;

  return_label: /* CIL Label */ 
  return;
}
}
int is_C_1_triggered(void) 
{ int __retres1 ;

  {
  if ((int )C_1_pc == 1) {
    if ((int )e == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  if ((int )C_1_pc == 2) {
    if ((int )C_1_ev == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: /* CIL Label */ 
  return (__retres1);
}
}
void update_channels(void) 
{ 

  {

  return;
}
}
void init_threads(void) 
{ 

  {
  if ((int )P_1_i == 1) {
    P_1_st = 0;
  } else {
    P_1_st = 2;
  }
  if ((int )C_1_i == 1) {
    C_1_st = 0;
  } else {
    C_1_st = 2;
  }

  return;
}
}
int exists_runnable_thread(void) 
{ int __retres1 ;

  {
  if ((int )P_1_st == 0) {
    __retres1 = 1;
    goto return_label;
  } else {
      if ((int )C_1_st == 0) {
        __retres1 = 1;
        goto return_label;
      } else {

      }
    }
  }
  __retres1 = 0;
  return_label: /* CIL Label */ 
  return (__retres1);
}

void eval(void) 
{ int tmp ;
    klee_make_symbolic(&tmp, sizeof(int), "tmp");
  int tmp___0 ;
    klee_make_symbolic(&tmp___0, sizeof(int), "tmp___0");
  int tmp___1 ;
    klee_make_symbolic(&tmp___1, sizeof(int), "tmp___1");
  int tmp___2 ;
    klee_make_symbolic(&tmp___2, sizeof(int), "tmp___2");

  {
  {
  while (1) {
    while_3_continue: /* CIL Label */ ;
    {
    tmp___2 = exists_runnable_thread();
    }
    if (tmp___2) {

    } else {
      goto while_3_break;
    }
    if ((int )P_1_st == 0) {
      {
      tmp = __VERIFIER_nondet_int();
      }
      if (tmp) {
        {
        P_1_st = 1;
        P_1();
        }
      } else {

      }
    } else {

    }
    if ((int )C_1_st == 0) {
      {
	tmp___1 = __VERIFIER_nondet_int();
      }
      if (tmp___1) {
        {
        C_1_st = 1;
        C_1();
        }
      } else {

      }
    } else {

    }
  }
  while_3_break: /* CIL Label */ ;
  }

  return;
}
}
void fire_delta_events(void) 
{ 

  {

  return;
}
}
void reset_delta_events(void) 
{ 

  {

  return;
}
}
void fire_time_events(void) 
{ 

  {
  C_1_ev = 1;
  
  P_1_ev = 1;
  



  return;
}
}
void reset_time_events(void) 
{ 

  {
  if ((int )P_1_ev == 1) {
    P_1_ev = 2;
  } else {

  }
  if ((int )C_1_ev == 1) {
    C_1_ev = 2;
  } else {

  }

  return;
}
}
void activate_threads(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
  tmp = is_P_1_triggered();
  }
  if (tmp) {
    P_1_st = 0;
  } else {

  }
  {
  tmp___1 = is_C_1_triggered();
  }
  if (tmp___1) {
    C_1_st = 0;
  } else {

  }

  return;
}
}
void immediate_notify(void) 
{ 

  {
  {
  activate_threads();
  }

  return;
}
}
int stop_simulation(void) 
{ int tmp ;
  int __retres2 ;
    klee_make_symbolic(&__retres2, sizeof(int), "__retres2");

  {
  {
  tmp = exists_runnable_thread();
  }
  if (tmp) {
    __retres2 = 0;
    goto return_label;
  } else {

  }
  __retres2 = 1;
  return_label: /* CIL Label */ 
  return (__retres2);
}
}
void start_simulation(void) 
{ int kernel_st ;
    klee_make_symbolic(&kernel_st, sizeof(int), "kernel_st");
  int tmp ;
  int tmp___0 ;

  {
  {
  kernel_st = 0;
  update_channels();
  init_threads();
  fire_delta_events();
  activate_threads();
  reset_delta_events();
  }
  {
  while (1) {
    while_4_continue: /* CIL Label */ ;
    {
    kernel_st = 1;
    eval();
    }
    {
    kernel_st = 2;
    update_channels();
    }
    {
    kernel_st = 3;
    fire_delta_events();
    activate_threads();
    reset_delta_events();
    }
    {
    tmp = exists_runnable_thread();
    }
    if (tmp == 0) {
      {
      kernel_st = 4;
      fire_time_events();
      activate_threads();
      reset_time_events();
      }
    } else {

    }
    {
    tmp___0 = stop_simulation();
    }
    if (tmp___0) {
      goto while_4_break;
    } else {

    }
  }
  while_4_break: /* CIL Label */ ;
  }

  return;
}
}
void init_model(void) 
{ 

  {
  P_1_i = 1;
  C_1_i = 1;

  return;
}
}
int main(void) 
{ int count ;
    klee_make_symbolic(&count, sizeof(int), "count");
  int __retres2 ;

  {
  {
  num  =    0;
  i  =    0;
  max_loop = 2;
  e  ;
  timer  =    0;
  P_1_pc  =    0;
  C_1_pc  =    0;

  count = 0;
  init_model();
  start_simulation();
  }
  __retres2 = 0;
  return (__retres2);
}
}



