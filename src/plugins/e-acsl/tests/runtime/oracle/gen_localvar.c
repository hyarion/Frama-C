/* Generated by Frama-C */
struct list {
   int element ;
   struct list *next ;
};
struct list *add(struct list *l, int i)
{
  struct list *new;
  __e_acsl_store_block((void *)(& new),8UL);
  __e_acsl_store_block((void *)(& l),8UL);
  __e_acsl_full_init((void *)(& new));
  new = (struct list *)malloc(sizeof(struct list));
  /*@ assert \valid(new); */
  {
    int __gen_e_acsl_initialized;
    int __gen_e_acsl_and;
    __gen_e_acsl_initialized = __e_acsl_initialized((void *)(& new),
                                                    sizeof(struct list *));
    if (__gen_e_acsl_initialized) {
      int __gen_e_acsl_valid;
      __gen_e_acsl_valid = __e_acsl_valid((void *)new,sizeof(struct list));
      __gen_e_acsl_and = __gen_e_acsl_valid;
    }
    else __gen_e_acsl_and = 0;
    __e_acsl_assert(__gen_e_acsl_and,(char *)"Assertion",(char *)"add",
                    (char *)"\\valid(new)",18);
  }
  __e_acsl_initialize((void *)(& new->element),sizeof(int));
  new->element = i;
  __e_acsl_initialize((void *)(& new->next),sizeof(struct list *));
  new->next = l;
  __e_acsl_delete_block((void *)(& l));
  __e_acsl_delete_block((void *)(& new));
  return new;
}

int main(void)
{
  int __retres;
  struct list *l;
  __e_acsl_memory_init((int *)0,(char ***)0,8UL);
  __e_acsl_store_block((void *)(& l),8UL);
  __e_acsl_full_init((void *)(& l));
  l = (struct list *)0;
  __e_acsl_full_init((void *)(& l));
  l = add(l,4);
  __e_acsl_full_init((void *)(& l));
  l = add(l,7);
  __retres = 0;
  __e_acsl_delete_block((void *)(& l));
  __e_acsl_memory_clean();
  return __retres;
}


