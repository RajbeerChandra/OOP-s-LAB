#include <stdio.h>
void swap(int*, int*);
void swap(int *a, int *b)
{
   int temp;
   temp = *b;
   *b = *a;
   *a = temp;   
}
int main()
{
   int x, y;
   printf("Enter value of x and y\n");
   scanf("%d%d",&x,&y);
   swap(&x, &y); 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
   return 0;
}