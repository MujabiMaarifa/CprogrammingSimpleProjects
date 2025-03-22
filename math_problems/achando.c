#include <stdio.h>

int main() {
    int salary1, salary2;
    int taxed1, taxed2;
    int netIncome = 0;
    int fees, food, entertainment;

    //ask for achando's salary
    printf("Enter achando's salary:");
    scanf("%d", &salary1);

    //ask for Mrs Achando salary
    printf("\nEnter Mrs Achando's salary:");
    scanf("%d",&salary2);


    //tax docter achando
    taxed1 = salary1 * 0.15;

    taxed2 = salary2 * 0.10;

    //calculate net income
    netIncome = taxed1 + taxed2;
    printf("The Achando's net income is: %d\n", netIncome);

    //find fees
    fees = netIncome * 0.5;
    //find food
    food = netIncome * 0.25;
    //find entertainment
    entertainment = netIncome * 0.25;


    printf("\nDr Achando Used their net salary as follows: \n");

    printf("Fees is: %d\n", fees);
    printf("\n");
    printf("Food : %d\n", food);
    printf("\n");
    printf("Entertainment: %d\n", entertainment);
    return 0;
}