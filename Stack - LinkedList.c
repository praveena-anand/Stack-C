#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *link
} node;

node *temp, *newnode, *top = 0;

int isEmpty()
{
	return top == 0;
}

void push()
{
	newnode = (node *)malloc(sizeof(node));
	
	printf("Enter the Element : ");
	scanf("%d", &newnode -> data);
	newnode -> link = top;
	top = newnode;
	
	printf("Element Pushed Successfully!\n");
}

void display()
{
	if (isEmpty())
	{
		printf("Underflow!\n");
		return;
	}
	
	temp = top;
	
	printf("The Elements are : \n");
	while (temp != 0)
	{
		printf("%d\t", temp -> data);
		temp = temp -> link;
	}
	printf("\n");
}

void pop()
{
	if (isEmpty())
	{
		printf("Underflow!\n");
		return;
	}
	
	temp = top;
	printf("The Popped Element is : %d.\n", temp -> data);
	top = temp -> link;
	free(temp);
}

void peek()
{
	if (isEmpty())
	{
		printf("Underflow!\n");
		return;
	}
	
	printf("The Peek Element is : %d.\n", top -> data);
}

int main()
{
	do
	{
		int ch;
		
		printf("\nMain Menu - \n1. Push\n2. Display\n3. Pop\n4. Peek\n5. Exit\n");
		printf("Enter you choice : ");
		scanf("%d", &ch);
		
		switch (ch)
		{
			case 1:
				push();
				break;
				
			case 2:
				display();
				break;
				
			case 3:
				pop();
				break;
				
			case 4:
				peek();
				break;
				
			case 5:
				printf("Thank you!\n");
				return 0;
				
			default:
				printf("Invalid Input!\n");
		}
	}
	while (1);
	
	return 0;
}


