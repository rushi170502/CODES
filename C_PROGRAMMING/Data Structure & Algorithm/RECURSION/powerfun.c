
// power of given number in optimize way using recursion

#include<stdio.h>

int powerFun(int a, int N){

    if(N == 0)
        return 1;
    if(N%2 == 0)
        return powerFun(a, N/2) * powerFun(a, N/2);
    else
        return powerFun(a, N/2) * powerFun(a, N/2) * a;

}

void main(){

    int a = 2,  N = 5;

    int power = powerFun(a,N);
    printf("power of %d ^ %d  = %d\n", a ,N , power);
}