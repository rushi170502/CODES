/* WAP to print pattern..
   
   I  H  G
   F  E  D
   C  B  A
*/

#include<stdio.h>
void main()
{
  char ch;
  int rows;
  printf("Enter the rows : ");
  scanf("%d",&rows);
  ch = 64 + rows * rows;

  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=rows;j++)
    { 
      printf("%c \t ",ch);
      ch--;
    }
    printf("\n\n");
  }
}
