
// WAP to print the employee data..
//
#include<stdio.h>
#include<string.h>

typedef struct company{

	int emp_count;
	char c_name[30];
	float c_revenue;

	struct company *next;

}cmp;


void main(){

	cmp c1,c2,c3;

	cmp *head=&c1;

	head->emp_count=70867676;
	strcpy(head->c_name,"Veritas");
	head->c_revenue=7656.555;

	head->next=&c2;

	head->next->emp_count=987777;
	strcpy(head->next->c_name,"Nvidia");
	head->next->c_revenue=345.4322;

	head->next->next=&c3;

	head->next->next->emp_count=987776;
	strcpy(head->next->next->c_name,"Wipro");
	head->next->next->c_revenue=456.432;

	head->next->next->next=NULL;


       printf("\n%d\n",head->emp_count);
       printf("%s\n",head->c_name);
       printf("%f\n",head->c_revenue);      

       printf("\n%d\n",head->next->emp_count);
       printf("%s\n",head->next->c_name);
       printf("%f\n",head->next->c_revenue);

       printf("\n%d\n",head->next->next->emp_count);
       printf("%s\n",head->next->next->c_name);
       printf("%f\n",head->next->next->c_revenue);


}
