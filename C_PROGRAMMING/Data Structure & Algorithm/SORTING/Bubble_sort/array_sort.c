
// WAP to sort the strings of array in which sort the array sort by their no. of characters...
//
#include<stdio.h>
#include<string.h>

int count(char str[]){

	int cnt=0; 
	while(*str != '\0'){
		cnt++;
		*str++;
	}
	return cnt;

}

int sortArray(int size, char str[][50]){

	char temp[50];

	for(int i = 0;i<size;i++){

		for(int j = 0; j<size-i-1;j++){

			int str1 = count(str[j]);
			int str2 = count(str[j+1]);

			if(str1> str2){

				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	}

}


void main(){

	int size;

	printf("\nEnter the size of array  : ");
	scanf("%d",&size);

	char str[size][50];

	printf("\nEnter the strings :  \n");

	for(int i = 0;i<size;i++){

		scanf("%s",str[i]);
		getchar();
	}

	
	printf("\nArray before of sorting :  \n");
	for(int i= 0; i < size ; i++){
		printf(" %s    ",str[i]);
	}

	sortArray(size,str);


	printf("\nArray after of sorting :  \n");
	for(int i= 0; i < size ; i++){
		printf(" %s    ",str[i]);
	}

	

}
