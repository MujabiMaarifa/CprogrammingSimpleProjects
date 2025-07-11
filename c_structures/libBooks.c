/*declare structures for the following and initialize variables of the same data type
1. a library book
2.University staff
*/
/*Structures are compound data types used to store multiple values of different data types using
and are referenced using a common identifier */
#include <stdio.h>

//structure for Book
typedef struct{
    char Title[50];
    char Author[30];
    int ISBN; //just the number ID of a book
    char publication_date[10];
}Book;

//structure for staff
typedef struct{
    char name[20];
    int staff_Id;
    int Age;
    char role[40];
}Staff;

//having our main function

int main(void)
{

    //initializing books from the structures declared above
    Book Book1 =
    {
        "God See's The Truth But Waits", "David Pie", 12345, "12/06/1991"
    };

    Book Book2 =
    {
        "Pie Maarifa The Legendary", "Maarifa Studies", 987654, "01/04/1980"
    };

    printf("\n");

    printf("Book details in our library.. \n\n");
    printf("\n");

    // Outputting the details of Book1 to the user
    printf("Book Title: %s\n", Book1.Title);
    printf("Author: %s\n", Book1.Author);
    printf("ISBN: %d\n", Book1.ISBN);
    printf("Publication Date: %s\n", Book1.publication_date);

    printf("\n");
    // Outputting the details of Book1 to the user
    printf("Book Title: %s\n", Book2.Title);
    printf("Author: %s\n", Book2.Author);
    printf("ISBN: %d\n", Book2.ISBN);
    printf("Publication Date: %s\n", Book2.publication_date);

    printf("\n\n");
    printf("..........start of university staff............ :\n");

    //initializing the staff of the university from the Staff struct declared above
    Staff staff_member1 =
    {
        "Maarifa", 201, 19, "Cook"
    };

    Staff staff_member2 =
    {
        "Jitu", 202, 23, "Assistant Graduate"
    };

    //output the staff
    printf("Staff's Name: %s\n", staff_member1.name);
    printf("Staff's Id: %d\n", staff_member1.staff_Id);
    printf("Staff's Age: %d\n", staff_member1.Age);
    printf("Staff's Name: %s\n", staff_member1.role);

    printf("\n\n");
    printf("Happy coding!");
    return 0;
}
