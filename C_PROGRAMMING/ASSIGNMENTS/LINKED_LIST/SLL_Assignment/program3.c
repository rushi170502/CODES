
// WAP that searches the total occurrence of particular element which is given by user.
// from the linkedlist..

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	int data;
	struct Node *next;

}node;

node *head=NULL;

node *createnode(){

    node *newnode=(node*)malloc(sizeof(node));

    printf("\nEnter the data  :   ");
    scanf("%d",&newnode->data);

    newnode->next=NULL;
    return newnode;
    

}
void addnode(){

	node *newnode=createnode();

	if(head==NULL){
		head=newnode;
	}else{

		node *temp=head;

		while(temp->next!=NULL){
			temp=temp->next;
		}

		temp->next=newnode;

	}
}

 void Totaloccurence(){

	 int key;
	 int index=1;
	 int count=0;

	 printf("\nEnter the number you want search its all occurence :   ");
	 scanf("%d",&key);

	 if(head==NULL){
		 printf("\nList is empty..\n");
	 }
	 else{
		 node *temp=head;
		 int flag=0;

		 while(temp!=NULL){
			 
			 if(temp->data==key){

				count++;
				flag=1;
				
			 }

			 else{
				  flag=0;
			 }
			 index++;
			 temp=temp->next;
		 }
		 if(flag==1){
		 	printf("\n Total occurences of %d  is  %d times\n",key,count);
		 }
		 else{
			 printf("\nEntered key doesn't match\n");
		 }

	 }

 }



 void printdata(){

	node *temp=head;

	if(head==NULL){
		printf("\nList is empty....\n");
	}
	else{
		printf("\n");
		while(temp!=NULL){

		
			printf("| %d |-->",temp->data);
			temp=temp->next;
		}

		printf("NULL\n\n");
	}
 }

void main(){

	int no;
	printf("\nEnter the no. of nodes of nodes u want to add  :  ");
	scanf("%d",&no);
	for(int i=1;i<=no;i++){
		addnode();

	
	}

	printdata();
	
//	printf("\n All occurence of given number...\n");
	Totaloccurence();

//	printdata();

}


