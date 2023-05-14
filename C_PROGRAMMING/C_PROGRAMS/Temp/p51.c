 // Program for printing the sentence no. of times given by users by start and end .....
 
#include<stdio.h>
 void main()
{
   int start;
   int end;

   printf("\n Enter the number you want to start and end:\n\n");
   scanf("%d",&start);
   scanf("%d",&end);

   for(int i=start ; i<=end ; i++)
   {
     printf("%d : Rushi Birari\n",i);
   }
}
