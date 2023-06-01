
// WAP to print the data of movie using the functions on heap sections..
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct movie{

	int t_count;
	char m_name[20];
	float m_rating;

	struct movie *next;

}mv;

void getdata(mv *ptr){

  	 scanf("%d",&ptr->t_count);
  	 scanf("%s",ptr->m_name);
  	 scanf("%f",&ptr->m_rating);

}
void putdata(mv *ptr1){

	printf("%d\n",ptr1->t_count);
	printf("%s\n",ptr1->m_name);
	printf("%f\n\n",ptr1->m_rating);
 	
}


void main(){

	mv * m1=(mv *)malloc(sizeof(mv));
	mv * m2=(mv *)malloc(sizeof(mv));
	mv * m3=(mv *)malloc(sizeof(mv));

	printf("\nEnter the data: \n");
	getdata(m1);
	 getdata(m2);
	 getdata(m3);

	printf("Entered data is...:   \n\n");

	 putdata(m1);
	 putdata(m2);
	 putdata(m3);
    
/*	m1->t_count=1000;
	strcpy(m1->m_name,"kantara");
	m1->m_rating=8.6;

	printf("%d\n",m1->t_count);
	printf("%s\n",m1->m_name);
	printf("%f\n",m1->m_rating);

*/
	}

