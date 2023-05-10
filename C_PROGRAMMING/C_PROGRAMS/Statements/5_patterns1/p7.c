/* WAP to print pattern as..
  1   2   9   4
  25  6   49  8
  81  10  121 12
  169 14  225 16

*/

#include<stdio.h>
void main()
{
  int rows,num=1;
  printf("Enter the rows : ");
  scanf("%d",&rows);

  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=4;j++)
    {
      if(j%2==0)
      {
        printf(" \t%d ",num);
        
      }
      else
      {
        printf(" \t%d  ",num*num);
      }
      num++;
    }
     printf("\n");
  }
}
