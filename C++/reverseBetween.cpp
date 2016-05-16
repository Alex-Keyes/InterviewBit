class Solution {
public:
 
    // Reverses the linkedList which starts from head, and extends to size nodes. 
    // Returns the end node. 
    // Also sets the head->next as endNode->next. 
    ListNode *reverseLinkedList(ListNode *head, int size) {
    if (size <= 1) return head; 
        ListNode *cur = head, *nextNode = head->next, *tmp;

    for (int i = 0; i < (size - 1); i++) {
        tmp = nextNode->next;
        nextNode->next = cur; 
        cur = nextNode;
        nextNode = tmp; 
    }

    head->next = nextNode;
    return cur;
    }

    ListNode *reverseBetween(ListNode *head, int m, int n) {
    // Introduce dummyhead to not handle corner cases. 
    ListNode* dummyHead = new ListNode(0); 
    dummyHead->next = head; 

    // Figure out the start node of the sublist we are going to reverse
      ListNode* prev = dummyHead;
    ListNode* cur = head; 
    int index = 1;
    while (index < m) {
        prev = cur;
        cur = cur->next;
        index++;
    }

    // At this point, we have start of sublist in cur, prev of startSubList in prev.
    // Lets reverse the sublist now. 
    ListNode* endSubList = reverseLinkedList(cur, n - m + 1);
    prev->next = endSubList; 

    return dummyHead->next;
    }
};
