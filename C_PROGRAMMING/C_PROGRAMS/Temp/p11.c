
// program to see o/p of post increment...
//
#include<stdio.h>
void main()
{
  int x=8,ans;

  printf("\n %d ",x);// x=8
  printf("\n %d ",ans);//ans=0
/*
  ans= x++ + x++;
 
  printf("\n %d ",x);//x=
  printf("\n %d \n",ans);// ans=
  */
  //int x=8;
  ans= x++ + ++x;
     
  printf("\n %d ",x);//x=
  printf("\n %d \n",ans);//ans=
/*  
  ans= ++x + ++x + ++x; 
  
  printf("\n %d ",x);//x=
  printf("\n %d \n",ans);//ans=
    
  ans= ++x + ++x + ++x + ++x;

  printf("\n %d ",x);//x=
  printf("\n %d \n",ans);//ans=
  
  ans= x++ + x++ + x++;

  printf("\n %d ",x);//x=
  printf("\n %d \n",ans);//ans=
  */
}
