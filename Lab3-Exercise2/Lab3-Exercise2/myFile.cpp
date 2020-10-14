#include "myLinkedList.h"
int main()
{
	Evaluation* first = NULL; //Pointer on the first element of the list
	//the list is empty, so initialization to NULL
	int number = 0; //number of elements in the linked list
	int choice; //choice for the menu
	do
	{
		cout << endl << endl << "1) Display of the complete linked list.\n";
		cout << "2) Inserting an element\n";
		cout << "3) Removing an element.\n";
		cout << "4) Calculation of the class average.\n";
		cout << "5) Exiting the program.\n" << endl << endl;
		cout << "Your choice ??:";
		cin >> choice;
		switch (choice)
		{
		case 1: display(first);
			break;
		case 2: first = add(first, number);
			break;
		case 3: first = remove(first, number);
			break;
		case 4: average(first, number);
			break;
		case 5: exit(0);
		default:
			break;
		}
	} while (1);
	return 0;
}
