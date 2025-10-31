// Linkedlist Implementation in C

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*link;
};

struct node *head=NULL;
void insertf();

void create();
void display();
void insertl();
void deletednext();
void deletelast();
void insertany();
void deleteany();

int main(void){
    create();
    display();
    insertf();
    display();
    insertl();
    display();
    deletednext();
    display();
    deletelast();
    display();
    insertany();
    display();
    deleteany();
    display();
    return 0;
}


void create(){
    struct node *temp,*t;
    int n;
    printf("Enter Value");
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&temp->data);
        temp->link=NULL;

        if (head==NULL){
            head=temp;
            t=temp;
            
        }
        else{
            t->link=temp;
            t=temp;
        }
    }
}

void display(){
    struct node*t;
    t=head;
    while(t!=NULL){
        printf("%d->",t->data);
        t=t->link;
    }
    printf("NULL");
}
    
void insertf(){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->link=NULL;
    temp->link=head;
    head=temp;
}

void insertl(){
    struct node*temp,*t;
    temp=head;
    t=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&t->data);
    t->link=NULL;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=t;
}


void deletednext(){
   struct node *p,*temp;
   temp=head;
   while(temp->link!=NULL){
          p=temp;
          temp=temp->link;
       }
       p->link=NULL;
       free(temp);
   }

void deletelast(){
    struct node *p,*temp;
    temp=head;
    while(temp->link!=NULL){
           p=temp;
           temp=temp->link;
        }
        p->link=NULL;
        free(temp);
    }

void insertany(){
    struct node *temp,*prev,*t;
    int i,pos;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->link=NULL;
    printf("\nEnter position");
    scanf("%d",&pos);
    t=head;

    for(i=0;i<pos;i++){
        prev=t;
        t=t->link;
    }
    prev->link=temp;
    temp->link=t;
}

void deleteany(){
    struct node *temp,*prev,*cur,*t;
    int i,pos;
    printf("\nEnter position");
    scanf("%d",&pos);
    t=head;

    for(i=1;i<pos;i++){
        prev=t;
        t=t->link;
        cur=t;
    }
    prev->link=cur->link;
    free(t);
}