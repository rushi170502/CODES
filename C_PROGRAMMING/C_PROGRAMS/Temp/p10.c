
// program to see o/p of post increment...
//
#include<stdio.h>
void main()
{
  int x=5,ans;

  printf("\n %d ",x);// x=5
  printf("\n %d ",ans);//ans=0

  ans= x++ + x++; // ans= 5+6=11
 
  printf("\n %d ",x);//x=7
  printf("\n %d \n",ans);// ans=11

}
