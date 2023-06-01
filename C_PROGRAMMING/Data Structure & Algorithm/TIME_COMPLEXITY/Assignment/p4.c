#include <stdio.h>

int fun(int x , int y){
    if(y == 0)
    return 0;
    
    return (x + fun(x, y-1));
}
void main(){
     printf("%d \n ",fun(4,3));
}
// relation between x & y is multiplication 
// x = 4 , y = 3 o/p : 12