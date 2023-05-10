
/* WAP to print following pattern..
 *
   1   3   5
   7   9   11
   13  15  17

*/

#include<stdio.h>
void main()
{
  int rows,num=1;
  printf("Enter the rows : ");
  scanf("%d",&rows);

  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=rows;j++)
    {
        printf(" \t%d",num);
        num=num+2;
    }
    printf("\n");
  }
}
