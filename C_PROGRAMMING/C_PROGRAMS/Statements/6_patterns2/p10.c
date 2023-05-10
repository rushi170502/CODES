/*
 * WAP to print pattern as follows..
  
   D4  C3  B2  A1
   A1  B2  C3  D4
   D4  C3  B2  A1
   A1  B2  C3  D4
*/
#include<stdio.h>
void main()
{
  int rows,num;
  char ch1,ch2;
  printf("Enter the no. of rows : ");
  scanf("%d",&rows);
  num=rows;
  for(int i=1;i<=rows;i++)
  {
    ch2='A';
    ch1= 64+rows;
    num=1;

    for(int j=rows;j>=1;j--)
    {
      if(i%2!=0)
      {
        printf("%c%d \t",ch1,j);
        ch1--;
      }
      else
      {
        printf("%c%d \t",ch2,num);
        num++;
      
      }
    }
    printf("\n");
  }
  printf("\n\n");
}


