/*WAP to print pattern
  A  B  C
  D  E  F
  G  H  I
*/

#include<stdio.h>
void main()
{
  char ch='A';
  int rows;
  printf("Enter the rows : ");
  scanf("%d",&rows);
  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=4;j++)
    {
      printf(" % c",ch);
      ch++;

    }
    printf("\n");
  }
}
