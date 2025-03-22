/*When being recruited an employee is expected to provide details of his name, country of residence,
marital status, Id number, pin number, gender and previous work experience
Define a structure called employee and show how this can be implemented to different employees */
#include <stdio.h>

typedef struct {
    char name[50];
    char country[30];
    char marital_status[20];
    int id_number;
    int pin_number;
    char gender[6];
    char previous_work_experience[100];
}Employee;
int main(void)
{
    Employee Employee1 = {"Christine", "India", "Single", 38224289, 2020, "Female", "Forex Trader"};
    printf("The Employees in our institution are as listed below: \n");
    printf("Name : %s\n", Employee1.name);
    printf("Country : %s\n", Employee1.country);
    printf("MaritalStatus: %s\n", Employee1.marital_status);
    printf("Id_Number: %d\n", Employee1.id_number);
    printf("Pin Number: %d\n", Employee1.pin_number);
    printf("Gender (Male/Female) : %s\n", Employee1.gender);
    printf("Previous work experience: %s\n", Employee1.previous_work_experience);
    return 0;
}
