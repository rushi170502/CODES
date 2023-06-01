

// Take the space on heap section and print the given data...

//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee{

	int emp_id;
	char emp_name[20];
	float emp_sal;

	struct Employee *next;
}Emp;

void main(){

	Emp *emp1=(Emp *)malloc(sizeof(Emp));

	Emp *emp2=(Emp *)malloc(sizeof(Emp));

	Emp *emp3=(Emp *)malloc(sizeof(Emp));

	Emp *head=emp1;

	//give data method 1
	emp1->emp_id=101;
	strcpy(emp1->emp_name,"Rohan");
	emp1->emp_sal=65432.543;

	emp1->next=emp2;

	// method 2
	//
	(*emp2).emp_id=102;
	strcpy((*emp2).emp_name,"Ganesh");
	(*emp2).emp_sal=67890.32;
	
	emp2->next=emp3;

	//method 3
	
	head->next->next->emp_id=103;
	strcpy(head->next->next->emp_name,"yogesh");
	head->next->next->emp_sal=43533.54;

	emp3->next=NULL;

	//printing the data
	
	printf("%d\n",emp1->emp_id);
	printf("%s\n",emp1->emp_name);
	printf("%f\n",emp1->emp_sal);


 	
	printf("%d\n",emp2->emp_id);
	printf("%s\n",emp2->emp_name);
	printf("%f\n",emp2->emp_sal);


	printf("%d\n",emp3->emp_id);
	printf("%s\n",emp3->emp_name);
	printf("%f\n",emp3->emp_sal);

}
	
	


