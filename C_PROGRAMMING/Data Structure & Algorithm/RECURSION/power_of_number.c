
// power of a given number using recursion
#include<stdio.h>

int powerNumber(int number, int power){

    if(power == 1) 
        return number;
    
    return number * powerNumber( number, power-1 );

}

void main(){

    int retval  = powerNumber(2,5);
    printf("Answer = %d\n", retval);
 }