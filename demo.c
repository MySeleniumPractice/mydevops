/* Bubble sort code */
 
#include <stdio.h>
 
int main()
{
  int array[100], n, c, d, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);
 
  return 0;
}

#include <stdio.h>
 
int main()
{
  int n, c, k, space = 1;
 
  printf("Enter number of rows\n");
  scanf("%d", &n);
 
  space = n - 1;
 
  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");
 
    space--;
 
    for (c = 1; c <= 2*k-1; c++)
      printf("*");
 
    printf("\n");
  }
 
  space = 1;
 
  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");
 
    space++;
 
    for (c = 1 ; c <= 2*(n-k)-1; c++)
      printf("*");
 
    printf("\n");
  }
 
  return 0;
}
