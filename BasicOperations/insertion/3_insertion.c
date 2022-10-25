#include <stdio.h>

#define MAX 5

int main(void)
{
  int arr[MAX] = {1, 2, 4, 5};

  int i = 0;     /*loop variable*/
  int N = 4;     /*number of elements in array*/
  int index = 1; /*index location after which value will be inserted*/
  int value = 3; /*new data element to be inserted*/

  printf("Print array before insertion -\n");

  for (i = 0; i < N; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }

  /*now shift rest of the elements downwards*/
  for (i = N; i >= index + 1; i--)
  {
    arr[i + 1] = arr[i];
  }

  /*add new element at first position*/
  arr[1 + index] = value;

  /*increase N to reflect number of elements*/
  N++;

  /*print to confirm*/
  printf("Print array after insertion -\n");

  for (i = 0; i < N; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }

  return (0);
}