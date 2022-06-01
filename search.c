#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}
node;

node *head = NULL;

void printList(){
    node *last_node = head;
    while(last_node != NULL)
        {
            printf("%i", last_node->data);
            last_node = last_node->next;
        }
}
void insert(int value){
    node *temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = head;
    head = temp;
}
int search( int x)
{
    int count = 0;
    node* current = head;
    while (current != NULL)
    {
        count++;
        if (current->data == x)
            return count;
        current = current->next;
    }
}
void main(void){
    insert(7);
    insert(5);
    insert(8);
    insert(9);
    printList();
    int pos = search(5);
    printf("\nthe position is: %i", pos);
}