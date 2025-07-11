#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 10

//stacks- implemented by the algotithm of last in first out
// stacks is used for something like undo and redo actions 
// stacks is used for parsing expressions
// another major use case of stacks is normally used in web browsing
//this is to display your history and also on the back button of the browser

///Stack operations -> 1. PUSH- add new data or item
///                 -> 2. POP- remove data or item
///                 ->3. TOP- get the top item
///                 ->4. IS EMPTY- check if the stack is empty
///                 ->5. DISPLAY

//Queue - implemented using first in first out
//Queues -FIFO - first i first out 
//Queues can be used in queuing systems-> maybe what we have in banks, or hospitals or lunch queue.
//Queues can be used in job scheduling
//Queues can be used in network protocols

///QUEUE operations -> 1. ENQUEUE - adding data to the queue
///                  ->2. DEQUEUE - removing data from the queue .Retrieving the first element that we have on the queue

void displayStackMenu();
void pushOperation();
void popOperation();
void displayOperation();
int userChoice;

//we are using an array to implement our stack

int stack[MAXSIZE];
//we need to keep track of the top element index
int top = -1;

int main(void)
{
    printf("Let's learn about stacks and queues!\n");
    while(true)
    {
        printf("\nSTACK IMPLEMENTATION: \n");
        displayStackMenu();

        // scan for the user choice from the menu
        printf("Select one of the above choices: ");
        scanf("%d", &userChoice);

        ///you can either use a switch statement or else statement
        switch (userChoice)
        {
            case 1:
                pushOperation();
                break;
            case 2:
                popOperation();
                break;
            case 3:
                displayOperation();
                break;
            case 4:
                printf("Thank you for using our program\n");
                exit(0);
            default:
                printf("Invalid choice. Please choose a valid option.\n");
        }
    }
    
    return 0;
}

void displayStackMenu()
{
    printf("STACK MENU:\n");
    printf("-----------------------------------\n");
    printf("|\t1. PUSH OPERATION\t\t|\n");
    printf("|\t2. POP OPERATION\t\t|\n");
    printf("|\t3. DISPLAY OPERATION\t\t|\n");
    printf("|\t4. EXIT PROGRAM\t\t\t|\n");
    printf("-----------------------------------\n");
}

void pushOperation()
{
    int num;
    //ensure that the stack is not overflown
    if(top == MAXSIZE -1)
    {
        printf("Your stack is already full !!!\n");
        return;
    }

    printf("Enter the element that you want to push : ");
    scanf("%d", &num);
    top++;
    stack[top] = num;
    
}

void popOperation()
{
    int numberToPop;
    if(top == -1)
    {
        printf("Oops!! Sorry the stack is empty!!\n");
        return;
    }

    numberToPop = stack[top];
    top--;
}

void displayOperation()
{
    //stack should not be empty
    if(top == -1)
    {
        printf("Oops!! Sorry the stack is empty!!\n");
        return;
    }

    //now display our stack elements
    printf("STACK ELEMENTS ARE:\n");
    int i;
    //start rom the top most elements
    for(i = top; i >= 0; i--)
    {
        printf("Stack INDEX[%d]: CONTAINS --> %d\n", i, stack[i]);
    }

}