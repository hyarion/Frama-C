/* run.config
   COMMENT: function call
   STDOPT: +"-no-val-alloc-returns-null"
*/

#include <stdlib.h>

//extern void *malloc(unsigned int size);

/*@ ensures \valid(\result); */
int *f(int *x, int *y) {
  *y = 1;
  return x;
}

int main() {
  int x = 0, *p, *q = malloc(sizeof(int)), *r = malloc(sizeof(int));
  p = f(&x, q);
  q = f(&x, r);
  return 0;
}
