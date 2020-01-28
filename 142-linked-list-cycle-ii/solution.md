## 解法：快慢指针

![142-1.png](https://pic.leetcode-cn.com/de08d221c812c1da6e4528f770c38f35b78fb615a8e92879bedc88c20d972c63-142-1.png)

1、（绿色部分）[链表的起始结点, 环的入口结点)，设这部分结点的个数为 a；

2、（蓝色部分）[环的入口结点, 快慢指针相遇的结点)，设这部分结点的个数为 b；

3、（红色部分）[快慢指针相遇的结点, 环的入口结点)，设这部分结点的个数为 c；





```C++
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast!=NULL && fast->next!=NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast) {
                fast=head;
                while(fast!=slow){
                    fast = fast->next;
                    slow = slow->next; 
                }
                return fast;
            }
        }
        return NULL;
    }
};


```

