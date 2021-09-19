# Reverse Linked List

### Given the head of a singly linked list, reverse the list, and return the reversed list.

### Example 1:
 ![](https://assets.leetcode.com/uploads/2021/02/19/rev1ex1.jpg)

    Input: head = [1,2,3,4,5]
    Output: [5,4,3,2,1]
### Example 2:

![](https://assets.leetcode.com/uploads/2021/02/19/rev1ex2.jpg)

    Input: head = [1,2]
    Output: [2,1]
### Example 3:

    Input: head = []
    Output: []
 

### Constraints:

    The number of nodes in the list is the range [0, 5000].
    -5000 <= Node.val <= 5000

###  Solution
```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         ListNode *nextNode, *prevNode = NULL;
        while (head) {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
    }
};
```