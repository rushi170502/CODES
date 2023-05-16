
// WAP to print the string from the linked which length is equal to length given by user and delete all other nodes...
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct Node {

	char str[20];

	struct Node *next;
}node;

 node *head=NULL;

 int deletelast();
 int deletefirst();
 int deletepos(int);

 node *createnode(){
    
	 node *newnode=(node *)malloc(sizeof(node));
	 getchar();
	 printf("Enter the string   :   ");

	 //fgets(newnode->str,20,stdin);
	 char ch;
	 int i=0;
	 while((ch=getchar())!='\n'){
		 (*newnode).str[i++]=ch;
	 }
	 
	 newnode->next=NULL; 
	return newnode;	 

 }
 void addnode(){

	 node *newnode=createnode();

	 if(head==NULL){
		 head=newnode;
	 }
	 else{
		 node *temp=head;

		 while(temp->next!=NULL){
			 temp=temp->next;
		 }
		 temp->next=newnode;

	 }

 }

 int countnode(){

	 int count=0;

	 node *temp=head;

	 while(temp!=NULL){
		 count++;
		 temp=temp->next;
		 
	 }

	 return count;
 }

 int match(){

	// int count = countnode();

	 if(head == NULL){
		 printf("\nLinked list is empty");
		 return -1;
	 }

	 else{
		 int len,flag=0,index=0;

		 printf("\nEnter the length u want to check  :   ");
		 scanf("%d",&len);

		 node *temp=head;

		 while(temp!=NULL){

			 index++;

			 if(strlen(temp->str) == len){

				 flag=1;
			 }
			else{

				deletepos(index);
			}

			if(flag==1){
				printf("| %s |-->",temp->str);
			}
		 

			temp=temp->next;
		 }
	 } 
	 
	 
}


 int deletefirst(){

	node *temp=head;

	if(head == NULL){
		printf("\nLinked list is empty..\n");
		return -1;
	}
	else{
		if(head->next == NULL){
			free(head);
			head=NULL;
		}
		else {
			head=temp->next;
			free(temp);
		}
		return 0;
	}

}


 int deletelast(){

	 node *temp=head;

	 if(head == NULL){
		 printf("\nLinked list is empty..\n");
	 }
	 else{

		 if(head->next == NULL){
			 free(head);
			 head=NULL;
		 }
		 else{
			 while(temp->next->next != NULL){

				 temp=temp->next;
			 }
			 free(temp->next);

			  temp->next=NULL;
		    }
		
	 return 0;

	}
 }

int deletepos(int pos){

	int count=countnode();
	 node *temp=head;
	 node *temp1=NULL;

  		if(pos <= 0 || pos > count){
			printf("Linked list is empty :");
				return -1;
			}
		else{
			if(pos==1){
				deletefirst();
			}
			else if(pos==count){
				deletelast();
			}
			else{
				while(pos-2){
					temp=temp->next;
					pos--;
				}
				temp1=temp->next->next;
				free(temp->next);
				temp->next = temp1;

			}
			return 0;
		}
}




 void printdata(){

	 node *temp=head;

	 if(head == NULL){
		 printf("\nLinked list is empty..\n");
	 }
	 else{
	
  		 while(temp != NULL){

	//	temp->str[strcspn(temp->str,"\n")]='\0';

		 printf("| %s |-->",temp->str);
		 temp=temp->next;
	        }

		 printf("NULL\n");

	 }

 }



 void main(){

	 int no;
	 printf("\nEntr the no. of nodes  :  ");
	 scanf("%d",&no);
	 for(int i=0;i<no;i++){
		 addnode();
	 }
	
	 printdata();

	 match();

//	 printdata();

 }
