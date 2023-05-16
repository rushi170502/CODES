
// WAP to print the data in reverse from the node using linked list 

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
        char str[20];
	struct Node *next;

}node;

node *head=NULL;

node *createnode(){

    node *newnode=(node*)malloc(sizeof(node));

    printf("\nEnter the data  :   ");
    scanf("%s",newnode->str);

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

  char * stringrev(char *str){
	  char *temp=str;

	  while(*temp != '\0'){
		  temp++;
	  }
	  temp--;
	  char x;
	  while(str < temp){
		  x = *str;
		  *str = *temp;
		  *temp = x;
		  str++;
		  temp--;
	  }
	  return str;
  }


 void datarev(){
	 if(head == NULL){
		 printf("\nLinked list is empty..");
	 }
	 
	 else{

		 node *temp=head;
	 	while(temp != NULL){

			 stringrev(temp->str);
			 printf("| %s |-->",temp->str);
			 temp = temp->next;
	 	}

	}
	 printf("NULL");
	 printf("\n");
	

 }
 

 void printdata(){

	node *temp=head;

	if(head==NULL){
		printf("\nList is empty....\n");
	}
	else{
		while(temp!=NULL){

		
			printf("| %s |-->",temp->str);
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
 	printf("\n reverse string from linked list..");	
	datarev();
	

}


