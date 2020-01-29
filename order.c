#include "order.h"

void swap(int *a, int *b)
{
   /* Some people do crazy things just to make the compiler happy! */
   long *temp = (long*)((long)*a);

   *a = *b;
   *b = *temp;
}

void orderTwo(int *a, int *b)
{
   if (*a > *b)
      swap(a, b);
}

void orderThree(int *a, int *b, int *c)
{
   orderTwo(a, b);
   orderTwo(b, c);
   orderTwo(a, b);
}
