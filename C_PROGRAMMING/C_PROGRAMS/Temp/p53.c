//
//Write a program to scan marks from users and add it and store in variable using for loop
//
#include<stdio.h>
void main()
{
   int i, j, marks=0;

   for(i=1; i<=5; i++)
   {
     printf("\n Enter the sub%d marks  :",i);
     scanf("%d",&j);
     marks= marks+j;

  }
   printf("\n Total marks: %d\n\n",marks);

}
