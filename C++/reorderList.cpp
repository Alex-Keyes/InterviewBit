class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;

        ListNode* head = l1;    // head of the list to return
        l1 = l1->next;

        ListNode* p = head;     // pointer to form new list
        // A boolean to track which list we need to extract from. 
        // We alternate between first and second list. 
        bool curListNum = true;

        while(l1 && l2){
            if(curListNum == false) {
                p->next = l1;
                l1 = l1->next;
            } else {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
            curListNum = !curListNum;
        }

        // add the rest of the tail, done!
        if (l1) {
            p->next = l1;
        } else {
            p->next = l2;
        }

        return head;
    }

    ListNode *reverseLinkedList(ListNode *head) {
        if (head->next == NULL) return head;
        ListNode *cur = head, *nextNode = head->next, *tmp;

        while (nextNode != NULL) {
            tmp = nextNode->next;
            nextNode->next = cur;
            cur = nextNode;
            nextNode = tmp;
        }

        head->next = nextNode;
        return cur;
    }

    ListNode* reorderList(ListNode *head) {
        if(head == NULL || head->next == NULL || head->next->next==NULL)
            return head;

        //find the middle of the list, and split into two lists.    
        ListNode *slow = head,*fast = head;
        while(slow != NULL && fast != NULL && fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *mid = slow->next;
        slow->next = NULL;

        //reverse from the middle to the end
        ListNode* secondHalfReversed = reverseLinkedList(mid);

        //merge these two list
        return head = mergeTwoLists(head, secondHalfReversed);
    }
};
