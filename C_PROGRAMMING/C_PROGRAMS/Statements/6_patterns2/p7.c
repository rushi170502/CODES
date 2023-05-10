/* WAP to print the pattern ..
 
   1    2    3    4
   25   36   49   64
   9    10   11   12
   169  195  225  256
i*/

#include<stdio.h>
void main()
{
  int rows,num;
  printf("Enter the no. of rows  : ");
  scanf("%d",&rows);
  num=rows;
  num=1;
  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=rows;j++)
    { 
       if(i%2==1)
      { 
        printf("%d\t",num);
        num++;
       }
       else
       {
         printf("%d\t",num*num);
         num++;
       }
    }
    printf("\n");
  }
 printf("\n\n");
}

