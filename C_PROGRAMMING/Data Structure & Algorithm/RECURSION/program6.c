
// Q . What does the function do?

#include<stdio.h>

int fun (unsigned int n){

	if( n == 0 || n == 1)
		return n;

	if(n % 3 != 0)
		return n;


	return fun(n/3);
}
void main(){

	int n = 0;

	int ret = fun(n);
	printf("%d\n",ret);

}
//
//o/p :
//
// b. it returns 1 when n is power of 3, otherwise return 0
