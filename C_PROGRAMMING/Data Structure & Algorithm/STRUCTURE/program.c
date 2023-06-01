
// Sample program of structure...
//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 struct cric_player{

	int jer_no;
	char p_name[20];
	float p_avg;
	
} obj1={18,"Virat",52.45};

void main(){

	 struct cric_player obj2;
	 obj2.jer_no=45;
	 strcpy(obj2.p_name,"Rohit");
	 obj2.p_avg=37.56;

	 printf("%d\n",obj1.jer_no);
	 printf("%s\n",obj1.p_name);
	 printf("%f\n",obj1.p_avg);
	printf("\n\n");	
	 printf("%d\n",obj2.jer_no);
	 printf("%s\n",obj2.p_name);
	 printf("%f\n",obj2.p_avg);
}
