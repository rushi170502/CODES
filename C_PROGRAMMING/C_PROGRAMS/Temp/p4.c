// program to see the o/p of program of user defined function and main functions..
//

#include<stdio.h>
int a=10;
void fun(){
  int x=20;
  printf("\n In function");

}
 void main(){

   int y=30;
   int x=20;
   printf("\n Start main function..");
   printf("\n a: %d \n x: %d \n y: %d\n",a,x,y);

   fun();
   printf("\n End main function..");
 }


