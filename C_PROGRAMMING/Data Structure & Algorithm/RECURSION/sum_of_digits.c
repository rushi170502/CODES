
// Q. What is the return value of function if fun(345,10)
// // Code of sum of digits


#include<stdio.h>

int foo(int n, int r){

	if(n > 0)// recursive function call
		return (n%r+ foo(n/r,r));
	else
		return 0;

}
void main(){

	int x = 3459, y = 10;

	int ret = foo(x,y);
	printf("sum  =  %d \n\n",ret);
}
