#include <stdio.h>

int fun(int n){
   if(n == 0)
   return 0 ;
   
   printf("%d\n", n%2);
   fun(n/2);

}
void main(){
     fun(25);
}