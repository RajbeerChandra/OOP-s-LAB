#include <stdio.h>
#include <stdlib.h>
//To reverse the elements of Double linked list.
struct node
{
    struct node *leftlink;
    int data;
    struct node *rightlink;
}*head,*y,*ptr,*move,*temp;
void createlist(int n)
{
    if(n<=0)
        printf("List size must be greater than zero");
    else
    {
        int b;
        printf("Enter value of node 1: ");
        scanf("%d",&b);
        head = (struct node *) malloc (sizeof (struct node));
        head->leftlink=NULL;
        head->data=b;
        head->rightlink=NULL;
        y=head;
        for(int i=2;i<=n;i++)
        {
            printf("Enter value of  node %d: ",i);
            scanf("%d",&b);
            ptr = (struct node *) malloc (sizeof (struct node));
            ptr->data=b;
            y->rightlink=ptr;
            ptr->leftlink=y;
            ptr->rightlink=NULL;
            y=y->rightlink;
        }
    }
}
void reverselist()
{
    y=head;
    while((y->rightlink)!=NULL)
    {
        temp=y->leftlink;
        y->leftlink=y->rightlink;
        y->rightlink=temp;
        y=y->leftlink;             //leftlink for traversing bcz we already swapped.  
    }
    temp=y->leftlink;
    y->leftlink=y->rightlink;
    y->rightlink=temp;
    head=y;
}
void displaylist()
{
    y=head;
    printf("NULL <===> ");
    while(y!=NULL)
    {
        printf("%d <===> ", y->data);  
        y = y->rightlink;
    }
    printf(" NULL");
}
int main()
{
    int n;
    printf("Enter total no. of nodes to be inserted: ");
    scanf("%d",&n);
    createlist(n);
    printf("Double Linked list before reversing : ");
    displaylist();
    printf("\nDouble Linked list after reversing : ");
    reverselist();
    displaylist();
    return 0;
}