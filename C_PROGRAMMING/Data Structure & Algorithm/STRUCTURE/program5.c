
//  Structure pointer...
//
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct company{

	int emp_count;
	char c_name[40];
	float c_revenue;

}cmp;

void main(){

	cmp *ptr1=(cmp*)malloc(sizeof(cmp));//here we typedef the structure name and created a pointer of structure..

	ptr1->emp_count=34444;
	strcpy(ptr1->c_name,"Veritas");
	ptr1->c_revenue=2345.5432;

	printf("%d\n",ptr1->emp_count);
	printf("%s\n",ptr1->c_name);
	printf("%f\n\n",ptr1->c_revenue);

// another pointer..
//
	cmp *ptr2=(cmp*)malloc(sizeof(cmp));//here we typedef the structure name and created a pointer of structure..

	ptr2->emp_count=9857558;
	strcpy(ptr2->c_name,"Nvidia");
	ptr2->c_revenue=978.8787;

	printf("%d\n",(*ptr2).emp_count);
	printf("%s\n",(*ptr2).c_name);
	printf("%f\n\n",(*ptr2).c_revenue);


}





