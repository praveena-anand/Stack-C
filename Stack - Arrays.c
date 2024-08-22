#include <stdio.h>
#define MAX 5

int stack[MAX], head = -1, i, element;

int isFull()
{
	if (head == MAX - 1)
		return 1;
	return 0;
}

int isEmpty()
{
	if (head == -1)
		return 1;
	return 0;
}

void push()
{
	if (isFull())
	{
		printf("Overflow!\n");
		return;
	}
	
	printf("Enter the Element : ");
	scanf("%d", &element);
	
	head++;
	stack[head] = element;
	
	printf("Element Pushed Successfully!\n");
}

void pop()
{
	if (isEmpty())
	{
		printf("Underflow!\n");
		return;
	}
	
	printf("Popped Element is %d.\n", stack[head]);
	head--;
}

void peek()
{
	if (isEmpty())
	{
		printf("Underflow!\n");
		return;
	}
	
	printf("Peek Element is %d.\n", stack[head]);
}

void display()
{
	if (isEmpty())
	{
		printf("Underflow!\n");
		return;
	}
	
	printf("The Elements are,\n");
	for (i = head; i >= 0; i--)
		printf("%d\t", stack[i]);
	printf("\n");
}

int main()
{
	do
	{
		int opt;
		printf("\nMain Menu - \n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
		printf("Enter your choice : ");
		scanf("%d", &opt);
		
		switch (opt)
		{
			case 1:
				push();
				break;
				
			case 2:
				pop();
				break;
				
			case 3:
				peek();
				break;
				
			case 4:
				display();
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
