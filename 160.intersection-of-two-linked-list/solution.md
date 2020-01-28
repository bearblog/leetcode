```c++
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = getListLen(headA);
        int lenB = getListLen(headB);
        int delta = 0;
        if (lenA > lenB) 
            delta = lenA - lenB;
        else
            delta = lenB - lenA;
        while (delta) {
            if (lenA > lenB) 
                headA = headA->next;
            else
                headB = headB->next;
            delta--;
        }
        while (headA && headB){
            if (headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }

    int getListLen(ListNode *head) {
        int len = 0;
        while (head) {
            len++;
            head = head->next;
        }
        return len;
    }
};
```

