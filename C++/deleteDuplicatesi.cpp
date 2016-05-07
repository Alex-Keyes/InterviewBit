ListNode *deleteDuplicates(ListNode *head) {
  ListNode *origin = head;
  while (head != NULL) {
    while(head->next != NULL && head->val == head->next->val) {
      head->next = head->next->next;
    }
    head = head->next;
  }
  return origin;
}
