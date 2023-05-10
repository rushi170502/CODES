
/*   WAP to print pattern ...

     3    b    1    d
     a    2    c    0
     3    b    1    d
     a    2    c    0
*/
#include<stdio.h>
void main()
{
  int rows;
  printf("Enter the no. of rows :  ");
  scanf("%d",&rows);

  for(int i=1;i<=rows;i++){
    char ch='a';
    int num=rows;

    for(int j=rows;j>=1;j--){
      if(i%2!=0){

         if(j%2==0){

           printf("%d\t",--num);
           num--;
           ch++;
         }
         else{
           printf("%c\t",ch);
           ch++;
          }
      }
      else{
         if(j%2==0){
           printf("%c\t",ch);
           ch=ch+2;
         }
         else{
           num=num-2;
           printf("%d\t",num);
         }
      }
    }
    printf("\n");
  }
  printf("\n");
}
