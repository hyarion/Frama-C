/* Generated by Frama-C */
#include "stdio.h"
#include "stdlib.h"
int main(void)
{
  int __retres;
  __e_acsl_memory_init((int *)0,(char ***)0,(size_t)8);
  int x = -3;
  int y = 2;
  long z = 2L;
  /*@ assert -3 ≡ x; */
  {
    __e_acsl_mpz_t __gen_e_acsl_;
    __e_acsl_mpz_t __gen_e_acsl_neg;
    __e_acsl_mpz_t __gen_e_acsl_x;
    int __gen_e_acsl_eq;
    __gmpz_init_set_si(__gen_e_acsl_,3L);
    __gmpz_init(__gen_e_acsl_neg);
    __gmpz_neg(__gen_e_acsl_neg,(__e_acsl_mpz_struct const *)(__gen_e_acsl_));
    __gmpz_init_set_si(__gen_e_acsl_x,(long)x);
    __gen_e_acsl_eq = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_neg),
                                 (__e_acsl_mpz_struct const *)(__gen_e_acsl_x));
    __e_acsl_assert(__gen_e_acsl_eq == 0,(char *)"Assertion",(char *)"main",
                    (char *)"-3 == x",10);
    __gmpz_clear(__gen_e_acsl_);
    __gmpz_clear(__gen_e_acsl_neg);
    __gmpz_clear(__gen_e_acsl_x);
  }
  /*@ assert x ≡ -3; */
  {
    __e_acsl_mpz_t __gen_e_acsl_x_2;
    __e_acsl_mpz_t __gen_e_acsl__2;
    __e_acsl_mpz_t __gen_e_acsl_neg_2;
    int __gen_e_acsl_eq_2;
    __gmpz_init_set_si(__gen_e_acsl_x_2,(long)x);
    __gmpz_init_set_si(__gen_e_acsl__2,3L);
    __gmpz_init(__gen_e_acsl_neg_2);
    __gmpz_neg(__gen_e_acsl_neg_2,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__2));
    __gen_e_acsl_eq_2 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_x_2),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_2));
    __e_acsl_assert(__gen_e_acsl_eq_2 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"x == -3",11);
    __gmpz_clear(__gen_e_acsl_x_2);
    __gmpz_clear(__gen_e_acsl__2);
    __gmpz_clear(__gen_e_acsl_neg_2);
  }
  /*@ assert 0 ≢ ~0; */
  {
    __e_acsl_mpz_t __gen_e_acsl__3;
    __e_acsl_mpz_t __gen_e_acsl_bnot;
    int __gen_e_acsl_ne;
    __gmpz_init_set_si(__gen_e_acsl__3,0L);
    __gmpz_init(__gen_e_acsl_bnot);
    __gmpz_com(__gen_e_acsl_bnot,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__3));
    __gen_e_acsl_ne = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__3),
                                 (__e_acsl_mpz_struct const *)(__gen_e_acsl_bnot));
    __e_acsl_assert(__gen_e_acsl_ne != 0,(char *)"Assertion",(char *)"main",
                    (char *)"0 != ~0",12);
    __gmpz_clear(__gen_e_acsl__3);
    __gmpz_clear(__gen_e_acsl_bnot);
  }
  /*@ assert x + 1 ≡ -2; */
  {
    __e_acsl_mpz_t __gen_e_acsl_x_3;
    __e_acsl_mpz_t __gen_e_acsl__4;
    __e_acsl_mpz_t __gen_e_acsl_add;
    __e_acsl_mpz_t __gen_e_acsl__5;
    __e_acsl_mpz_t __gen_e_acsl_neg_3;
    int __gen_e_acsl_eq_3;
    __gmpz_init_set_si(__gen_e_acsl_x_3,(long)x);
    __gmpz_init_set_si(__gen_e_acsl__4,1L);
    __gmpz_init(__gen_e_acsl_add);
    __gmpz_add(__gen_e_acsl_add,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_x_3),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__4));
    __gmpz_init_set_si(__gen_e_acsl__5,2L);
    __gmpz_init(__gen_e_acsl_neg_3);
    __gmpz_neg(__gen_e_acsl_neg_3,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__5));
    __gen_e_acsl_eq_3 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_add),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_3));
    __e_acsl_assert(__gen_e_acsl_eq_3 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"x + 1 == -2",14);
    __gmpz_clear(__gen_e_acsl_x_3);
    __gmpz_clear(__gen_e_acsl__4);
    __gmpz_clear(__gen_e_acsl_add);
    __gmpz_clear(__gen_e_acsl__5);
    __gmpz_clear(__gen_e_acsl_neg_3);
  }
  /*@ assert x - 1 ≡ -4; */
  {
    __e_acsl_mpz_t __gen_e_acsl_x_4;
    __e_acsl_mpz_t __gen_e_acsl__6;
    __e_acsl_mpz_t __gen_e_acsl_sub;
    __e_acsl_mpz_t __gen_e_acsl__7;
    __e_acsl_mpz_t __gen_e_acsl_neg_4;
    int __gen_e_acsl_eq_4;
    __gmpz_init_set_si(__gen_e_acsl_x_4,(long)x);
    __gmpz_init_set_si(__gen_e_acsl__6,1L);
    __gmpz_init(__gen_e_acsl_sub);
    __gmpz_sub(__gen_e_acsl_sub,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_x_4),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__6));
    __gmpz_init_set_si(__gen_e_acsl__7,4L);
    __gmpz_init(__gen_e_acsl_neg_4);
    __gmpz_neg(__gen_e_acsl_neg_4,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__7));
    __gen_e_acsl_eq_4 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_sub),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_4));
    __e_acsl_assert(__gen_e_acsl_eq_4 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"x - 1 == -4",15);
    __gmpz_clear(__gen_e_acsl_x_4);
    __gmpz_clear(__gen_e_acsl__6);
    __gmpz_clear(__gen_e_acsl_sub);
    __gmpz_clear(__gen_e_acsl__7);
    __gmpz_clear(__gen_e_acsl_neg_4);
  }
  /*@ assert x * 3 ≡ -9; */
  {
    __e_acsl_mpz_t __gen_e_acsl_x_5;
    __e_acsl_mpz_t __gen_e_acsl__8;
    __e_acsl_mpz_t __gen_e_acsl_mul;
    __e_acsl_mpz_t __gen_e_acsl__9;
    __e_acsl_mpz_t __gen_e_acsl_neg_5;
    int __gen_e_acsl_eq_5;
    __gmpz_init_set_si(__gen_e_acsl_x_5,(long)x);
    __gmpz_init_set_si(__gen_e_acsl__8,3L);
    __gmpz_init(__gen_e_acsl_mul);
    __gmpz_mul(__gen_e_acsl_mul,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_x_5),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__8));
    __gmpz_init_set_si(__gen_e_acsl__9,9L);
    __gmpz_init(__gen_e_acsl_neg_5);
    __gmpz_neg(__gen_e_acsl_neg_5,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__9));
    __gen_e_acsl_eq_5 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_mul),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_5));
    __e_acsl_assert(__gen_e_acsl_eq_5 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"x * 3 == -9",16);
    __gmpz_clear(__gen_e_acsl_x_5);
    __gmpz_clear(__gen_e_acsl__8);
    __gmpz_clear(__gen_e_acsl_mul);
    __gmpz_clear(__gen_e_acsl__9);
    __gmpz_clear(__gen_e_acsl_neg_5);
  }
  /*@ assert x / 3 ≡ -1; */
  {
    __e_acsl_mpz_t __gen_e_acsl_x_6;
    __e_acsl_mpz_t __gen_e_acsl__10;
    __e_acsl_mpz_t __gen_e_acsl__11;
    int __gen_e_acsl_div_guard;
    __e_acsl_mpz_t __gen_e_acsl_div;
    __e_acsl_mpz_t __gen_e_acsl__12;
    __e_acsl_mpz_t __gen_e_acsl_neg_6;
    int __gen_e_acsl_eq_6;
    __gmpz_init_set_si(__gen_e_acsl_x_6,(long)x);
    __gmpz_init_set_si(__gen_e_acsl__10,3L);
    __gmpz_init_set_si(__gen_e_acsl__11,0L);
    __gen_e_acsl_div_guard = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__10),
                                        (__e_acsl_mpz_struct const *)(__gen_e_acsl__11));
    __gmpz_init(__gen_e_acsl_div);
    /*@ assert E_ACSL: 3 ≢ 0; */
    __e_acsl_assert(! (__gen_e_acsl_div_guard == 0),(char *)"Assertion",
                    (char *)"main",(char *)"3 == 0",17);
    __gmpz_tdiv_q(__gen_e_acsl_div,
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl_x_6),
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl__10));
    __gmpz_init_set_si(__gen_e_acsl__12,1L);
    __gmpz_init(__gen_e_acsl_neg_6);
    __gmpz_neg(__gen_e_acsl_neg_6,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__12));
    __gen_e_acsl_eq_6 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_div),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_6));
    __e_acsl_assert(__gen_e_acsl_eq_6 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"x / 3 == -1",17);
    __gmpz_clear(__gen_e_acsl_x_6);
    __gmpz_clear(__gen_e_acsl__10);
    __gmpz_clear(__gen_e_acsl__11);
    __gmpz_clear(__gen_e_acsl_div);
    __gmpz_clear(__gen_e_acsl__12);
    __gmpz_clear(__gen_e_acsl_neg_6);
  }
  /*@ assert 0xffffffffffffffffffffff / 0xffffffffffffffffffffff ≡ 1; */
  {
    __e_acsl_mpz_t __gen_e_acsl__13;
    __e_acsl_mpz_t __gen_e_acsl__14;
    int __gen_e_acsl_div_guard_2;
    __e_acsl_mpz_t __gen_e_acsl_div_2;
    __e_acsl_mpz_t __gen_e_acsl__15;
    int __gen_e_acsl_eq_7;
    __gmpz_init_set_str(__gen_e_acsl__13,"309485009821345068724781055",10);
    __gmpz_init_set_si(__gen_e_acsl__14,0L);
    __gen_e_acsl_div_guard_2 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__13),
                                          (__e_acsl_mpz_struct const *)(__gen_e_acsl__14));
    __gmpz_init(__gen_e_acsl_div_2);
    /*@ assert E_ACSL: 0xffffffffffffffffffffff ≢ 0; */
    __e_acsl_assert(! (__gen_e_acsl_div_guard_2 == 0),(char *)"Assertion",
                    (char *)"main",(char *)"0xffffffffffffffffffffff == 0",
                    18);
    __gmpz_tdiv_q(__gen_e_acsl_div_2,
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl__13),
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl__13));
    __gmpz_init_set_si(__gen_e_acsl__15,1L);
    __gen_e_acsl_eq_7 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_div_2),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl__15));
    __e_acsl_assert(__gen_e_acsl_eq_7 == 0,(char *)"Assertion",
                    (char *)"main",
                    (char *)"0xffffffffffffffffffffff / 0xffffffffffffffffffffff == 1",
                    18);
    __gmpz_clear(__gen_e_acsl__13);
    __gmpz_clear(__gen_e_acsl__14);
    __gmpz_clear(__gen_e_acsl_div_2);
    __gmpz_clear(__gen_e_acsl__15);
  }
  /*@ assert x % 2 ≡ -1; */
  {
    __e_acsl_mpz_t __gen_e_acsl_x_7;
    __e_acsl_mpz_t __gen_e_acsl__16;
    __e_acsl_mpz_t __gen_e_acsl__17;
    int __gen_e_acsl_mod_guard;
    __e_acsl_mpz_t __gen_e_acsl_mod;
    __e_acsl_mpz_t __gen_e_acsl__18;
    __e_acsl_mpz_t __gen_e_acsl_neg_7;
    int __gen_e_acsl_eq_8;
    __gmpz_init_set_si(__gen_e_acsl_x_7,(long)x);
    __gmpz_init_set_si(__gen_e_acsl__16,2L);
    __gmpz_init_set_si(__gen_e_acsl__17,0L);
    __gen_e_acsl_mod_guard = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__16),
                                        (__e_acsl_mpz_struct const *)(__gen_e_acsl__17));
    __gmpz_init(__gen_e_acsl_mod);
    /*@ assert E_ACSL: 2 ≢ 0; */
    __e_acsl_assert(! (__gen_e_acsl_mod_guard == 0),(char *)"Assertion",
                    (char *)"main",(char *)"2 == 0",19);
    __gmpz_tdiv_r(__gen_e_acsl_mod,
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl_x_7),
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl__16));
    __gmpz_init_set_si(__gen_e_acsl__18,1L);
    __gmpz_init(__gen_e_acsl_neg_7);
    __gmpz_neg(__gen_e_acsl_neg_7,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__18));
    __gen_e_acsl_eq_8 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_mod),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_7));
    __e_acsl_assert(__gen_e_acsl_eq_8 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"x % 2 == -1",19);
    __gmpz_clear(__gen_e_acsl_x_7);
    __gmpz_clear(__gen_e_acsl__16);
    __gmpz_clear(__gen_e_acsl__17);
    __gmpz_clear(__gen_e_acsl_mod);
    __gmpz_clear(__gen_e_acsl__18);
    __gmpz_clear(__gen_e_acsl_neg_7);
  }
  /*@ assert -3 % -2 ≡ -1; */
  {
    __e_acsl_mpz_t __gen_e_acsl__19;
    __e_acsl_mpz_t __gen_e_acsl_neg_8;
    __e_acsl_mpz_t __gen_e_acsl__20;
    __e_acsl_mpz_t __gen_e_acsl_neg_9;
    __e_acsl_mpz_t __gen_e_acsl__21;
    int __gen_e_acsl_mod_guard_2;
    __e_acsl_mpz_t __gen_e_acsl_mod_2;
    __e_acsl_mpz_t __gen_e_acsl__22;
    __e_acsl_mpz_t __gen_e_acsl_neg_10;
    int __gen_e_acsl_eq_9;
    __gmpz_init_set_si(__gen_e_acsl__19,3L);
    __gmpz_init(__gen_e_acsl_neg_8);
    __gmpz_neg(__gen_e_acsl_neg_8,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__19));
    __gmpz_init_set_si(__gen_e_acsl__20,2L);
    __gmpz_init(__gen_e_acsl_neg_9);
    __gmpz_neg(__gen_e_acsl_neg_9,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__20));
    __gmpz_init_set_si(__gen_e_acsl__21,0L);
    __gen_e_acsl_mod_guard_2 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_9),
                                          (__e_acsl_mpz_struct const *)(__gen_e_acsl__21));
    __gmpz_init(__gen_e_acsl_mod_2);
    /*@ assert E_ACSL: -2 ≢ 0; */
    __e_acsl_assert(! (__gen_e_acsl_mod_guard_2 == 0),(char *)"Assertion",
                    (char *)"main",(char *)"-2 == 0",20);
    __gmpz_tdiv_r(__gen_e_acsl_mod_2,
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_8),
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_9));
    __gmpz_init_set_si(__gen_e_acsl__22,1L);
    __gmpz_init(__gen_e_acsl_neg_10);
    __gmpz_neg(__gen_e_acsl_neg_10,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__22));
    __gen_e_acsl_eq_9 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_mod_2),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_10));
    __e_acsl_assert(__gen_e_acsl_eq_9 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"-3 % -2 == -1",20);
    __gmpz_clear(__gen_e_acsl__19);
    __gmpz_clear(__gen_e_acsl_neg_8);
    __gmpz_clear(__gen_e_acsl__20);
    __gmpz_clear(__gen_e_acsl_neg_9);
    __gmpz_clear(__gen_e_acsl__21);
    __gmpz_clear(__gen_e_acsl_mod_2);
    __gmpz_clear(__gen_e_acsl__22);
    __gmpz_clear(__gen_e_acsl_neg_10);
  }
  /*@ assert 3 % -2 ≡ 1; */
  {
    __e_acsl_mpz_t __gen_e_acsl__23;
    __e_acsl_mpz_t __gen_e_acsl__24;
    __e_acsl_mpz_t __gen_e_acsl_neg_11;
    __e_acsl_mpz_t __gen_e_acsl__25;
    int __gen_e_acsl_mod_guard_3;
    __e_acsl_mpz_t __gen_e_acsl_mod_3;
    __e_acsl_mpz_t __gen_e_acsl__26;
    int __gen_e_acsl_eq_10;
    __gmpz_init_set_si(__gen_e_acsl__23,3L);
    __gmpz_init_set_si(__gen_e_acsl__24,2L);
    __gmpz_init(__gen_e_acsl_neg_11);
    __gmpz_neg(__gen_e_acsl_neg_11,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__24));
    __gmpz_init_set_si(__gen_e_acsl__25,0L);
    __gen_e_acsl_mod_guard_3 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_11),
                                          (__e_acsl_mpz_struct const *)(__gen_e_acsl__25));
    __gmpz_init(__gen_e_acsl_mod_3);
    /*@ assert E_ACSL: -2 ≢ 0; */
    __e_acsl_assert(! (__gen_e_acsl_mod_guard_3 == 0),(char *)"Assertion",
                    (char *)"main",(char *)"-2 == 0",21);
    __gmpz_tdiv_r(__gen_e_acsl_mod_3,
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl__23),
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_11));
    __gmpz_init_set_si(__gen_e_acsl__26,1L);
    __gen_e_acsl_eq_10 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_mod_3),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl__26));
    __e_acsl_assert(__gen_e_acsl_eq_10 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"3 % -2 == 1",21);
    __gmpz_clear(__gen_e_acsl__23);
    __gmpz_clear(__gen_e_acsl__24);
    __gmpz_clear(__gen_e_acsl_neg_11);
    __gmpz_clear(__gen_e_acsl__25);
    __gmpz_clear(__gen_e_acsl_mod_3);
    __gmpz_clear(__gen_e_acsl__26);
  }
  /*@ assert ((x * 2 + (3 + y)) - 4) + (x - y) ≡ -10; */
  {
    __e_acsl_mpz_t __gen_e_acsl_x_8;
    __e_acsl_mpz_t __gen_e_acsl__27;
    __e_acsl_mpz_t __gen_e_acsl_mul_2;
    __e_acsl_mpz_t __gen_e_acsl__28;
    __e_acsl_mpz_t __gen_e_acsl_y;
    __e_acsl_mpz_t __gen_e_acsl_add_2;
    __e_acsl_mpz_t __gen_e_acsl_add_3;
    __e_acsl_mpz_t __gen_e_acsl__29;
    __e_acsl_mpz_t __gen_e_acsl_sub_2;
    __e_acsl_mpz_t __gen_e_acsl_sub_3;
    __e_acsl_mpz_t __gen_e_acsl_add_4;
    __e_acsl_mpz_t __gen_e_acsl__30;
    __e_acsl_mpz_t __gen_e_acsl_neg_12;
    int __gen_e_acsl_eq_11;
    __gmpz_init_set_si(__gen_e_acsl_x_8,(long)x);
    __gmpz_init_set_si(__gen_e_acsl__27,2L);
    __gmpz_init(__gen_e_acsl_mul_2);
    __gmpz_mul(__gen_e_acsl_mul_2,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_x_8),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__27));
    __gmpz_init_set_si(__gen_e_acsl__28,3L);
    __gmpz_init_set_si(__gen_e_acsl_y,(long)y);
    __gmpz_init(__gen_e_acsl_add_2);
    __gmpz_add(__gen_e_acsl_add_2,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__28),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_y));
    __gmpz_init(__gen_e_acsl_add_3);
    __gmpz_add(__gen_e_acsl_add_3,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_mul_2),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_add_2));
    __gmpz_init_set_si(__gen_e_acsl__29,4L);
    __gmpz_init(__gen_e_acsl_sub_2);
    __gmpz_sub(__gen_e_acsl_sub_2,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_add_3),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__29));
    __gmpz_init(__gen_e_acsl_sub_3);
    __gmpz_sub(__gen_e_acsl_sub_3,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_x_8),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_y));
    __gmpz_init(__gen_e_acsl_add_4);
    __gmpz_add(__gen_e_acsl_add_4,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_sub_2),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_sub_3));
    __gmpz_init_set_si(__gen_e_acsl__30,10L);
    __gmpz_init(__gen_e_acsl_neg_12);
    __gmpz_neg(__gen_e_acsl_neg_12,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__30));
    __gen_e_acsl_eq_11 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_add_4),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_12));
    __e_acsl_assert(__gen_e_acsl_eq_11 == 0,(char *)"Assertion",
                    (char *)"main",
                    (char *)"((x * 2 + (3 + y)) - 4) + (x - y) == -10",23);
    __gmpz_clear(__gen_e_acsl_x_8);
    __gmpz_clear(__gen_e_acsl__27);
    __gmpz_clear(__gen_e_acsl_mul_2);
    __gmpz_clear(__gen_e_acsl__28);
    __gmpz_clear(__gen_e_acsl_y);
    __gmpz_clear(__gen_e_acsl_add_2);
    __gmpz_clear(__gen_e_acsl_add_3);
    __gmpz_clear(__gen_e_acsl__29);
    __gmpz_clear(__gen_e_acsl_sub_2);
    __gmpz_clear(__gen_e_acsl_sub_3);
    __gmpz_clear(__gen_e_acsl_add_4);
    __gmpz_clear(__gen_e_acsl__30);
    __gmpz_clear(__gen_e_acsl_neg_12);
  }
  /*@ assert (0 ≡ 1) ≡ !(0 ≡ 0); */
  {
    __e_acsl_mpz_t __gen_e_acsl__31;
    __e_acsl_mpz_t __gen_e_acsl__32;
    int __gen_e_acsl_eq_12;
    __e_acsl_mpz_t __gen_e_acsl__33;
    int __gen_e_acsl_eq_13;
    __e_acsl_mpz_t __gen_e_acsl__34;
    int __gen_e_acsl_not;
    __e_acsl_mpz_t __gen_e_acsl__35;
    int __gen_e_acsl_eq_14;
    __gmpz_init_set_si(__gen_e_acsl__31,0L);
    __gmpz_init_set_si(__gen_e_acsl__32,1L);
    __gen_e_acsl_eq_12 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__31),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl__32));
    __gmpz_init_set_si(__gen_e_acsl__33,(long)(__gen_e_acsl_eq_12 == 0));
    __gen_e_acsl_eq_13 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__31),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl__31));
    __gmpz_init_set_si(__gen_e_acsl__34,(long)(__gen_e_acsl_eq_13 == 0));
    __gen_e_acsl_not = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__34),
                                  (__e_acsl_mpz_struct const *)(__gen_e_acsl__31));
    __gmpz_init_set_si(__gen_e_acsl__35,(long)(__gen_e_acsl_not == 0));
    __gen_e_acsl_eq_14 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__33),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl__35));
    __e_acsl_assert(__gen_e_acsl_eq_14 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"(0 == 1) == !(0 == 0)",25);
    __gmpz_clear(__gen_e_acsl__31);
    __gmpz_clear(__gen_e_acsl__32);
    __gmpz_clear(__gen_e_acsl__33);
    __gmpz_clear(__gen_e_acsl__34);
    __gmpz_clear(__gen_e_acsl__35);
  }
  /*@ assert (0 ≤ -1) ≡ (0 > 0); */
  {
    __e_acsl_mpz_t __gen_e_acsl__36;
    __e_acsl_mpz_t __gen_e_acsl__37;
    __e_acsl_mpz_t __gen_e_acsl_neg_13;
    int __gen_e_acsl_le;
    __e_acsl_mpz_t __gen_e_acsl__38;
    int __gen_e_acsl_gt;
    __e_acsl_mpz_t __gen_e_acsl__39;
    int __gen_e_acsl_eq_15;
    __gmpz_init_set_si(__gen_e_acsl__36,0L);
    __gmpz_init_set_si(__gen_e_acsl__37,1L);
    __gmpz_init(__gen_e_acsl_neg_13);
    __gmpz_neg(__gen_e_acsl_neg_13,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__37));
    __gen_e_acsl_le = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__36),
                                 (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_13));
    __gmpz_init_set_si(__gen_e_acsl__38,(long)(__gen_e_acsl_le <= 0));
    __gen_e_acsl_gt = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__36),
                                 (__e_acsl_mpz_struct const *)(__gen_e_acsl__36));
    __gmpz_init_set_si(__gen_e_acsl__39,(long)(__gen_e_acsl_gt > 0));
    __gen_e_acsl_eq_15 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__38),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl__39));
    __e_acsl_assert(__gen_e_acsl_eq_15 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"(0 <= -1) == (0 > 0)",26);
    __gmpz_clear(__gen_e_acsl__36);
    __gmpz_clear(__gen_e_acsl__37);
    __gmpz_clear(__gen_e_acsl_neg_13);
    __gmpz_clear(__gen_e_acsl__38);
    __gmpz_clear(__gen_e_acsl__39);
  }
  /*@ assert (0 ≥ -1) ≡ (0 ≤ 0); */
  {
    __e_acsl_mpz_t __gen_e_acsl__40;
    __e_acsl_mpz_t __gen_e_acsl__41;
    __e_acsl_mpz_t __gen_e_acsl_neg_14;
    int __gen_e_acsl_ge;
    __e_acsl_mpz_t __gen_e_acsl__42;
    int __gen_e_acsl_le_2;
    __e_acsl_mpz_t __gen_e_acsl__43;
    int __gen_e_acsl_eq_16;
    __gmpz_init_set_si(__gen_e_acsl__40,0L);
    __gmpz_init_set_si(__gen_e_acsl__41,1L);
    __gmpz_init(__gen_e_acsl_neg_14);
    __gmpz_neg(__gen_e_acsl_neg_14,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__41));
    __gen_e_acsl_ge = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__40),
                                 (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_14));
    __gmpz_init_set_si(__gen_e_acsl__42,(long)(__gen_e_acsl_ge >= 0));
    __gen_e_acsl_le_2 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__40),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl__40));
    __gmpz_init_set_si(__gen_e_acsl__43,(long)(__gen_e_acsl_le_2 <= 0));
    __gen_e_acsl_eq_16 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__42),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl__43));
    __e_acsl_assert(__gen_e_acsl_eq_16 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"(0 >= -1) == (0 <= 0)",27);
    __gmpz_clear(__gen_e_acsl__40);
    __gmpz_clear(__gen_e_acsl__41);
    __gmpz_clear(__gen_e_acsl_neg_14);
    __gmpz_clear(__gen_e_acsl__42);
    __gmpz_clear(__gen_e_acsl__43);
  }
  /*@ assert (0 ≢ 1) ≡ !(0 ≢ 0); */
  {
    __e_acsl_mpz_t __gen_e_acsl__44;
    __e_acsl_mpz_t __gen_e_acsl__45;
    int __gen_e_acsl_ne_2;
    __e_acsl_mpz_t __gen_e_acsl__46;
    int __gen_e_acsl_ne_3;
    __e_acsl_mpz_t __gen_e_acsl__47;
    int __gen_e_acsl_not_2;
    __e_acsl_mpz_t __gen_e_acsl__48;
    int __gen_e_acsl_eq_17;
    __gmpz_init_set_si(__gen_e_acsl__44,0L);
    __gmpz_init_set_si(__gen_e_acsl__45,1L);
    __gen_e_acsl_ne_2 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__44),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl__45));
    __gmpz_init_set_si(__gen_e_acsl__46,(long)(__gen_e_acsl_ne_2 != 0));
    __gen_e_acsl_ne_3 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__44),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl__44));
    __gmpz_init_set_si(__gen_e_acsl__47,(long)(__gen_e_acsl_ne_3 != 0));
    __gen_e_acsl_not_2 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__47),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl__44));
    __gmpz_init_set_si(__gen_e_acsl__48,(long)(__gen_e_acsl_not_2 == 0));
    __gen_e_acsl_eq_17 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__46),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl__48));
    __e_acsl_assert(__gen_e_acsl_eq_17 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"(0 != 1) == !(0 != 0)",28);
    __gmpz_clear(__gen_e_acsl__44);
    __gmpz_clear(__gen_e_acsl__45);
    __gmpz_clear(__gen_e_acsl__46);
    __gmpz_clear(__gen_e_acsl__47);
    __gmpz_clear(__gen_e_acsl__48);
  }
  /*@ assert (0 ≢ 0) ≡ !(1 ≢ 0); */
  {
    __e_acsl_mpz_t __gen_e_acsl__49;
    int __gen_e_acsl_ne_4;
    __e_acsl_mpz_t __gen_e_acsl__50;
    __e_acsl_mpz_t __gen_e_acsl__51;
    int __gen_e_acsl_ne_5;
    __e_acsl_mpz_t __gen_e_acsl__52;
    int __gen_e_acsl_not_3;
    __e_acsl_mpz_t __gen_e_acsl__53;
    int __gen_e_acsl_eq_18;
    __gmpz_init_set_si(__gen_e_acsl__49,0L);
    __gen_e_acsl_ne_4 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__49),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl__49));
    __gmpz_init_set_si(__gen_e_acsl__50,(long)(__gen_e_acsl_ne_4 != 0));
    __gmpz_init_set_si(__gen_e_acsl__51,1L);
    __gen_e_acsl_ne_5 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__51),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl__49));
    __gmpz_init_set_si(__gen_e_acsl__52,(long)(__gen_e_acsl_ne_5 != 0));
    __gen_e_acsl_not_3 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__52),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl__49));
    __gmpz_init_set_si(__gen_e_acsl__53,(long)(__gen_e_acsl_not_3 == 0));
    __gen_e_acsl_eq_18 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__50),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl__53));
    __e_acsl_assert(__gen_e_acsl_eq_18 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"(0 != 0) == !(1 != 0)",30);
    __gmpz_clear(__gen_e_acsl__49);
    __gmpz_clear(__gen_e_acsl__50);
    __gmpz_clear(__gen_e_acsl__51);
    __gmpz_clear(__gen_e_acsl__52);
    __gmpz_clear(__gen_e_acsl__53);
  }
  /*@ assert 4 / y ≡ 2; */
  {
    __e_acsl_mpz_t __gen_e_acsl__54;
    __e_acsl_mpz_t __gen_e_acsl_y_2;
    __e_acsl_mpz_t __gen_e_acsl__55;
    int __gen_e_acsl_div_guard_3;
    __e_acsl_mpz_t __gen_e_acsl_div_3;
    __e_acsl_mpz_t __gen_e_acsl__56;
    int __gen_e_acsl_eq_19;
    __gmpz_init_set_si(__gen_e_acsl__54,4L);
    __gmpz_init_set_si(__gen_e_acsl_y_2,(long)y);
    __gmpz_init_set_si(__gen_e_acsl__55,0L);
    __gen_e_acsl_div_guard_3 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_y_2),
                                          (__e_acsl_mpz_struct const *)(__gen_e_acsl__55));
    __gmpz_init(__gen_e_acsl_div_3);
    /*@ assert E_ACSL: y ≢ 0; */
    __e_acsl_assert(! (__gen_e_acsl_div_guard_3 == 0),(char *)"Assertion",
                    (char *)"main",(char *)"y == 0",31);
    __gmpz_tdiv_q(__gen_e_acsl_div_3,
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl__54),
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl_y_2));
    __gmpz_init_set_si(__gen_e_acsl__56,2L);
    __gen_e_acsl_eq_19 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_div_3),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl__56));
    __e_acsl_assert(__gen_e_acsl_eq_19 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"4 / y == 2",31);
    __gmpz_clear(__gen_e_acsl__54);
    __gmpz_clear(__gen_e_acsl_y_2);
    __gmpz_clear(__gen_e_acsl__55);
    __gmpz_clear(__gen_e_acsl_div_3);
    __gmpz_clear(__gen_e_acsl__56);
  }
  /*@ assert 1 + (z + 1) / (y - 123456789123456789) ≡ 1; */
  {
    __e_acsl_mpz_t __gen_e_acsl__57;
    __e_acsl_mpz_t __gen_e_acsl_z;
    __e_acsl_mpz_t __gen_e_acsl_add_5;
    __e_acsl_mpz_t __gen_e_acsl_y_3;
    __e_acsl_mpz_t __gen_e_acsl__58;
    __e_acsl_mpz_t __gen_e_acsl_sub_4;
    __e_acsl_mpz_t __gen_e_acsl__59;
    int __gen_e_acsl_div_guard_4;
    __e_acsl_mpz_t __gen_e_acsl_div_4;
    __e_acsl_mpz_t __gen_e_acsl_add_6;
    int __gen_e_acsl_eq_20;
    __gmpz_init_set_si(__gen_e_acsl__57,1L);
    __gmpz_init_set_si(__gen_e_acsl_z,z);
    __gmpz_init(__gen_e_acsl_add_5);
    __gmpz_add(__gen_e_acsl_add_5,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_z),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__57));
    __gmpz_init_set_si(__gen_e_acsl_y_3,(long)y);
    __gmpz_init_set_ui(__gen_e_acsl__58,123456789123456789UL);
    __gmpz_init(__gen_e_acsl_sub_4);
    __gmpz_sub(__gen_e_acsl_sub_4,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_y_3),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__58));
    __gmpz_init_set_si(__gen_e_acsl__59,0L);
    __gen_e_acsl_div_guard_4 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_sub_4),
                                          (__e_acsl_mpz_struct const *)(__gen_e_acsl__59));
    __gmpz_init(__gen_e_acsl_div_4);
    /*@ assert E_ACSL: y - 123456789123456789 ≢ 0; */
    __e_acsl_assert(! (__gen_e_acsl_div_guard_4 == 0),(char *)"Assertion",
                    (char *)"main",(char *)"y - 123456789123456789 == 0",34);
    __gmpz_tdiv_q(__gen_e_acsl_div_4,
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl_add_5),
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl_sub_4));
    __gmpz_init(__gen_e_acsl_add_6);
    __gmpz_add(__gen_e_acsl_add_6,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__57),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_div_4));
    __gen_e_acsl_eq_20 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_add_6),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl__57));
    __e_acsl_assert(__gen_e_acsl_eq_20 == 0,(char *)"Assertion",
                    (char *)"main",
                    (char *)"1 + (z + 1) / (y - 123456789123456789) == 1",34);
    __gmpz_clear(__gen_e_acsl__57);
    __gmpz_clear(__gen_e_acsl_z);
    __gmpz_clear(__gen_e_acsl_add_5);
    __gmpz_clear(__gen_e_acsl_y_3);
    __gmpz_clear(__gen_e_acsl__58);
    __gmpz_clear(__gen_e_acsl_sub_4);
    __gmpz_clear(__gen_e_acsl__59);
    __gmpz_clear(__gen_e_acsl_div_4);
    __gmpz_clear(__gen_e_acsl_add_6);
  }
  /*@ assert 1 - x ≡ -x + 1; */
  {
    __e_acsl_mpz_t __gen_e_acsl__60;
    __e_acsl_mpz_t __gen_e_acsl_x_9;
    __e_acsl_mpz_t __gen_e_acsl_sub_5;
    __e_acsl_mpz_t __gen_e_acsl_neg_15;
    __e_acsl_mpz_t __gen_e_acsl_add_7;
    int __gen_e_acsl_eq_21;
    __gmpz_init_set_si(__gen_e_acsl__60,1L);
    __gmpz_init_set_si(__gen_e_acsl_x_9,(long)x);
    __gmpz_init(__gen_e_acsl_sub_5);
    __gmpz_sub(__gen_e_acsl_sub_5,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__60),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_x_9));
    __gmpz_init(__gen_e_acsl_neg_15);
    __gmpz_neg(__gen_e_acsl_neg_15,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_x_9));
    __gmpz_init(__gen_e_acsl_add_7);
    __gmpz_add(__gen_e_acsl_add_7,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_neg_15),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__60));
    __gen_e_acsl_eq_21 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_sub_5),
                                    (__e_acsl_mpz_struct const *)(__gen_e_acsl_add_7));
    __e_acsl_assert(__gen_e_acsl_eq_21 == 0,(char *)"Assertion",
                    (char *)"main",(char *)"1 - x == -x + 1",36);
    __gmpz_clear(__gen_e_acsl__60);
    __gmpz_clear(__gen_e_acsl_x_9);
    __gmpz_clear(__gen_e_acsl_sub_5);
    __gmpz_clear(__gen_e_acsl_neg_15);
    __gmpz_clear(__gen_e_acsl_add_7);
  }
  __retres = 0;
  return __retres;
}


