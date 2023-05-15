

// WAP to print the add node at first of the linked list
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee{

	char emp_name[30];
	int emp_id;
	float emp_sal;

	struct Employee *next;

}emp;

  emp *head=NULL;

  emp * createnode(){

         emp *newnode=(emp*)malloc(sizeof(emp));
         getchar();
	 printf("\nEnter the name of employee  : ");
	 fgets(newnode->emp_name,20,stdin);
	 printf("Enter the Employee ID     :");
	 scanf("%d",&newnode->emp_id);
	 printf("Enter the Employee Salary :");
	 scanf("%f",&newnode->emp_sal);

	 newnode->next=NULL;
     
     	 return newnode;	 
  }

// Add node to linked list function
  void addnode( ){

	  emp *newnode=createnode();

	  if(head==NULL){
		  head=newnode;
	  }
	  else{
		  emp *temp=head;
		  while(temp->next != NULL){
			  temp=temp->next;
		  }temp->next=newnode;
	  }
  }


  void printdata(){

	  emp *temp=head;

	  if(head==NULL){
		  printf("\nNo node exists...");
	  }
	  else{
		  
		  while(temp!=NULL){
			
			  //Use of complemnetary function for string  

			  temp->emp_name[strcspn(temp->emp_name,"\n")]='\0';

			  printf(" | %s  =  %d  =  %.3f  |--> ",temp->emp_name,temp->emp_id,temp->emp_sal);
			  temp=temp->next;
		  }
		  printf("NULL");
	  }
	  
  }
// add node at first of the linked list
 void addfirst(){

	 printf("\nAdd node at first  : \n");
	 emp *newnode = createnode();
	  if(head==NULL){
		  head=newnode;
	  }
	  else{
		  newnode->next=head;
		  head=newnode;
	  }
 }

  void main(){

	  int no;

	  printf("\nEnter the number no nodes in linked list  :");
	  scanf("%d",&no);

	  for( int i = 0; i< no; i++){
		  addnode();//createnode means at node at last...in LL

	  }
	 printf("\nLinked list before add node at first...\n");
	  printdata();
	  addfirst();
	  printf("\nLinked list after adding a node...\n");

	  printdata();

	  printf("\n\n");
  }
