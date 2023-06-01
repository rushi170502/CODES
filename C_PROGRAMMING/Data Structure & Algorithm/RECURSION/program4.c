
//  Q. What does the following function does?
//  x = 3, y = 4;

#include<stdio.h>

int fun(int x, int y){

	if(y == 0)
		return 0;

	// recursive function
	// relation between x & y is (x * y)
	return (x + fun(x,y-1));
}
void main(){

	int x = 3,y = 5;

	int ret = fun(x,y);
	printf("%d \n",ret);

}
