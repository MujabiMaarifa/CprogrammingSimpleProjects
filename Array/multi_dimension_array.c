/*An array is just a matrix. When we want to store elements or data in a tabular form we can use multi dimensional arrays
syntax starts with rows then columns.as In our case we initialize an array called grid with 10 rows and 100columns
*/

#include <stdio.h>
int main(void)
{

    int grid[10][100];

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<100; j++)
        {
            grid[i][j] = 1;
        }

        for(int j=0; j<100; j++)
        {
            printf("%i.The value of %i is %i\n", i, j, grid[i][j]);
        }
    }
    return 0;
}