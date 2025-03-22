#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    char country[200];
    char password[200];
    int ID;
    int age;
}Employee;
int main(void)
{
    Employee employee1 = {0};
    //prompt user to enter the name


    printf("Enter your name: ");
    scanf("%s", employee1.name);
    printf("Enter your country of residence: ");
    scanf("%s", employee1.country);
    printf("Enter your Password: ");
    int c;
    while( (c = getchar()) != '\n') continue;
    fgets(employee1.password, sizeof(employee1.password), stdin);
    printf("Employee name is: %s\n", employee1.name);
    printf("Employee town of residence is: %s\n", employee1.country);
    printf("Employee password is: %s\n", employee1.password);
    return EXIT_SUCCESS;
}
