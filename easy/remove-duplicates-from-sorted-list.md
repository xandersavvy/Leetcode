# Remove Duplicates from Sorted List

### Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
 
### Example 1:
![](https://assets.leetcode.com/uploads/2021/01/04/list1.jpg)

    Input: head = [1,1,2]
    Output: [1,2]
### Example 2:
![](https://assets.leetcode.com/uploads/2021/01/04/list2.jpg)

    Input: head = [1,1,2,3,3]
    Output: [1,2,3]
 

### Constraints:

- The number of nodes in the list is in the range [0, 300].
- -100 <= Node.val <= 100
- The list is guaranteed to be sorted in ascending order.

### Solution

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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head==NULL) return head;
        ListNode *curr = head;
        while (curr->next) {
            if (curr->next->val == curr->val) curr->next = curr->next->next;
            else curr = curr->next;
        }
        return head;
    }
};
```