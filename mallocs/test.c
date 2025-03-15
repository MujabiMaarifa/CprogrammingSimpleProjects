/*
Mallocs is the short name for the "memory allocation " and is used to dynamically allocate a single large
block of contiguous memory according to the size specified and on success it returns a pointer or else null
syntax: (void*)malloc(size_t size)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL)
        {
            printf("Memory not available!!");
            exit(1);
        }
    //taking inputs from the user
    for(int i=0; i < n; i++)
        {
            printf("Enter an Integer: ");
            scanf("%d", ptr + i);
        }
    //printing all the integers on the screen
    for(int i=0; i < n; i++)
        {
            printf("%d\n", *(ptr + i)); //dereferencing the stored integers
        }
    printf("Now you have learnt mallocs keep on pushing!! \n");
    return 0;
}
