
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee{

	int emp_id;
	char emp_name[30];
	float emp_sal;

	struct Employee *next;// self referencial structure it is same as structure.. 
			      // it stores the address of next information which is like as itself..

}Emp;

void main(){

	Emp obj1,obj2,obj3;

	Emp *head=&obj1;

	obj1.emp_id=1;
	strcpy(obj1.emp_name,"Rahul");
	obj1.emp_sal=123343.32;

	obj1.next=&obj2;// storing the address of next structure..

	obj2.emp_id=2;
	strcpy(obj2.emp_name,"Rushi");
	obj2.emp_sal=654311.12;

	obj2.next=&obj3;// storing the address of next structure
			//
	obj3.emp_id=3;
	strcpy(obj3.emp_name,"Pavan");
	obj3.emp_sal=876534.32;

	obj3.next=NULL;




	// printing the data...
	//
	printf("%d\n",head->emp_id);
	printf("%s\n",head->emp_name);
	printf("%f\n",head->emp_sal);


	printf("%d\n",obj1.next->emp_id);
	printf("%s\n",obj1.next->emp_name);
	printf("%f\n",obj1.next->emp_sal);

	printf("%d\n",obj2.next->emp_id);
	printf("%s\n",obj2.next->emp_name);
	printf("%f\n",obj2.next->emp_sal);


}
