//traversing an array

#include <stdio.h>

int main(void)
{
    int scores[1000];

    //count and initialize each element of score
    for(int i=0; i<1000; i++)
    {
        scores[i]=i;
    }

    //loop to display result
    for(int i=0; i<1000; i++)
    {
        printf("User %i is the individual %i\n", i+1, scores[i]);
    }
    
    return 0;
}