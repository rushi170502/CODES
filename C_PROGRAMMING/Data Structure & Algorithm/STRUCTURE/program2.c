//
//
// Structure using pointer....
//
#include<stdio.h>

struct Movie{

	int t_count;
	char m_name[20];
	float m_idmb;

}obj1={20,"Kantara",9.2};

void main(){

	typedef struct Movie mv;

	mv obj2={15,"Sairat",8.5};

	struct Movie *ptr1= &obj1;

	mv *ptr2 = &obj2;// alternate option because of typedef we use both optins that are allowed

	// Print the data
	
	printf("%d\n",(*ptr1).t_count);
	printf("%s\n",(*ptr1).m_name);
	printf("%f\n",(*ptr1).m_idmb);

	//Another method for printing..
	//
	//  (*ptr).m_name
	//       ||  
	//  ptr->m_name
	//
	//  both are same 
	
	printf("%d\n",ptr2->t_count);
	printf("%s\n",ptr2->m_name);
	printf("%f\n",ptr2->m_idmb);

}


