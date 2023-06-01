

#include <stdio.h>
int fun(int n){
    if(n > 4000)
        return 0;
    
    printf("%d\n", n);
    fun( 2 * n);
    printf("%d\n", n);
}
void main(){
     fun(1000);
}