#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert_node(struct node **head, int data);
void print_list(struct node *head);

int main()
{
    struct node *head=NULL;
    int size, n;
    printf("Enter the size of the list: \n");
    scanf("%d", &n);
    for(int i=0;i<size;i++)
    {
        scanf("%d", &n);
        insert_node(&head, n);
    }
    print_list(head);
    return 0;
}
void insert_node(struct node **head, int data)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    if(*head=NULL)
    {
        *head=newNode;
        return;
    }
    struct node *temp=*head;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    temp=newNode;
}
void print_list(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d", temp->data);
        temp=temp->next;
    }
}