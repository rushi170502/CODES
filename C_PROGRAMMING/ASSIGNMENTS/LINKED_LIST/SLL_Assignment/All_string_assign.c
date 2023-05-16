// All string functions such as reverse the string , find equal length of string and deletion functions on linked list..


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct String {
	
	char name[20];
	struct String * next;
}Node;

Node * head = NULL;

Node * createNode(){

	Node * newNode = (Node*) malloc(sizeof(Node));
	
	getchar();
	printf("\nEnter Name:: ");
	scanf("%[^\n]",newNode->name);	

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
	printf("Node added successfully.");
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


void printLL() {

	Node * temp = head;
	
	if(head == NULL) {

		printf("\nLinked List is Empty or ");
	}
	else {
		
		while(temp != NULL) {

			printf("|%s|--->", temp->name);

			temp = temp->next;
		}
	}
	printf("NULL\n");
}

void printFromLen() {

	Node * temp = head;
	int len;

	printf("\nEnter Length of string:: ");
	scanf("%d", &len);
	
	printf("\n");

	if(head == NULL) {

		printf("\nLinked List is Empty");
	}
	else {
		
		while(temp != NULL) {

			if(strlen(temp->name) == len) {

				printf("%s\n", temp->name);
			}
			temp = temp->next;
		}
	}
}

char * mystrrev(char *str) {

	char * temp = str;
	
	while(*temp != '\0') {
		temp++;
	}

	temp--;
	char x;

	while(str < temp ) {

		x = *str;
		*str = *temp;
		*temp = x;

		str++;
		temp--;
	}

	return str;
}

void dataRev() {

	if(head == NULL) {

		printf("\nLinked list is empty or");
	}
	else {

		Node * temp = head;

		while(temp != NULL) {

			mystrrev(temp->name);
			printf("|%s|-->", temp->name);
			temp = temp -> next;
		}

	}

	printf("NULL");
}

int deleteFirst() {

	if(head == NULL) {

		printf("\nEmpty Linked List");
		return -1;
	}
	else {
		if(head->next == NULL) {

			free(head);
			head = NULL;
		}
		else {
			Node * temp = head;
			head = head ->next;
			free(temp);
		}
		return 0;
	}
}

int deleteLast() {

	if(head == NULL) {

		printf("\nEmpty Linked list");
		return -1;
	}

	else {
		if(head->next == NULL) {
			free(head);
			head = NULL;
		}

		else {
			Node * temp = head;

			while(temp ->next->next != NULL) {

				temp = temp->next;
			}

			free(temp->next);
			temp->next = NULL;
		}
		return 0;
	}
}

int deleteAtPos(int pos) {
		
	int count = countNode();

	if(pos <= 0 && pos > count) {
		
		printf("\nEmpty Linked List");
		return -1;
	}
	else {

		if(pos == 1) {
			deleteFirst();
		}
		if(pos == count) {
			deleteLast();
		}
		else{

			Node *temp = head;

			while(pos - 2) {

				temp = temp->next;
				pos--;
			}

			Node * temp1 = temp->next->next;
			free(temp->next);
			temp->next = temp1;
		}
		return 0;
	}
}	

void equalLenMatch() {

	Node * temp = head;
	int len, count = 0;

	printf("\nEnter Length of string:: ");
	scanf("%d", &len);
	
	printf("\n");

	if(head == NULL) {

		printf("\nLinked List is Empty");
	}
	else {
		
		while(temp != NULL) {
			
			count++;
			if(strlen(temp->name) == len) {

				printf("%s\n", temp->name);
			}
			else {
				deleteAtPos(count);
			}

			temp = temp->next;
		}
	}
}

void main() {

	int ch;

	while(1) {
		printf("**********MENU***********\n");
		printf("\n\t1.addNode");
		printf("\n\t2.countNode");
		printf("\n\t3.Print data from length");
		printf("\n\t4.Reverse data in linked list");
		printf("\n\t5.If data equal length print else delete");
		printf("\n\t6.Print Linked List");
		printf("\n\t7.Exit\n");

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

					printf("\n %d nodes added...",nodeCount);
				}
				break;

			case 2:
				int count = countNode();
				printf("\nTotal no. of nodes in linked list = %d", count);
				break;

			case 3:
				printFromLen();
				break;
				
			case 4:
				dataRev();
				break;

			case 5:
				equalLenMatch();
				break;
			
			case 6:
				printLL();
				break;

			case 7:
				exit(0);
				break;

			default:
				printf("\nWrong choice");
		}
	}
}

	

