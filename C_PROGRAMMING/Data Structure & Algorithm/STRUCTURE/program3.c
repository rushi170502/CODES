
// malloc  
// void * is also called as generic pointer...
// stores address of anything
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct OTT{

	int p_users;
	char p_name[20];
	float p_price;

};

  void main(){

//	  void *vptr= malloc(sizeof(struct OTT));

//	  struct OTT *ptr1=(struct OTT *)vptr;

	// we can write these above two lines in one line..
	//
 	struct OTT *ptr1=(struct OTT *)malloc(sizeof(struct OTT));

	ptr1->p_users=1000111;
	strcpy(ptr1->p_name,"PrimeVideo");
	ptr1->p_price=450.54;


	printf("%d\n",ptr1->p_users);
	printf("%s\n",ptr1->p_name);
	printf("%f\n",ptr1->p_price);

	struct OTT *ptr2=(struct OTT *)malloc(sizeof(struct OTT));
	
	ptr2->p_users=9199000111;
	strcpy(ptr2->p_name,"Netflix");
	ptr2->p_price=950.54;

	printf("\n%d\n",ptr2->p_users);
	printf("%s\n",ptr2->p_name);
	printf("%f\n",ptr2->p_price);

  }
