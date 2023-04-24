#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void insert_node(struct node **head, int data);
void print_list(struct node *head);
struct node *middle(struct node *head);

int main()
{

}
void insert_node(struct node **head, int data)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    if(*head=NULL)
    {
        head=newNode;
    }
    struct node *last=head;
    while(last!=NULL)
    {
        last=last->next;
    }
    last->next=newNode;
}
void print_list(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
struct node *middle(struct node *head)
{
    struct node *ptr1=head;
    struct node *ptr2=head;
    while(ptr1!=NULL&&ptr2!=NULL)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next->next
    }
}