

/*
  WAP to print the pattern...

     4  3  2  1
     5  4  3  2
     6  5  4  3
     7  6  5  4


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
      num--;

     }
     num++;
     num=num+rows;
     printf("\n");
   }
  printf("\n");
}


