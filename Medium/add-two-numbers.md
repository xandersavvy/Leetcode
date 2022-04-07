# Add Two Numbers

### You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.


### Example 1:
![Image](https://assets.leetcode.com/uploads/2020/10/02/addtwonumber1.jpg)

    Input: l1 = [2,4,3], l2 = [5,6,4]
    Output: [7,0,8]
    Explanation: 342 + 465 = 807.

### Example 2:

    Input: l1 = [0], l2 = [0]
    Output: [0]

### Example 3:

    Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
    Output: [8,9,9,9,0,0,0,1]

 

### Constraints:

    The number of nodes in each linked list is in the range [1, 100].
    0 <= Node.val <= 9
    It is guaranteed that the list represents a number that does not have leading zeros.

# Solutions
I took the solution from [LeetCode discussion](https://leetcode.com/problems/add-two-numbers/discuss/1835266/C%2B%2B-oror-Easy-To-Understand-oror-Explanation-oror-Simple-and-Short) but it is easy to understand.

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1=0;
        ListNode *ptr = new ListNode();     //new list;
        ListNode *temp = ptr;
        
        int c = 0;
		//going through both list till one of the list not reaches NULL
        while (l1 != NULL ||  l2 != NULL || c)
        {
            int sum = 0;
			
            if(l1 != NULL)
            {
                // if l1  is not null
			    // add l1-> value to sum
                sum += l1->val;
                l1 = l1 -> next;
            }
            
            if(l2 != NULL)
            {
                //same for l2
                sum += l2->val;
                l2 = l2 -> next;
            }
            
			// add carry to sum
            sum += c;
			// carry is updated by sum/10 because for 18 , 
			// 18 / 10 is 1 which is the carry
            c = sum/10;
			// add sum% 10 to new node as it containg the sum
            ListNode *node = new ListNode(sum%10);

            //our new linkedlist
            temp -> next = node;
            temp = temp -> next;
        }
        return ptr -> next;
    }
};
```