class Solution {
public:
  ListNode *rotateRight(ListNode *head, int k) {
    if (head == NULL || head->next == NULL) return head;

    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode *fast = dummy, *slow = dummy;

    int sizeOfList = 0; 
    while (fast->next != NULL) {
      fast = fast->next;
      sizeOfList++;
    }

    int firstNodePos = sizeOfList - (k % sizeOfList);
    for (int i = 0; i < firstNodePos; i++) {
      slow = slow->next;
    }

    fast->next = dummy->next;
    dummy->next = slow->next; 
    slow->next = NULL;

    return dummy->next;
  }
};
