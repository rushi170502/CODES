
// All functions of linked list in one program..
// 1.createnode()
// 2.addnode()  i.e addlast()
// 3.addfirst()
// 4.addatpos()
// 5.addlast()
// 6.deletefirst()
// 7.deleteAtpos()
// 8.deletelast()
// 9.count()
// 10.displayLL()
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student{

	int roll_no;
	char s_name[30];
	float s_per;

	struct Student *next;
}stud;

  stud *head=NULL;

  stud *createnode(){

	  stud *newnode=(stud *)malloc(sizeof(stud));
	  printf("\nEnter the student Roll number    :     ");
	  scanf("%d",&newnode->roll_no);
	  printf("\nEnter the student name           :     ");
	  getchar();
	  fgets(newnode->s_name,20,stdin);
	  printf("\nEnter the student percentage     :     ");
	  scanf("%f",&newnode->s_per);

	  newnode->next=NULL;

	  return newnode;
  }

  void addnode(){

	  stud *newnode=createnode();
	  if(head==NULL){
		  head=newnode;
	  }
	  else{
		  stud *temp=head;
		  while(temp->next!=NULL){
			  temp=temp->next;
		  }
		  temp->next=newnode;
	  }

  }

  int addfirst(){

	  stud *newnode=createnode();
	  if(head==NULL){
		  head=newnode;
	  }
	  else{
		  newnode->next=head;
		  head=newnode;
	  }
	  printf("\nOne node inserted...\n");

  }

  int addatpos(){

	  int pos;
	  printf("\nEnter the position you want add node  :   ");
	  scanf("%d",&pos);

	  int size=count();

	  if(pos<=0 || pos >=size+2){
		  printf("\nInvalid position...");
		  return -1;
	  }
	  else if(pos == 1){
		  addfirst();
	  }
	  else if(pos==size+1){
		  addnode();
	  }
	  else{
		  stud *newnode=createnode();
		  stud *temp=head;
		  while(pos-2){
			  temp=temp->next;
			  pos--;
		  }
		  newnode->next=temp->next;
		  temp->next=newnode;
		  printf("\nOne node inserted..\n");
	  }
  }


  int addlast(){

	  addnode();

  }

  int count(){

	  int cnt;
	  stud *temp=head;
	  while(temp!=NULL){
		  cnt++;
		  temp=temp->next;
	  }
	  return cnt;
  }
// delete the first node of linked list
  int deletefirst(){

	  stud *temp=head;
	  head=temp->next;

	  free(temp);// free the temporary pointer..
          printf("\none node deleted...");
  }

//delete node from linked list
   int deletenode(){

	   stud *temp=head;

	   while(temp->next->next!=NULL){
		   temp=temp->next;
	   }

	   free(temp->next);//free node from heap
	   temp->next=NULL;
	   printf("\nOne node deleted...");
   }
//delete node from given position...

  int deleteatpos(){

	  int pos;
	  printf("\nEnter the position u want to delete   :  ");
	  scanf("%d",&pos);
	  int size=count();

	  if(pos<=0  || pos>size){
		  printf("\nInvalid position...\n");
		  return -1;
	  }
	  else{

	   if(pos==1){
		  deletefirst();
	  }else if(pos==size){
		  deletelast();
	  }
	  else{
		  stud *temp=head,*temp1;
		  while(pos-2){
			  temp=temp->next;
			  pos--;
		  }
		  temp1=temp->next;
		  temp->next=temp->next->next;
		  free(temp1);//freee the node..
	  	  printf("\nOne node deleted...\n");
	  }
	  }
  }

// delete the last node from linked list..
 int deletelast(){
	  deletenode();
	  
 }

//dipslay function..
  void displayll(){

	  stud *temp=head;

	  while(temp!=NULL){
		  temp->s_name[strcspn(temp->s_name,"\n")]='\0';

		  printf("| %d = %s = %.2f |-->",temp->roll_no,temp->s_name,temp->s_per);
		  temp=temp->next;
	  }
	  printf("NULL");
  }

  void main(){

	  int ch;
	  char choice;

	  do{

	  printf("\n!!*********MENU*********!!\n\n");
	  printf("Press 1: Addnode \n");
	  printf("Press 2: AddFirst \n");
	  printf("Press 3: AddAtPos \n");
	  printf("Press 4: AddLast \n");
	  printf("Press 5: Deletenode \n");
	  printf("Press 6: DeleteFirst \n");
	  printf("Press 7: DeleteAtPos \n");
	  printf("Press 8: DeleteLast \n");
	  printf("Press 9: Displaylist\n\n");

	  printf("Enter the choice :    \n");
	  scanf("%d",&ch);

	  switch(ch){

		  case 1: {
			  int no;
			  printf("\nEnter how many nodes u want add  :   ");
			  scanf("%d",&no);
			  for(int i=1;i<=no;i++){
				  addnode();
			  }
			  printf("\n%d nodes are inserted ..\n",no);
			  }
			  break;

		  case 2:
			  addfirst();
			  break;

		  case 3:
			  addatpos();
			  break;
		  
		  case 4:
			  addlast();
			  break;

	          case 5:
			  deletenode();
			  break;

	          case 6:
			  deletefirst();
			  break;

		  case 7:
			  deleteatpos();
			  break;
	
		  case 8:
			  deletelast();
			  break;

	          case 9:
			  displayll();
			  break;

		  default :
			  printf("\nWrong choice...");

         	  }
		getchar();
	    printf("\nDo you want to continue(y/n) :  ");
	    scanf("%c",&choice);
	  }while(choice=='y' || choice=='Y');

  }	  	  
  

