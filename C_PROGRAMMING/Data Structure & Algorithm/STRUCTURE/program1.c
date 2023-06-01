

// Simple pointer structure...
//
#include<stdio.h>

void main(){

	char carr[]={'A','B','C','D','E'};

	char *cptr=carr;

	int *iptr=carr; // warning

	printf("%c\n",*cptr);
	printf("%c\n",*iptr);

	cptr++;//
	       //cptr++
	       //*(100+1*sizeof(DTP))
	       //*(100+1*1)
	       //*(101)
	       //ValueAt(101)
	       //=B
	
	iptr++;// iptr++
	       // *(100+1*sizeof(DTP))
	       // *(100+1*4)
	       // *(104)
	       // ValueAt(104)
	       // =E

	printf("%c\n",*cptr);//B
	printf("%c\n",*iptr);//E

}

