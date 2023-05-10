/*WAP to print the pattern...
 3  2  1
 c  b  a
 3  2  1
 c  b  a
*/

#include<stdio.h>
void main()
{
  int rows;
  char ch1;
  printf("Enter the no. of rows : ");
  scanf("%d",&rows);
  for( int i=1;i<=rows;i++)
  {
    ch1=95+rows;
    for(int j=rows-1;j>=1;j--)
    {
      if(i%2!=0)
       {
         printf("%d\t",j);
       }
      else
      {
        printf("%c\t",ch1);
        ch1--;
      }
    }
    printf("\n");
  }
  printf("\n\n");
}
