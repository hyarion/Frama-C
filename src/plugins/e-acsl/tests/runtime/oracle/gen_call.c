/* Generated by Frama-C */
/*@ ensures \valid(\result); */
int *__gen_e_acsl_f(int *x, int *y);

/*@ ensures \valid(\result); */
int *f(int *x, int *y)
{
  __e_acsl_store_block((void *)(& x),8UL);
  __e_acsl_store_block((void *)(& y),8UL);
  __e_acsl_initialize((void *)y,sizeof(int));
  *y = 1;
  __e_acsl_delete_block((void *)(& x));
  __e_acsl_delete_block((void *)(& y));
  return x;
}

int main(void)
{
  int __retres;
  int x;
  int *p;
  int *q;
  int *r;
  __e_acsl_memory_init((int *)0,(char ***)0,8UL);
  __e_acsl_store_block((void *)(& q),8UL);
  __e_acsl_store_block((void *)(& p),8UL);
  __e_acsl_store_block((void *)(& x),4UL);
  __e_acsl_full_init((void *)(& x));
  x = 0;
  __e_acsl_full_init((void *)(& q));
  q = (int *)malloc(sizeof(int));
  r = (int *)malloc(sizeof(int));
  __e_acsl_full_init((void *)(& p));
  p = __gen_e_acsl_f(& x,q);
  __e_acsl_full_init((void *)(& q));
  q = __gen_e_acsl_f(& x,r);
  __retres = 0;
  __e_acsl_delete_block((void *)(& q));
  __e_acsl_delete_block((void *)(& p));
  __e_acsl_delete_block((void *)(& x));
  __e_acsl_memory_clean();
  return __retres;
}

/*@ ensures \valid(\result); */
int *__gen_e_acsl_f(int *x, int *y)
{
  int *__retres;
  __e_acsl_store_block((void *)(& __retres),8UL);
  __e_acsl_store_block((void *)(& x),8UL);
  __e_acsl_store_block((void *)(& y),8UL);
  __retres = f(x,y);
  {
    int __gen_e_acsl_valid;
    __gen_e_acsl_valid = __e_acsl_valid((void *)__retres,sizeof(int));
    __e_acsl_assert(__gen_e_acsl_valid,(char *)"Postcondition",(char *)"f",
                    (char *)"\\valid(\\result)",10);
    __e_acsl_delete_block((void *)(& x));
    __e_acsl_delete_block((void *)(& y));
    __e_acsl_delete_block((void *)(& __retres));
    return __retres;
  }
}


