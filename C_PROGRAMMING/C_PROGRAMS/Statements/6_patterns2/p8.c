/* WAP to print pattern as follows....
 
   18  16  14
   12  10  8
   6   4   2
*/

#include<stdio.h>
void main()
{
  int rows;
  printf("Enter the no. of rows : ");
  scanf("%d",&rows);
  int num=18;
  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=rows;j++)
    {
      printf("%d\t",num);
      num=num-2;
    }
    printf("\n");
  }
  printf("\n\n");

}

