/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 int getLength(ListNode *head) {
            int ret = 0;
            while (head) {
                ret++;
                head = head->next;
            }
            return ret;
        }
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
            if(!A || !B)
                return NULL;
            int lenA = getLength(A), lenB = getLength(B);
            int lenDiff = lenA - lenB;
            ListNode *pa = A;
            ListNode *pb = B;
            if(lenDiff > 0) {
                while(lenDiff != 0) {
                    pa = pa->next;
                    lenDiff--;
                }
            }
            else if(lenDiff < 0) {
                while(lenDiff != 0) {
                    pb = pb->next;
                    lenDiff++;
                }
            }
            while(pa && pb) {
                if(pa == pb)
                    return pa;
                pa = pa->next;
                pb = pb->next;
            }
            return NULL;
        }
