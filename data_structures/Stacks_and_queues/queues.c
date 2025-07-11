/*Queue-> follow the priciple of first in first out - FIFO
example.. Are used in Shared resources such as printers, CPU scheduling
simple daily life example... People in the bank are kept in a queue waiting to be served

NB: A queue has two parts the head/front and tail/rear
Basic opeartions of the queue
    enqueue-> adds an element at the end of the queue(at the rear side)
    dequeue-> removes an element from the head of an array or a queue
    peek-> returns the first element it the queue
    isEmpty-> checks if the queue is empty preventing underflows
    size-> returns the number of elements in the queue
    display-> displays the elements of the queue

*/

// implementing the queue operations using arrays ->arrays are static and they have fixed sizes
#include <stdio.h>
#define N 5
//global variables we will use in our case to
int queue[N];
int front= -1;
int rear= -1;

//enqueue operation in an array
void enqueue(int x)
{
    //for the array we can add if it empty and not when full
    //check if full
    if(rear == N-1) printf("Overflow. !Cannot enqueue a value");
    //check if no value in the queue then add
    else if(front == -1 &&  rear == -1) {
        front=rear=0;
        queue[rear] = x;
    }
    //some values are in the queue but not full then add to the rear side
    else
    {
        rear++;
        queue[rear] = x;
    }
}
//dequeue implementation
void dequeue(void)
{
    //check if the queue is empty display undeflow
    if(front == -1 && rear == -1) printf("\nUnderflow. \nEmpty array");
    //check if head and rear point to the first element in the array remove the element
    else if(front == rear) front=rear=-1;
    else
    {
        printf("\nThe dequeued value is: %d\n", queue[front]);
        front++;
    }
}
//peek implementation --> we print the first element int the array if it exists
void peek(void)
{
    if(front == -1 && rear ==-1) printf("\nNULL -> The array is empty\n");
    else 
    {
        printf("\nThe peek is: %d\n", queue[front]);
    }
}
//display the array elements
void print_arr(int queue[N])
{
    int i;
    printf("\nThe array elements are: \n");
    //the elements indexes compared is front and tail
    for(i =front; i < rear+1; i++)
    {
        printf("[ %d ]\n", queue[i]);
    }
}
//main program
int main(void)
{
    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);
    enqueue(10);
    print_arr(queue);
    dequeue();
    print_arr(queue);
    dequeue();
    dequeue();
    peek();
    print_arr(queue);
    return 0;
}