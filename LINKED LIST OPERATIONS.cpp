/*#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node*link;
	} *head=NULL;
	
	void create ();
	void display();
	void linsert();
	void finsert();
	void insertany();
	void deletelast();
	void deleteany();
	void deletef();
int main(){
	create();
	display();
	finsert();
	display();
	linsert();
	display();
	deletef();
	display;
	deletelast();
	display();
	insertany();
	display();
	deleteany();
	display();
	return 0;
}

void create (){
	struct node *temp,*t;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter node value ");
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
	struct node *t;
	t=head;
	while(t!=NULL){
		printf("%d-->",t->data);
		t=t->link;
	}
	printf("NULL");
}
void finsert(){
	struct node *temp;
	temp=(struct node *) malloc(sizeof(struct node));
	scanf("%d-->",&temp->data);
	temp->link=NULL;
	temp->link=head;
	head=temp;
	
}

void linsert(){
	struct node *t,*temp;
	t=(struct node *)malloc(sizeof (struct node));
	scanf("%d-->",&t->data);
	t->link=NULL;
	temp=head;
	while (temp->link!=NULL){
		temp=temp->link;
	}
	temp->link=t;
}
void deletef(){
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
	struct node*p,*temp;
	temp=head;
	while(temp->link!=NULL){
		p=temp;
		temp=temp->link;
	}
	p->link=NULL;
	free(temp);
}

void insertany(){
	struct node *temp,*pre,*t;
	int i,pos;
	temp=(struct node *) malloc(sizeof(struct node));
	scanf("%d-->",&temp->data);
	temp->link=NULL;
	printf("Enter the position");
	scanf("%d",&pos);
	t=head;
	for(i=1;i<pos;i++){
		pre=t;
		t=t->link;
		
	}
	pre->link=temp;
	temp->link=t;
}

void deleteany(){
		struct node*p,*temp,*curr,*t;
		int i,pos;
		printf("Enter the position to delete ");
		scanf("%d",&pos);
		t=head;
		for (i=1;i<pos;i++){
			p=t;
			t=t->link;	
			curr=t;
		}
		p->link=curr->link;
		free(t);
		
	
}
