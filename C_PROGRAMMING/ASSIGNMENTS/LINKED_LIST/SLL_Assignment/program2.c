
// WAP that searches the last second occurrence of particular element which is given by user.
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

 void LastSecOccurence(){

	 int key;
	 int count=1;
	 
	 printf("\nEnter the number you want search its last second occurence :   ");
	 scanf("%d",&key);

	 if(head==NULL){
		 printf("\nList is empty..\n");
	 }
	 else{
		 node *temp=head;
		 int flag=0,occur1=0,occur2=0;
		 while(temp!=NULL){
			 
			 if(temp->data==key){

				occur2 = occur1;
				occur1 = count;
				flag=1;
				
			 }
			 count++;
			 temp=temp->next;
			 
			 
		 }
		 if(flag == 1){
		 	printf("\n Last second occurence of %d  is at  %d \n",key,occur2);
		 }
		 else if(temp->data!= key){
			 printf("\nEntered key doesn't match\n");
		 }
		 else{
			flag=0;
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
	LastSecOccurence();

//	printdata();

}


