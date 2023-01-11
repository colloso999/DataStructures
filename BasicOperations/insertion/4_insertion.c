#include <stdio.h>

#define MAX 5

/**
 * in this scenario we are given a location (index)
 * of an array which a new data element (value) has to inserted
 * 
 * we seek till index-1 i.e., one location ahead of the given
 * index
*/ 

int main(void)
{
  int array[MAX] = {1, 2, 4, 5};

  int N = 4;     /*number of elements in an array*/
  int i = 0;     /*loop variable*/
  int index = 3; /*index location before which value will be incremented*/
  int value = 3; /*new data to be inserted*/

  /*print array before insertion*/
  printf("Printing array before insertion -\n");

  for (i = 0; i < N; i++)
  {
    printf("array[%d] = %d\n", i, array[i]);
  }
  /*now shift rest of the elements downwards*/
  for (i = N; i >= index + 1; i--)
  {
    array[i + 1] = array[i];
  }
  /*add new element at first position*/
  array[index + 1] = value;

  N++;
  /*Print to confirm*/
  printf("Printing array after insertion -\n");

  for (i = 0; i < N; i++)
  {
    printf("array[%d] = %d\n", i, array[i]);
  }
  return (0);
}