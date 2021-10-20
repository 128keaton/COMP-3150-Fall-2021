#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int data;
	struct node * next;
} node;

node * deleteTail(node * h);
void displayAll(const node * h);

int main() {
	node * head = NULL, * temp;

	temp = malloc(sizeof (node)); *temp = (node){7, head}; head = temp;
	temp = malloc(sizeof (node)); *temp = (node){5, head}; head = temp;
	temp = malloc(sizeof (node)); *temp = (node){3, head}; head = temp;
	temp = malloc(sizeof (node)); *temp = (node){1, head}; head = temp;

	printf("List before calling deleteTail():\r\n");
	displayAll(head);

	// Calling the deleteTail function
	deleteTail(head);

        printf("List after calling deleteTail():\r\n");
        displayAll(head);
}

void displayAll(const node * h) {
	while (h != NULL) {
		printf("%d ", h->data);
		h = h->next;
	}

	printf("\r\n");
}

node * deleteTail(node * h) {
	// Assign currentNode to the h(ead) node passed
	node * currentNode = h;

	// Iterate through the entire linked list to find the second-to-last node
	while (currentNode->next->next != NULL) {
		currentNode = currentNode->next;
	}

	// Set the variable tail to the last node in the list
	node * tail = currentNode->next;

	// Since we used malloc, we need to free the memory allocated
	free(tail);

	// Set the reference to the last node to NULL
        currentNode->next = NULL;

	return currentNode;
}

