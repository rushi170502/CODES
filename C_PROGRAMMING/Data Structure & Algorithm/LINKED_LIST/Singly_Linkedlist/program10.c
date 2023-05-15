

// WAP to print the linked list data ,how to accept the string data from user? 
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee{

	char emp_name[20];
	int emp_id;
	float emp_sal;

	struct Employee *next;

}Emp;

  Emp *head=NULL;

  void addnode(){

	  Emp *newnode=(Emp *)malloc(sizeof(Emp));
	  getchar();
	  printf("Enter the name of Employee  : ");

	  fgets(newnode->emp_name,20,stdin);

/*	  char ch;
	  int i=0;

	  while((ch=getchar()) != '\n'){

		  (*newnode).emp_name[i++]=ch;
	  }
	  */
	  printf("\nEnter the Employee Id       :  ");
	  scanf("%d",&newnode->emp_id);
	  printf("\nEnter the Employee salary   :  ");
	  scanf("%f",&newnode->emp_sal);

	  newnode->next=NULL;

		  if(head==NULL){

			 head=newnode;

		  }else{
			  Emp *temp =head;
			  while(temp->next!=NULL){

				  temp=temp->next;
			  }
			  temp->next=newnode;

		  }
		  printf("\n");
  }


  void printdata(){

	  Emp *temp=head;
	  if(head==NULL){
		  printf("\nNo Node exists...");
	  }
	  else{

         	  while(temp!=NULL){
		  temp->emp_name[strcspn(temp->emp_name,"\n")]='\0';

		  printf("| %s  =  %d =  %.3f |---> ",temp->emp_name,temp->emp_id,temp->emp_sal);

		  temp=temp->next;
	  }
	}
	  printf("NULL");

  }
  void main(){

	  int no;
	      printf("\nEnter the number of nodes   : ");
	     scanf("%d",&no);

	     for(int i = 0; i<no ; i++){
		     addnode();
	     }
	     printdata();

	     printf("\n\n");

  }

