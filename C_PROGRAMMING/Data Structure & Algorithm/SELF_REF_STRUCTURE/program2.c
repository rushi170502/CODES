

// struture for batsman..
//
#include<stdio.h>
#include<string.h>

typedef struct batsman{

	int jer_no;
	char b_name[30];
	float b_avg;

	struct batsman *next;

}bat;

void main(){

	bat obj1,obj2,obj3;

	bat *head=&obj1;//typedef the structure vairable..
	
	head->jer_no=18;
	strcpy(head->b_name,"Virat");
	head->b_avg=54.4;

	head->next=&obj2;

	head->next->jer_no=45;
	strcpy(head->next->b_name,"Rohit");
	head->next->b_avg=45.34;

	head->next->next=&obj3;
	
	head->next->next->jer_no=7;
	strcpy(head->next->next->b_name,"Dhoni");
	head->next->next->b_avg=36.76;

	head->next->next->next=NULL;


        printf("%d\n",head->jer_no);
	printf("%s\n",head->b_name);
	printf("%f\n",head->b_avg);
	
        printf("%d\n",head->next->jer_no);
	printf("%s\n",head->next->b_name);
	printf("%f\n",head->next->b_avg);
    
        printf("%d\n",head->next->next->jer_no);
	printf("%s\n",head->next->next->b_name);
	printf("%f\n",head->next->next->b_avg);
    
}
