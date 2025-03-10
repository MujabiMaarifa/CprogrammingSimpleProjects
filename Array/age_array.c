//create a project that finds the lowest age in a one dimensional array(static) and returns it

#include <stdio.h>

int main(void)
{
    int ages[] = {21, 31, 43,12,43,52,13,41,31,33,13,44,35,37,33,42,22,20,11};
    //gettirn the elements of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    //initialize the first element of the array
    int lowestAge = ages[0];

    //loop through the ages of the array to get the lowest value
    for(int i=0; i<length; i++)
    {
        //check if the current age is lower than the current "Lowest age"
        if(lowestAge > ages[i])
        {
            //if the lowest age is found upadate the lowest age 
            lowestAge = ages[i];
        }
    }
    //display the result

    printf("The lowest age in the array is: %d\n\n", lowestAge);

    printf("....Different but same program....\n\n");
    //using the same same concept let us find the largest age 
    //initialize the largest age
    
    int largestAge = ages[0];

    //loop thhrough the ages
    for(int j=0; j<sizeof(ages)/sizeof(ages[0]); j++)
    {
        if(largestAge < ages[j]) 
        {
            largestAge = ages[j];
        }
        
    }

    //otput the result
    printf("The oldest person is aged: %d\n", largestAge);

    return 0;

}
