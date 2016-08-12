class Solution {
    public:
        ListNode *partition(ListNode *head, int x) {

            if (!head) return NULL;
            ListNode * iterator = head;

            ListNode * start = new ListNode(0); // list of nodes greater than x
            ListNode * tail = start;

            ListNode * newHead = new ListNode(0);
            newHead -> next = head;
            ListNode * pre = newHead; // previous node, we need it for removing


            while (iterator) {
                if (iterator -> val >= x) {
                    pre -> next = iterator -> next; // remove from our list
                    tail -> next = iterator; // add to list of nodes greater than x
                    tail = tail -> next;
                    iterator = iterator -> next;
                    tail -> next = NULL;
                }
                else
                    pre = iterator, iterator = iterator -> next;
            }
            pre -> next = start -> next;
            return newHead -> next;
        }
};
