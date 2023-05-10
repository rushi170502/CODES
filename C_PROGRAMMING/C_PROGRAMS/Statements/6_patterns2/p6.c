/* WAP ro print pattern as folows..
   =  =  =  =
   $  $  $  $
   =  =  =  =
   $  $  $  $

*/

#include<stdio.h>
void main()
{
  int rows;
  printf("Enter the no. of rows : ");
  scanf("%d",&rows);

  for(int i=1;i<=rows;i++)
  {
     for( int j=1;j<=rows;j++)
     {
       if(i%2==1)
       {
         printf("= \t");
       }
       else
       {
         printf("$ \t");
       }
    }
     printf("\n");
  }
 printf("\n\n");
}
