
/*   WAP to print the following pattern,,,,
 
     1    4     27
     4    27    16
     27   16    125

  */

#include<stdio.h>
void main(){
  int rows;

  printf("Enter the no. of rows : ");
  scanf("%d",&rows);
  int num=1;
  int temp=num;
  for(int i=1;i<=rows;i++){

     for(int j=1;j<=rows;j++){
       if(num%2==0){
         printf("%d\t",num*num);
       }
       else{
         printf("%d\t",num*num*num);
        }
       num++;
     }
     
     num=temp+i;
     printf("\n");
    }
printf("\n\n");
}
