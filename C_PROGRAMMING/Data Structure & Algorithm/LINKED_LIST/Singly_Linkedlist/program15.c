

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

void deletefirst(){

	Emp *temp=head;

	//head=head->next;
	//or
	head=temp->next;

	free(temp);
	printf("\nOne node deleted..");
}


int deleteAtpos(){

	int size=count();

	int pos;
	printf("\nEnter the position you want to add node :  ");
	scanf("%d",&pos);
	if(pos<=0 || pos>size){
		printf("\n Invalid position..");
		return -1;	
	}

	else if(pos==1){

		deletefirst();
		printf("\n Node deleted..");
           
	}
	else if(pos==size){
		deletelast();
		printf("\nDelete node...");
	}
	else{
 	 Emp *temp=head;
	 Emp *temp1=NULL;

	while(pos-2){
		temp=temp->next;
		pos--;
	}
	temp1=temp->next;
	temp->next=temp->next->next;
	free(temp1);
	 
	printf("\nNode deleted...\n");
	}

}


void deletenode(){

 Emp *temp=head;
 while(temp->next->next!=NULL){

	 temp=temp->next;
   }
    free(temp->next);
    temp->next=NULL;
    printf("\n one node deleted...");

}

void deletelast(){

	deletenode();

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
	printf("press 2: deletefirst\n");
	printf("press 3: deleteATpos\n");
	printf("press 4: deletelast\n");
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
			deletefirst();
			break;

		case 3:
			deleteAtpos();
			break;

		case 4:
			deletelast();
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
