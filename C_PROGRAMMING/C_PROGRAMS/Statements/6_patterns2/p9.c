/* WAP to print pattern as folows..
 
   0   3   8
   15  24  35
   48  63  80
*/

#include<stdio.h>
void main()
{
  int rows,num=0,temp=0,res=0;
  printf("Enter the no. of rows : ");
  scanf("%d",&rows);

  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=rows;j++)
    {
      if(num!=0)
      {
        res=temp+num;
        printf("%d \t",res);
        temp=res;
        num=num+2;
      }
      else if(num==0)
      {
        printf("%d\t",res);
        num=num+3;
      }
    }
    printf("\n");
  }
  printf("\n\n");
}
