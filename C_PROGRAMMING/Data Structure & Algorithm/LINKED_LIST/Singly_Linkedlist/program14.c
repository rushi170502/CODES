

// WAP to add node , addnode at last, addnode at given position..
// And also deletenode, deletelastnode, deletenode at position.
// with using switch case
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
	return newnode;
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
	printf("\nNode inserted..\n");
	
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
	printf("\n Node inserted...\n");
}

int addAtpos(){

	Emp *newnode=createnode();
	Emp *temp=head;

	int size=count();

	int pos;
	printf("\nEnter the position you want to add node :  ");
	scanf("%d",&pos);
	if(pos<0 || pos>size){
		printf("\n Invalid position..");
	}
	else if(pos==0){

		newnode->next=head;
		head=newnode;
		printf("\nNode inserted..\n");
	}
	else if(pos==1){
	  newnode->next=head->next;
	  head->next=newnode;
	  printf("\nNode inserted..");
	}
	else{


	while(pos-2){
		temp=temp->next;
		pos--;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	printf("\nNode inserted..\n");
	}

}



void addlast(){

	addnode();
	printf("\n Node inserted..\n");
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

int count(){
	int cnt=0;
	Emp *temp=head;

	while(temp!=NULL){
		temp=temp->next;
		cnt++;
	}
	return cnt;
}

void main(){

	int ch;
	char choice;
	do{

	printf("*******MENU*******\n");
	printf("press 1: addnode\n");
	printf("press 2: addfirst\n");
	printf("press 3: addAtpos\n");
	printf("press 4: addlast\n");
	printf("press 5: displayLL");
	
	printf("\nEnter the choice  :  ");
	scanf("%d",&ch);


	switch(ch){

		case 1:
			{	
			   int no;
			   printf("\nEnter how many nodes u want to add  : ");
	   		   scanf("%d",&no);
			for(int i=1;i<=no;i++){

			     addnode();
			}
				  
			  break;

		case 2:
			addfirst();
			break;

		case 3:
			addAtpos();
			break;

		case 4:
			addlast();
			break;

		case 5:
			displayLL();
			break;

		default :
			printf("\nwrong choice....\n");
			}	
			}
			getchar();

			printf("\nDo you want to continue press (y/n)  :");
			scanf("%c",&choice);

	
			

			}while(choice=='Y'  || choice=='y');
	
}
