
#include <stdio.h>

int fun(int x ){
    if(x <= 1)
        return 1;
    
    if(x % 2 == 0)
        return (x / 2);

    return fun(x / 2) + fun(x/2 + 1);
}
void main(){
     printf("%d \n ",fun(15));
}