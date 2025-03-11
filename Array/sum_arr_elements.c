// write a program that dynamically initializes an array and sums, average the array elements

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n; //memory size
    int sum=0; //is set initially to zero for a starting point recall an array starts from 0 elements(index)
    float average;
    //prompt user to enter the size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    //malloc assigns the memory space in bytes
    int *arr = (int *)malloc(n * sizeof(int));

    //prompt user to enter the array elements
    printf("Enter your array elements: ");
    for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
    //calculate the sum of array elements
    for(int i=0; i<n; i++)
        {
            sum +=arr[i];

        }
   average = (float)sum/n;
   printf("The sum of the array elements is: %d\n",sum);
   printf("The average of the array elements calculated from sum is: %.2f\n", average);
   free(arr);
   return 0;
}
