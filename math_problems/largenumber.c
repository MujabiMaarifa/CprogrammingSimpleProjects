#include <stdio.h>

void large_number(int a, int b)
{
    if(a > b)
        {
            printf("The largest number is: %d\n", a) ;
        }
    else{
            printf("The largest number is: %d\n", b);
        }
}
int main(void)
{
    int x=0;
    int y =0;
    printf("Enter Two numbers: \n");
    scanf("%d %d", &x, &y);

    large_number(x, y);
    return 0;
}
