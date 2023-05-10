
/* WAP to print pattern
   A  B  C  D
   B  C  D  E
   C  D  E  F
   D  E  F  G

*/


#include<stdio.h>
void main()
{
  int rows;
  char ch1='A', ch2 =ch1;
  printf("\nEnter the rows : ");
  scanf("%d",&rows);

  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=rows;j++)
    {
      printf(" %c  ",ch2);
      ch2++;
    }
    ch1++;
    ch2=ch1;
    printf("\n");
  
  }

}
