

// WAP to print the 
//
#include<stdio.h>
#include<stdlib.h>

typedef struct Data{

	int value;

	struct Data *next;

}data;

  data *head=NULL;

  data *createnode(){

	 data *newnode=(data *)malloc(sizeof(data));

	 printf("\n Enter the data  :  ");
	 scanf("%d",&newnode->value);

	 newnode->next=NULL;
	 return newnode;

  }

  void addnode(){

	  data *newnode=createnode();
	  if(head==NULL){
		  head=newnode;
	  }
	  else
	   {
		   data *temp=head;
		   while(temp->next!=NULL){
			   temp=temp->next;
		   }
		   temp->next=newnode;
	   }
  }

 int displayll(){

	 data *temp=head;
	printf("\n");
	 while(temp!=NULL)
	 {
		 printf("| %d |-->",temp->value);
		 temp=temp->next;
	 }
	   printf("NULL");
 }
/*

  void lastsecocc(){

	  data *temp=head,*x=NULL;
	  int key;
	  printf("\nEnter the key u want to find its last second occurance...\n");
	  scanf("%d",&key);
	  while(temp){

		  if(temp->value==key){
			  x=temp;
		  }
		  temp=temp->next;
	  }
	   if(x!=NULL && x->next==NULL){

		   while(temp->next!=x){
			   temp=temp->next;
			   temp->next=NULL;
		   }

	   }
	     if(x!=NULL && x!=NULL){

		   x->value =x->next->value;
		   temp=x->next;
		   x->next=x->next->next;
	   }
		printf("%d\n",x->value);
  }

*/

  int matchelement(){

   int  index=1,ind;
   int flag=0,ele;

   data *temp=head;
   printf("\nEnter the element you want to search :  ");
   scanf("%d",&ele);
	
   while(temp){
	   while(temp!=NULL){

		   if(temp->value!=ele){
			   flag=2;
 		   }

		   else if(temp->value==ele){
			   flag=1;
			  ind= index;
			  
			  
			  if(flag==1){
				  printf("\n%d is found at %d position  ",ele,ind);
			  }
	     			
		   }
		   else{
			   flag=1;
		   }

		   index++;

   		   temp=temp->next;
	   }
   }

   if(flag==2)
   printf("\nWrong input..");
   	

  }

int countofocc(){
	data *temp=head;
	int count=0,ele;
	printf("\nEnter the no. u want to check its occurance :  ");
	scanf("%d",&ele);

   while(temp){
	   while(temp!=NULL){

		   if(temp->value==ele){
			   
			  count++;
		   }
		   temp=temp->next;
	   }
	
   }	
  printf("Count of occurance:  %d  \n",count);   
}

  void main(){

	  int ch;
	  char choice;

	do{

	  printf("\n************MENU*************\n\n");
	  printf("Press 1: addnode\n");
	  printf("Press 2: LastSecOcc\n");
	  printf("Press 3: matchelement\n");
	  printf("Press 4: countofocc\n");
	  printf("Press 5: display list\n");


	  printf("\nEnter the choice.. :  ");
	  scanf("%d",&ch);

	
	     switch(ch){

		  case 1:{
			  int no;
			  printf("\nEnter how many nodes u want to add :  ");
			  scanf("%d",&no);

			  for(int i=1;i<=no;i++){
				  addnode();
			  }
			  printf("%d nodes inserted....",no);
			 }
			 break;

	/*	 case 2:
		      
		      lastsecocc();
	      	      break;*/

		case 3:
		      matchelement();
		      break;

		case 4:
		      countofocc();
		      break;

	 	case 5:
			displayll();
			break;

		default:
			printf("\n wrong choice..");
	  
	  }
	    getchar();

	   printf("\nDo you want to continue...(y/n)  :    ");
	   scanf("%c",&choice);
		
	}while(choice=='y' || choice=='Y');	  
  }

