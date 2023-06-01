
//

#include <stdio.h>

int fun(int x , int y){
    if(x == 0)
    return y;
    else
    return fun(x-1 , x + y);
}
void main(){
     printf("%d \n ",fun(4,3));
}