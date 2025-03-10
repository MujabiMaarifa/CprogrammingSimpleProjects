/* an array of 10 integers and a second array of similar size and datatype. 
The program should use a for loop to populate the second array should use a for loop 
to populate the second array with squares of the values of the first one


*/


# include <stdio.h>

int main() {
    int arr1[10];
    
    //ask for the array values from the user
    printf("Enter The Ten Integer Values of your array: \n");
    for(int i=0; i<10; i++) {
        scanf("%d", &arr1[i]);
        printf("\n");
    }

    //array two of same datatype and same size
    int arr2[10];
    printf("The square of the First array values is: ");
    printf("{");
    for(int i=0; i< 10; i++) {
        arr2[i] = arr1[i] * arr1[i];
         printf("%d  ", arr2[i]);

    }
    printf("}\n");
    
    //exit our program
    return 0;
}