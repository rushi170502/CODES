
// program for leap year
//
#include<stdio.h>
void main()
{
  int year;
  
  printf("\n Enter the year: ");
  scanf("%d",&year);

  if(year%4==0 && year%100==1 )
  {
    printf("\n %d is leap year..",year);

  }

  else
  {
    printf("\n %d is not leap year..",year);
  }
}
