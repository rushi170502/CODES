/* WAP to print following program..
 
   a   B   c   D
   b   C   d   E
   c   D   e   F
   d   E   f   G

  */
#include<stdio.h>
void main(){
  int rows;
  printf("Enter the no. of rows :  ");
  scanf("%d",&rows);
   char ch1='a';
   char ch2='B';

   for(int i=1;i<=rows;i++){

     for(int j=1;j<=rows;j++){

       if(j%2==0){
         printf("%c\t",ch2);
         ch2=ch2+2;
        
       }
       else{
         printf("%c\t",ch1);
         ch1=ch1+2;
        }
      }
     ch1='a';
     ch2='B';
     ch2=ch2+i;
     ch1=ch1+i;
     printf("\n");
  }
  printf("\n\n");

}
