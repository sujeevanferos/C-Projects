/* this code is for practice malloc and get familier with it, 
 here, We do not know the size of array. So I am using the malloc function tospecify the size of the array with the number of the size of inputs*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *arr,n;
  
  scanf("%d", &n);


  arr = (int*) malloc(sizeof(int));
  if (arr == NULL)
  {
    printf("Memory Allocation Failed\n");
    return 1;
  }
  //to get n number of inputs
  printf("%d number of Integers can be accepted: \n", n);
  for(int i = 0; i < n; i++)
  {
    printf("Element Id %d: ", i+1);
    scanf("%d", &arr[i]);
  }

  //print the array that stores the inputs
  for(int i = 0; i < n; i++)
  {
    printf("%d", arr[i]);
    if(i < n-1)
      printf(",");

  }
  printf("\n");
  free(arr);

  return 0;
}

