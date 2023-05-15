

// WAP to add node , addnode at last, addnode at given position..
// And also deletenode, deletelastnode, deletenode at position.
// without using switch case
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee{

	int emp_id;
	char emp_name[30];
	float emp_sal;

	struct Employee *next;

}Emp;

Emp *head=NULL;

Emp *createnode(){

	Emp *newnode=(Emp*)malloc(sizeof(Emp));

	printf("\nEnter the Employee id    :  ");
	scanf("%d",&newnode->emp_id);
	getchar();
	printf("\nEnter the Employee name  :  ");
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		(*newnode).emp_name[i++]=ch;
	}
	printf("\nEnter the Employee salary:   ");
	scanf("%f",&newnode->emp_sal);

	newnode->next=NULL;
}

void addnode(){

	Emp *newnode=createnode();

	if(head== NULL){
		head=newnode;
	}
	else{
		Emp*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	
}

void addfirst(){

	Emp *temp=head;

	Emp *newnode=createnode();

	if(head==NULL){
		head=newnode;
	}else{
		newnode->next=head;
		head=newnode;
	}
}

void displayLL(){
	Emp *temp=head;
	if(head==NULL){
		printf("\nNo node exists..");
	}else{

		while(temp!=NULL){
			
			printf("|%d = %s = %.3f |-->",temp->emp_id,temp->emp_name,temp->emp_sal);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}


void main(){

	int no;
	printf("\nEnter the no. of nodes  : " );
	scanf("%d",&no);

	for(int i=1 ;i <=no;i++){
		addnode();
	}

	printf("\nNodes of Linked list \n");
	displayLL();

	printf("\nAdd node at first...\n");
	addfirst();
	displayLL();


}	

