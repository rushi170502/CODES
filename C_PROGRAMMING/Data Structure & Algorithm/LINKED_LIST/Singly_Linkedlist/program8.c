//
//
//  User give the inputs...by using fgets() functions,....
//

#include<stdio.h>
#include<stdlib.h>

typedef struct Movie{

	char m_name[20];
	float m_imdb;

	struct Movie *next;

}mov;

   mov *head=NULL;

   void addnode(){

	   mov *newnode=(mov *)malloc(sizeof(mov));
	   // input get by user.
	   
	   printf("Enter the movie name :  \n");

	   // syntax  fgets(where_to_store,size,inputfile)
	   fgets(newnode->m_name,20,stdin);

	   printf("Enter the movie rating :\n");
	   scanf("%f",&newnode->m_imdb);

	   newnode->next=NULL;
	   head=newnode;

   }

  void printnode(){

	  mov *temp=head;

	  while(temp!=NULL){

		  printf("| %s -> ",temp->m_name);
		  printf(" %f  |",temp->m_imdb);
		 printf("\n");

		 temp=temp->next;

	  }

	 }
  void main(){

	  addnode();

	  addnode();

	  printnode();

	  printnode();

	 }



