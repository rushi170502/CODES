/* WAP to print the pattern as follow..
 
   =   =   =   =   =
   $   $   $   $   $
   @   @   @   @   @
   =   =   =   =   =
   $   $   $   $   $
   @   @   @   @   @

   */
#include<stdio.h>
void main(){
  int rows;
  printf("Enter the no. of rows : ");
  scanf("%d",&rows);
  for(int i=1;i<=rows;i++){

    for(int j=1;j<=rows;j++){
    if((i+j)%3==0){
      printf("$\t");
    }
    else if((i+j)%3==0){ 
    printf("$\t");
    }
    else if(i%3==0){
      printf("@\t");
  
    }

 // printf("\n");
 }
  printf("\n\n");

  }
}
