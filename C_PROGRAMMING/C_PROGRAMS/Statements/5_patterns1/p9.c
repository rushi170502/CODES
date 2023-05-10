/* WAP to print the pattern ...
 
   2     5     10
   17    26    37
   50    65    82

*/

#include<stdio.h>
void main()
{
  int rows,num=1,temp=1,res=0;
  printf("Enter the rows : ");
  scanf("%d",&rows);

  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=rows;j++)
    {
      res=temp+num;
      printf(" \t%d ",res);
     temp=res;
     num=num+2;
    }
    printf("\n");
  }
}
      
