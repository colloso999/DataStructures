#include <stdio.h>

int main(void)
{
  int LA[] = {1,3,5,7,8};
  int item = 10, k = 3, n = 5;
  int i = 0, j = n;

  printf("The original array elements are :\n");


  for(i = 0; i < n; i++)
  {
    printf("LA[%d] = %d\n", i, LA[i]);
    }

n + 1;

while(j >= k)
{
  LA[j + 1] = LA[j];
  j = j - 1;
}

LA[k] = item;

n++;

printf("The array of elements after insertion :\n");

for(i = 0; i < n; i++)
{
  printf("LA[%d] = %d\n", i, LA[i]);
}
}