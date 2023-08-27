#include <stdio.h>
#include <stdlib.h>
#include "ListNode.h"


void addLast(ListNode** head, int val)
{
    // Allocate memory for a new node.
    ListNode* newNode = malloc(sizeof(ListNode));
    if (newNode == NULL)
    {
        exit(1);
    }
    newNode->next = NULL;
    newNode->val = val;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Dereference double pointer to find adress to the end of the list.
    // Find end of the list by iterating through the list.
    ListNode* curr = *head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    // Make last element the new node.
    curr->next = newNode;

    if (*head == NULL)
        *head = newNode;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* l3 = NULL;
    ListNode* tempL1 = l1;
    ListNode* tempL2 = l2;

    if (l1 == NULL)
    {
        printf("List is empty");
        return NULL;
    }    
    if (l2 == NULL)
    {
        printf("List is empty");
        return NULL;
    }

    int size1 = totalNumberNodes(l1);
    int size2 = totalNumberNodes(l2);

    if (size1 == size2) {

        do
        {
            int sum = tempL1->val + tempL2->val;
            addLast(&l3, sum);
            tempL1 = tempL1->next;
            tempL2 = tempL2->next;

        } while ((tempL1 != NULL) && (tempL2 != NULL));
    }

    return l3;
}

int totalNumberNodes(ListNode* list)
{
    int count = 0;
     
    while (list != NULL)
    {
        list = list->next;
        count++;
    } 

    return count;
   
}