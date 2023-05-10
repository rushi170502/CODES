/* WAP to print pattern as..
   D  C  B  A
   e  d  c  b
   F  E  D  C
   g  f  e  d
*/
#include<stdio.h>
void main()
{
  int rows;
  char ch1,ch2;
  printf("Enter the no. of rows  : ");
  scanf("%d",&rows);
  ch1= 64 + rows;
  ch2= 94 + rows;

  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=rows;j++)
    {
      if(i%2 !=0)
      {
        printf("%c\t ",ch1);
        ch1--;
      }
      else
      {
        printf("%c\t ",ch2);
        ch2--;
      }
    }
    ch1=ch1+3;
    ch2=ch2+3;
    printf("\n");
  }
  printf("\n\n");
}
