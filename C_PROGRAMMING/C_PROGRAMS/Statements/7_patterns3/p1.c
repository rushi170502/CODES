/*
 *  WAP to print pattern...
   
     1    2    3    4
     1    3    5    7
     1    4    7    10
     1    5    9    13

    */


#include<stdio.h>
void main()
{
  int rows;

  printf("Enter the no. of rows : ");
  scanf("%d",&rows);
  int num=rows;
  for(int i=1;i<=rows;i++)
  {
    num=1;
    printf("%d \t",num);
    for(int j=1;j<=rows-1;j++)
    {
       num=num+i;
       printf(" %d\t ",num);
    }
  printf("\n");

  }
}
