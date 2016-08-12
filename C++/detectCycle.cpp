class Solution {
public:
  ListNode *detectCycle(ListNode *head) {
    if (head == NULL || head->next == NULL) return NULL;

    ListNode* firstp = head;
    ListNode* secondp = head;
    bool isCycle = false;

    while(firstp != NULL && secondp != NULL) {
      firstp = firstp->next;
      if (secondp->next == NULL) return NULL;
      secondp = secondp->next->next;
      if (firstp == secondp) { isCycle = true; break; }
    }

    if(!isCycle) return NULL;
    firstp = head;
    while( firstp != secondp) {
      firstp = firstp->next;
      secondp = secondp->next;
    }

    return firstp;

  }
};
