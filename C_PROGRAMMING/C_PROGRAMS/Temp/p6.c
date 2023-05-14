
// program for pre-increment 
//
#include<stdio.h>
  void main()
{
   int x=5,output;
   printf("\n %d ",x); //5
   printf("\n %d ",output); //0

   output = ++x;//x+1

   printf("\n %d",x); //6
   printf("\n %d\n",output);  //6

}
