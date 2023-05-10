/*
  WAP to print the pattern...

     4  4  4  4
     3  3  3  3
     2  2  2  2 
     1  1  1  1

    */

#include<stdio.h>
void main()
{
  int i,j,rows,num;
  printf("Enter the no. of rows  :  ");
  scanf("%d",&rows);
  num=rows;

  for(i=1;i<=rows;i++)
  {
     for(j=1;j<=rows;j++)
     {
       printf("%d \t",num);
     }

     num--;
     printf("\n");
   }
  printf("\n");
}


