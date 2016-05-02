void reverse(struct ListNode** head_ref)
{
    struct ListNode* prev   = NULL;
    struct ListNode* current = *head_ref;
    struct ListNode* next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

/* Function to check if two input lists have same val*/
bool compareLists(struct ListNode* head1, struct ListNode *head2)
{
    struct ListNode* temp1 = head1;
    struct ListNode* temp2 = head2;

    while (temp1 && temp2)
    {
        if (temp1->val == temp2->val)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else return 0;
    }

    /* Both are empty reurn 1*/
    if (temp1 == NULL && temp2 == NULL)
        return 1;

    /* Will reach here when one is NULL
       and other is not */
    return 0;
}

int Solution::lPalin(ListNode* A) {
    struct ListNode *slow_ptr = A, *fast_ptr = A;
    struct ListNode *second_half, *prev_of_slow_ptr = A;
    struct ListNode *midnode = NULL;  // To handle odd size list
    int res = true; // initialize result

    if (A!=NULL && A->next!=NULL)
    {
        /* Get the middle of the list. Move slow_ptr by 1
           and fast_ptrr by 2, slow_ptr will have the middle
           ListNode */
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;

            /*We need previous of the slow_ptr for
              linked lists  with odd elements */
            prev_of_slow_ptr = slow_ptr;
            slow_ptr = slow_ptr->next;
        }


        /* fast_ptr would become NULL when there are even elements in list. 
           And not NULL for odd elements. We need to skip the middle ListNode 
           for odd case and store it somewhere so that we can restore the
           original list*/
        if (fast_ptr != NULL)
        {
            midnode = slow_ptr;
            slow_ptr = slow_ptr->next;
        }

        // Now reverse the second half and compare it with first half
        second_half = slow_ptr;
        prev_of_slow_ptr->next = NULL; // NULL terminate first half
        reverse(&second_half);  // Reverse the second half
        res = compareLists(A, second_half); // compare

        /*
        reverse(&second_half); // Reverse the second half again
        if (midnode != NULL)  // If there was a mid ListNode (odd size case) which                                                         
            // was not part of either first half or second half.
        {
            prev_of_slow_ptr->next = midnode;
            midnode->next = second_half;
        }
        else  prev_of_slow_ptr->next = second_half;
        */
    }
    return res;
}
