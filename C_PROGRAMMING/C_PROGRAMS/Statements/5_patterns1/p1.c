
/* WAP to print pattern

     1  2  3  4
     2  3  4  5
     3  4  5  6
     4  5  6  7

*/

#include<stdio.h>
void main()
{
  int rows,num=1;
  printf("\nEnter the rows : ");
  scanf("%d",&rows);

  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=rows;j++)
    {
      printf("%d  ",num);
      num++;
    }
    num=i+1;
    printf("\n");
    

  }

}
