#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert_node(struct node **head, int value);
void print_list(struct node *head);

int main()
{
    int size, n;
    struct node *head=NULL;
    printf("Enter the size of linked list: \n");
    scanf("%d", &size);
    printf("Enter the elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &n);
        insert_node(&head, n);
    }
    printf("The elements inserted in linked list: ");
    print_list(head);
    return 0;

}
void insert_node(struct node **head, int value)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=*head;
    *head=newNode;
}
void print_list(struct node *head)
{
    struct node *temp=head;
    while(temp!=0)
    {
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("NULL");
    printf("\n");
}