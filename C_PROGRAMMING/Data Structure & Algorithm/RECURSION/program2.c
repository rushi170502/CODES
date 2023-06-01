// Consider the following recursive function fun(x,y) what is the value of fun(4,3) . Guess the o/p?

#include<stdio.h>

int fun(int x,int y){

	if(x == 0)
		return y;

	return fun(x-1,x+y);
}
void main(){

	int x = 4,y =3;
	
	int ret = fun(x,y);
	printf(" y = %d\n",ret);
}
