/* WAP to print following pattern..
   
   D4  C3  B2  A1
   D4  C3  B2  A1 
   D4  C3  B2  A1 
   D4  C3  B2  A1
*/

#include<stdio.h>
void main()
{
  int rows,num;
  printf("Enter the rows : ");
  scanf("%d",&rows);
  num=rows;

  for(int i=1;i<=rows;i++)
  {
    char ch2=64+rows;
    for(int j=rows;j>=1;j--)
    {
     printf("%c%d\t",ch2,j);
     ch2--;
    }
    printf("\n");
  }
  printf("\n\n");

}
