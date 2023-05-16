
/* Write a Program that searches for the first occurrence of a particular element from a singly linear linked list.
 
   	Input linked list:: |10|->|20|->|30|->|40|->|50|->|30|->|70|
	Input: Enter Element: 30
	Output: 3 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{

	int data;
	struct Node * next;
}Node;

/*typedef struct String {
	
	char name[20];
	struct String * next;
}str;*/

Node * head = NULL;
Node * createNode(){

	Node * newNode = (Node*) malloc(sizeof(Node));

	printf("\nEnter Data:: ");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode() {

	Node * newNode = createNode();

	if(head == NULL) {

		head = newNode;
	}
	else {
		Node * temp = head;

		while(temp->next != NULL) {

			temp = temp -> next;
		}
		temp->next = newNode;
	}

}

int countNode() {

	Node * temp = head;
	int count = 0;

	while(temp != NULL) {
		
		count++;
		temp = temp->next;
	}

	return count;
}

void check1stOccur() {

	int key, count = 0, flag = 0;

	printf("\nEnter number to find in linked list:: ");
	scanf("%d", &key);

	if(head == NULL) {

		printf("\nEmpty linked list..");
	}
	else {
		Node * temp = head;

		while(temp != NULL) {
			
			count++;
			if(temp->data == key) {
				
				flag = 1;
				break;
			}

			temp = temp->next;
		}

		if(flag == 0) {

			printf("\nElement not Found..");
		}
		else{
			printf("\nFirst occurrence of %d is at Node %d", key, count);
		}
	}
}

void check2ndOccur() {

	int key, count = 1, flag = 0, occur1 = 0, occur2 = 0;

	printf("\nEnter number to find in linked list:: ");
	scanf("%d", &key);

	if(head == NULL) {

		printf("\nEmpty linked list..");
	}
	else {
		Node * temp = head;

		while(temp != NULL) {
			
			if(temp->data == key) {
				
				flag = 1;
				occur2 = occur1;
				occur1 = count;
			}
			count++;

			temp = temp->next;
		}

		if(flag == 0) {

			printf("\nElement not Found..");
		}
		else{
			printf("\nLast Second Occurrence of %d is at Node %d", key, occur2);
		}
	}
}

int checkNo() {

	Node * temp = head;
	int count = 0, key, flag = 0;

	printf("\nEnter element to check how many times it occurred in linked list:: ");
	scanf("%d", &key);
	
	if(head == NULL) {

		printf("\nEmpty Linked List");
	}
	else {
			
		while(temp != NULL) {
		
			if(temp -> data == key) {

				flag = 1;
				count++;
			}
			temp = temp->next;
		}
	}
	if(flag == 0) {

		printf("\nElement Not found." );
	}
	else {
		printf("\n%d is found %d times", key, count);
	}
}

void printLL() {

	Node * temp = head;
	
	if(head == NULL) {

		printf("\nLinked List is Empty or ");
	}
	else {
		
		while(temp != NULL) {

			printf("|%d|--->", temp->data);

			temp = temp->next;
		}
	}
	printf("NULL\n");
}

void changeData() {

	Node * temp = head;
	int count = 0, rem, num1 = 0;
	
	if(head == NULL) {

		printf("\nEmpty Linked List");
	}
	else {
			
		while(temp != NULL) {
			num1 = 0;
			while(temp -> data != 0) {

				rem = temp->data % 10;
				num1 = num1 + rem;
				temp->data = temp->data/10;
			}

			temp->data = num1;
			temp = temp->next;
		}
		printLL();
	}
}


void printFromLen() {

	Node * temp = head;
	int len;

	printf("\nEnter Length of string:: ");
	scanf("%d", &len);
	
	if(head == NULL) {

		printf("\nLinked List is Empty or ");
	}
	else {
		
		while(temp != NULL) {

			printf("|%d|--->", temp->data);

			temp = temp->next;
		}
	}

	printf("NULL\n");

}


void main() {

	int ch;

	while(1) {
		
		printf("\n\n\t!!***** M E N U ******!!");
		printf("\n\t1.addNode");
		printf("\n\t2.countNode");
		printf("\n\t3.check First Occurrence");
		printf("\n\t4.Check Second Last Occurrence");
		printf("\n\t5.check how many times element occured");
		printf("\n\t6.Sum of digit and print sum in linked list");
		printf("\n\t7.Print data from length");
		printf("\n\t8.Print Linked List");
		printf("\n\t9.Exit\n");

		printf("\nEnter Your Choice:: ");
		scanf("%d", &ch);

		switch(ch) {

			case 1:
				{
					int nodeCount;
					printf("\nEnter no. of nodes you want to create:: ");
					scanf("%d", &nodeCount);

					for(int i = 1; i <= nodeCount; i++) {
						addNode();
					}
					printf("%d nodes added...",nodeCount);
				}
				break;

			case 2:
				int count = countNode();
				printf("\nTotal no. of nodes in linked list = %d", count);
				break;

			case 3:
				check1stOccur();
				break;

			case 4:
				check2ndOccur();
				break;

			case 5:
				checkNo();
				break;
				
			case 6:
				changeData();
				break;

			case 7:
				printFromLen();
				break;
				
			case 8:
				printLL();
				break;

			case 9:
				exit(0);
				break;

			default:
				printf("\nWrong choice");
		}
	}
}

	

