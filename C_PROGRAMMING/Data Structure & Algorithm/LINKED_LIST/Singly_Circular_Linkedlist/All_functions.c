
// Singly circular linked list...
// All add functions 
// addnode
// addfirst
// addlast
// add at position
//
// all delete functions such as ...
// delete at first
// delete at last
// delete at specific position..
//
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	int data;
	struct Node *next;

}node;


  node *head =NULL;

  int countnodes();

 node *createnode(){

 	node *newnode =(node *) malloc (sizeof(node));

	printf("\nEnter the data  :  ");
	scanf("%d",&newnode->data);

	newnode->next=NULL;

	return newnode;


 }

 int addnode(){

	 node *newnode = createnode();

	 if(head == NULL){

		 head = newnode;
		 newnode->next = head;
	 }
	 else{

		 node *temp=head;

		 while(temp->next != head){

			 temp= temp->next;
		 }

		 temp->next=newnode;
		 newnode->next=head;

	 }

 }

  int addfirst(){

	  node *newnode=createnode();

	  if(head == NULL){
		  printf("\nLinked list is empty..");
		  return -1;
	  }

	  else{
		  node *temp=head;

		  while(temp->next != head){
			  temp=temp->next;
		  }

		  newnode->next=head;
		  head=newnode;
		  temp->next=head;
	  }
	  printf("\n node inserted...\n");

	  return 0;
  }

 int addlast(){

	 addnode();
 }

  int addAtPos(){

	  int pos;
	  printf("\nEnter the position you want to add :  ");
	  scanf("%d",&pos);

	  int count =countnodes();

	  if( pos <= 0 || pos > count+1){
		  printf("\nInvalid position...\n");
		  return -1;
	  }
	  else{
		  if(pos == 1){
			  addfirst();
		  }
		  else if(pos == count+1){
			  addlast();
		  }
		  else{
			  node *newnode=createnode();
			  node *temp=head;

			  while(pos - 2 ){

				  temp=temp->next;
				  pos--;
			  }
			  newnode->next = temp->next;
			  temp->next =newnode;
		  }

		  printf("\nNode inserted....\n");
		  return 0;
	  }

  }


  int deletefirst(){

	  if(head == NULL){

		  printf("\nLinked list is empty...");
		  return -1;

	  }
	  else{
		  node *temp=head;

		  while(temp->next != head){

			  temp=temp->next;
		  }
			  temp->next=head->next;
			  free(head);
			  head=temp->next;
	  }

	  printf("\nNode deleted...\n");

  }


   int deletelast(){

	   if(head == NULL){
		   printf("\n Linked list is empty..");
		   return -1;
	   }
	   else {
		   if(head->next == head){
			   deletefirst();
		   }
		   else{
			   node *temp = head;

			   while(temp->next->next != head){

				   temp=temp->next;
			   
			   }
			
			   free(temp->next);
			   temp->next = head;

		   }
		   printf("\n Node is deleted....");
	   }
   }
	
   int deleteAtPos(){

	   int pos;
	   printf("\nEnter the position of node u want to delete  :  ");
	   scanf("%d",&pos);

	   int count=countnodes();


	   if(pos <= 0 || pos > count + 1){
		   printf("\n Invalid position ..\n");
		   return -1;
	   }

	   else{
		   if(pos == 1){
			   deletefirst();
		   }
		   else if(pos == count){
			   deletelast();
		   }
		   else{

			   node *temp=head;
			
			   while(pos-2){
				   temp= temp->next;
				   pos--;
			   }

			   node *temp1= temp->next->next;
			   free(temp->next);
			   temp->next = temp1;
		   }

	   }
			   printf("\n Node deleted..\n");
	   return 0;
   }






  int countnodes(){

		int count=0;
		if(head == NULL){
			printf("\n Linked list is empty...");
			return -1;
		}

		else{
			node *temp=head;

			while(temp->next != head){
				count++;
				temp=temp->next;
			}
			count++;

		}

		return count;

	}

 
  int printSCLL(){

	  if(head == NULL){

		  printf("Singly linked list is empty...\n");
		  return -1;
	  }
	  else{
		  node *temp = head;

		  while(temp->next != head){

			  printf("| %d |-->",temp->data);
			  temp=temp->next;
		  }
		  printf("| %d |\n\n",temp->data);

	  }

  }

 void main(){

	 int ch;

	 while(1){

		 printf("\n\t!!*******M E N U********!!\n");

		 printf("\tPress 1: Addnode \n");
		 printf("\tPress 2: Addfirst \n");
		 printf("\tPress 3: AddAtpos \n");
		 printf("\tPress 4: Addlast\n");
		 printf("\tPress 5: Deletefirst \n");
		 printf("\tPress 6: DeleteAtPos\n");
		 printf("\tPress 7: Deletelast \n");
		 printf("\tPress 8: PrintSCLL\n");
		 printf("\tPress 9: Countnodes \n");
		 printf("\tPress 10: exit\n\n");

		 printf("\nEnter the choice :  ");
		 scanf("%d",&ch);

		 switch(ch){

			 case 1:{
					int nodes;
					printf("\nEnter how many nodes u want to create  :  ");
					scanf("%d",&nodes);

					for(int i = 0; i < nodes; i++){
						addnode();

					}
					printf("\n%d nodes added..",nodes);
				}
				  break;

			case 2:
				  addfirst();
				  break;

			case 3:
				  addAtPos();
				  break;

			case 4:
				  addlast();
				  break;


			case 5:
				  deletefirst();
				  printf("\n");
				  break;
			  
			case 6:
				  deleteAtPos();
				  break;
		  
		        case 7:
				  deletelast();
				  printf("\n");
				  break;

			case 8:
				  printSCLL();
				  printf("\n");
				  break;

			case 9:{
				 int count= countnodes();
				 printf("\n\n Total nodes are :  %d  ",count);
				 printf("\n");
			       }
			       break;

			case 10:
			       exit(0);
			       break;

			default:
			       printf("\n Wrong choice...");

		 }
	 }

 }


















