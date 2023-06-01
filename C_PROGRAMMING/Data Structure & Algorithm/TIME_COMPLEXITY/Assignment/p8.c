
// Addition of digits of a given number

#include<stdio.h>
int add(int x, int y){

    if( x > 0)
        return (x % y + add(x/y , y));
    else
        return 0;
}

void main(){

    int x = 345 , y = 10;
    printf("%d\n", add(x, y));
}