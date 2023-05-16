// Approch 1: find midnode of LL by by dividing the linkedlist 2: then we can find midnode;
//
// Approach 2: find midnode by using the two pointers i.e fast pointer & slow pointer..
// in which fast pointer skips one node and slow pointer traverse one by one...
//
//


#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
}node;

node *head = NULL;
int flag1 =0;
int flag2=0;

int countnode(){

	int count=0;
	node *temp= head;
	while(temp != NULL){
		count++;
		temp=temp->next;
	}

	return count;
}

node *createnode(){

	node *newnode = (node*)malloc(sizeof(node));

	printf("\nEnter the data : ");
	scanf("%d",&newnode->data);

	newnode->next =NULL;
}


int addnode(){

	node *newnode = createnode();

	if(head == NULL){
		head=newnode;
	}
	else{
		node *temp=head;

		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next = newnode;
	}

   
	return 0;

}

int findmidnode1(){

	if(head == NULL){
		flag1 = 0;
		return -1;
	}
	else{

		int count= countnode()/2;// 
		count+=1;// count = count+1
		 flag1 = 1;
		node *temp=head;

		while(count-1){

			temp=temp->next;
			count--;
		}

        	return temp->data;// we can also return the node as per requirement..
	}
}

int findmidnode2(){

	if(head == NULL){
		int flag2 =0;
		return -1;
	}
	else{

		node *fastptr=head;// if we need to find first mid node then we declare fastptr=head->next.. 
		node *slowptr= head;

		flag2 =1;

		while(fastptr != NULL && fastptr->next != NULL){
			fastptr = fastptr->next->next;
			slowptr = slowptr->next;

		}

		return slowptr->data;
	}

}





int printSLL(){

	if(head == NULL){
		printf("\nlinked list is empty...\n");
	}else{
		node *temp=head;
		while(temp != NULL){
			printf("| %d |-->",temp->data);
			temp=temp->next;

		}
		printf("NULL\n\n");
	}

}
void main(){

	int ch;

	while(1){

		printf("\t!!**********M E N U**********!!\n");
		printf("\tPress 1: addnode\n");
		printf("\tPress 2: findmidnode by approach 1\n");
		printf("\tPress 3: findmidnode by approach 2\n");
		printf("\tPress 4: countnode\n");
		printf("\tPress 5: PrintSLL\n");
		printf("\tPress 6: exit\n\n");

		printf("\nEnter the choice :  ");
		scanf("%d",&ch);

		switch(ch){

			case 1:
				{
					int nodes;
					printf("\nEnter the no. of nodes u want to add  :  ");
					scanf("%d",&nodes);

					for(int i=1;i<=nodes;i++){
						addnode();
					}
					printf("\n%d nodes added...\n",nodes);

				}

				break;

			case 2:{
				       int data = findmidnode1();
				       if(flag1 == 0){
					       printf("\nLinked list is empty..\n");
				        }else{
						printf("Mid node data is %d \n",data);
					}
			       }
			       break;


			case 3:{
				       int data = findmidnode2();
				       if(flag2 == -1){
					       printf("\nLinked list is empty..\n");
				        }else{
						printf("Mid node data is %d \n",data);
					}
			       }
			       break;



			case 4:
				{
					int count=countnode();
					printf("\n node count is %d \n\n",count);
				}
				break;

			case 5:
				{
					printf("\n");
					printSLL();

				}
				break;

			case 6:
				exit(0);

			default:
				printf("\nWrong choice...\n");

		}

	}
}
