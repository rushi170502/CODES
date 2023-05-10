/*  WAP to print the pattern..
 
    4   a   3   b
    4   a   3   b
    4   a   3   b
    4   a   3   b
*/
#include<stdio.h>
void main(){

  int rows,num=0;
  printf("Enter the no. of rows  : ");
  scanf("%d",&rows);
 // num=rows;
  char ch='a';

  for(int i = rows;i >= 1; i--){
        num=rows;
        ch='a';
      for( int j= 1;j<= rows; j++){
        if(j%2==0){
          printf("%c \t",ch);
          ch++;
        }
        else{
          printf("%d \t",num);
          num--;
        }
      }

    printf("\n");
  }
}



