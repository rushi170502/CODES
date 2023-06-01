
// Sum of N digits of the given number

#include<stdio.h>
int sum(int n, int x){
    if(n > 0)
        return (n % 10 + sum (n / 10, x));
    else
        return 0;
}
void main(){
    int num = 12345 , x = 10;
    printf("Sum of digits of number : %d\n",sum(num,x));
}