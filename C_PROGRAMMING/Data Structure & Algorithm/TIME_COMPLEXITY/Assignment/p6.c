
#include <stdio.h>

int fun(int n){
    if(n == 0 || n == 1) 
        return n;

    if( n % 3 != 0)
        return 0;

        return fun(n/3);

}
void main(){
     printf("%d \n",fun(10));
}