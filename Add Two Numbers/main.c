#include "ListNode.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	srand(time(NULL));   // Initialization, should only be called once.
    
	int listLength = 3;

	ListNode* l1 = NULL;
	ListNode* l2 = NULL;

	// Populate Both lists.
	for (int i = 0; i < listLength; i++)
	{
		int r1 = rand() % 10 + 1;
		int r2 = rand() % 10 + 1;
		addLast(&l1, r1);
		addLast(&l2, r2);

	}

	ListNode* temp1 = l1;
	ListNode* temp2 = l2;

	// Print contents of list
	for (int i = 0; i < listLength; i++)
	{
		printf("List #1 = %d\n\n",  temp1->val);
		printf("List #2 = %d\n\n",  temp2->val);
		temp1 = temp1->next;
		temp2 = temp2->next;
	}

	// Create sum of elements of two same sized lists.
	ListNode* sum = addTwoNumbers(l1, l2);

	for (int i = 0; i < listLength; i++)
	{
		printf("Sum of element #%d = %d\n\n", i, sum->val);
		sum = sum->next;
	}
	free(l1);
	free(l2);
	free(sum);
	
	return 0;
}