#include <stdio.h>
#include <stdlib.h>
/**
 * SAMPLE CODE DEMONSTRATING QUEUE IN C
 * 
*/
#define MAX 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = -1;
int front = -1;

/**
 * main - entry point
 * Return: 0
*/
int main(void)
{
	int choice;
	while (1)
	{
	/** PRINT OUTPUT TO THE SCREEN FOR USER TO TAKE ACTIONS*/
		printf("Enter '1' to insert element to the queue\n");
		printf("Enter 2 to Delete an item from the queue\n");
		printf("Enter '3' to display all elements of the queue\n");
		printf("Enter 4 to quit this screen\n");

		printf("Now, Enter your choice based on the above: \n");
		scanf("%d", &choice);

		/* use switch statement to to respond to different choices*/
		switch (choice)
		{
		case 1:
			insert();
			break;
		case 2:
			delete();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(1);
		default:
			printf("Invalid choice!\n");
			break;
		}
	}	
}
void insert()
{
	int item;
	
}