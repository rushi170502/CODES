//
//
//  User give the inputs...
//  by using fgets() functions,....
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Movie{

	char m_name[20];
	float m_imdb;

	struct Movie *next;

}mov;

   mov *head=NULL;

   void addnode(){

	   mov *newnode=(mov *)malloc(sizeof(mov));
	   // input get by user.
	   
	   printf("\nEnter the movie name :  ");

	   // syntax  fgets(where_to_store,size,inputfile)
	   fgets(newnode->m_name,20,stdin);

	   printf("\nEnter the movie rating :");
	   scanf(" %f",&newnode->m_imdb);

           getchar();

	   newnode->next=NULL;
	   
	   if(head==NULL){
		   head=newnode;
	   }
	   else{
		   mov *temp=head;

		   while(temp->next!=NULL){
			   temp=temp->next;

		   }

		   temp->next=newnode;
		  
	        }
	   }

  void printnode(){

	  mov *temp=head;
	 
	  while(temp!=NULL){

		
		  temp->m_name[strcspn(temp->m_name,"\n")]='\0';

		  printf("| %s ->  %f |",temp->m_name,temp->m_imdb);

		 temp=temp->next;

	  }
	  printf("--> NULL ");

	 }
  void main(){

	  addnode();

	  addnode();

	  printnode();

	  printf("\n");
}



