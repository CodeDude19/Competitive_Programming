#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node * next;
};
struct node * head1 = NULL,* head2 = NULL, * head3 = NULL,*head4 = NULL , *head5 = NULL ;

void create1(int n)
{
  struct node * temp = NULL;
  struct node *p =NULL;
  temp = (struct node *) malloc(sizeof( struct node));
  temp->data=n;
  temp->next=NULL;
  if(head1==NULL)
  {
    head1 = temp;
  }
  else
  {
    p = head1;
    while(p->next!=NULL)
    {
      p = p->next;
    }
    p->next = temp;
  }


}
void create2(int n)
{
  struct node * temp = NULL;
  struct node *p =NULL;
  temp = (struct node *) malloc(sizeof( struct node));
  temp->data=n;
  temp->next=NULL;
  if(head2==NULL)
  {
    head2 = temp;
  }
  else
  {
    p = head2;
    while(p->next!=NULL)
    {
      p = p->next;
    }
    p->next = temp;
  }
}
void create3(int n)
{
  struct node * temp = NULL;
  struct node *p =NULL;
  temp = (struct node *) malloc(sizeof( struct node));
  temp->data=n;
  temp->next=NULL;
  if(head3==NULL)
  {
    head3 = temp;
  }
  else
  {
    p = head3;
    while(p->next!=NULL)
    {
      p = p->next;
    }
    p->next = temp;
  }
}
int display(struct node * head)
{
  struct node *p;
  p = head;
  printf("(");
  while(p!=NULL)
  {
    printf( "%d,",p->data);
    p=p->next;
  }
  printf(")");
}
void unioning(int n1, int n2)
{
  struct node * set1 = head1;
  struct node * set2 = head2;
  while(set1!=NULL)
  {
    struct node * temp = NULL;
    struct node *p =NULL;
    temp = (struct node *) malloc(sizeof( struct node));
    temp->data=set1->data;
    temp->next=NULL;
    if(head3==NULL)
    {
      head3 = temp;
    }
    else
    {
      p = head3;
      while(p->next!=NULL)
      {
        p = p->next;
      }
      p->next = temp;
    }
    set1 = set1->next;
  } // added all set1 elements to set3 till here!
  int flag;
  struct node * set22 = head2;
  for(int i =0; i<n2; i++,set22 = set22->next)
  {
    flag=0;
    struct node * set33 = head3;
    while(set33!=NULL)
    {
      if(set22->data == set33->data){ flag = 1;}
      set33=set33->next;
    }
    if(flag==0){
      struct node * temp = NULL;
      struct node *p =NULL;
      temp = (struct node *) malloc(sizeof( struct node));
      temp->data=set22->data;
      temp->next=NULL;
        p = head3;
        while(p->next!=NULL)
        {
          p = p->next;
        }
        p->next = temp;
    }

  } // added all non-repeating set2 elements to set3 till here!
}
void intersection( )
{
  int flag;
  struct node * set2 = head2;
  while(set2!=NULL)
  {
    flag=0;
    struct node * set1 = head1;
    while(set1!=NULL)
    {
      if(set2->data == set1->data){ flag = 1;}
      set1=set1->next;
    }
    if(flag==1){
      struct node * temp = NULL;
      struct node *p =NULL;
      temp = (struct node *) malloc(sizeof( struct node));
      temp->data=set2->data;
      temp->next=NULL;
        p = head3;
        while(p->next!=NULL)
        {
          p = p->next;
        }
        p->next = temp;
    }
    set2 = set2->next;
  }
}

void minus(){}
int main()
{
    int data,n1,n2,choice;
    printf("Enter number of elements for set1:");
    scanf("%d",&n1);
    printf("Enter elements into set1:");
    for(int i=0;i<n1;i++)
    {
      scanf("%d",&data);
      create1(data);
    }
    printf("Enter number of elements for set2:");
    scanf("%d",&n2);
    printf("Enter elements into set2:");
    for(int i=0;i<n2;i++)
    {
      scanf("%d",&data);
      create2(data);
    }
    printf("\n1st set:\t");
    display(head1);
    printf("\n2nd set:\t");
    display(head2);
    printf("\n\n\n");
    printf("display2:");

    intersection();
    printf("display2:");
    display(head3);
    printf("display2:");
    display(head3);
    // while(1)
    // {
    //   printf("\n---Menu---\n");
    //   printf("1.Union\n2.Intersection\n3.Differnce\n4.Exit\n");
    //   printf("Choice:");
    //   scanf("%d",&choice);
    //   switch (choice) {
    //     case 1:{unioning(n1,n2);display(head3);break;}
    //     case 2:{intersection();display(head3);break;}
    //     case 3:{minus();break;}
    //     case 4:exit(0);
    //   }
    // }
    return 0;

}
