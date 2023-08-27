#pragma once
typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;


// Add one element to a non empty list.
// Create element in an empty list.
void addLast(struct ListNode** head, int val);

// Count the total number of nodes in a given list.
int totalNumberNodes(ListNode* list);

// Create the sum of two numbers of two different lists.
// Return the sum of two numbers in a new third list.
ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

