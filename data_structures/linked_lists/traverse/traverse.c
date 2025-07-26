//linked list traverse simmply refers to viting of every node one at a time in a linked list and performing operations such as printing them
#include <stdio.h>
#include <stdlib.h>

//structure node
struct Node{
    int data;
    struct Node* next;
};
//create new node function
struct Node* create_node(int new_data)
{
    struct Node *newnode = malloc(sizeof(struct Node));
    newnode->data = new_data;
    newnode->next= NULL;
    return newnode;
}

//traverse throught the linked list
void traverse_linked_list(struct Node *head)
{
    while(head!= NULL)
    {
        printf("%d ", head->data);
        //move to the next head data
        head = head->next;
    }
    printf("\n");
}
int main(void)
{
    //create a hard coded linked list
    struct Node* head = create_node(10);
    head->next = create_node(20);
    head->next->next = create_node(30);
    head->next->next->next = create_node(40);

    traverse_linked_list(head);
    return 0;
}