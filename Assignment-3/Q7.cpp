#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr; 
    int n,i,s=0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("Enter element %02d: ", i + 1);
        scanf("%d", (ptr + i));
    }
    for (i = 0; i < n; i++) {
        s += *(ptr + i);
    }
    printf("Sum of array elements is: %d\n", s);
    free(ptr); 
    return 0;
}
