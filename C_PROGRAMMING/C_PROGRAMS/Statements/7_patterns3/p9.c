/*  WAP to print the pattern of fibonacci series..
 
    0    1    1    2 
    3    5    8    13
    21   34   55   89
    144  233  377  610
*/


 #include<stdio.h>
void main(){
  int rows;
  printf("Enter the no. of rows : ");
  scanf("%d",&rows);

  int n1=0,n2=1,res=0,temp=0;
  for(int i=1;i<=rows;i++){

    for(int j=1;j<=rows;j++){

      printf("%d\t",n1);
          n2=n1+n2;
          n1=n2-n1;

    }
    printf("\n");
  }
  printf("\n\n");
}
