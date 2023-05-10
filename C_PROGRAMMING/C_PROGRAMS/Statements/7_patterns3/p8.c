/*  WAP to print the pattern...
 
     16   15   14   13
     L    K    J    I
     8    7    6    5
     D    C    B    A
*/

#include<stdio.h>
void main(){
  int rows;
  printf("Enter the no. of rows :  ");
  scanf("%d",&rows);
  int num=rows*rows;
  char ch=64 + num;
  for(int i=1;i<=rows;i++){
  
    for(int j=1;j<=rows;j++){
      if(i%2==0){
       printf("%c\t",ch);
       ch--;
       num--;

      }
      else{
       printf("%d\t",num);
       num--;
       ch--;
       }
    }
   
     printf("\n");
     
  }
  printf("\n\n");
}

