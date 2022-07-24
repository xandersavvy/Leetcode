# Binary Tree Inorder Traversal

Given the root of a binary tree, return the inorder traversal of its nodes' values.

Example 1:

![inorder tree taversal](https://assets.leetcode.com/uploads/2020/09/15/inorder_1.jpg)

    Input: root = [1,null,2,3]
    Output: [1,3,2]

Example 2:

    Input: root = []
    Output: []

Example 3:

    Input: root = [1]
    Output: [1]

Constraints:

- The number of nodes in the tree is in the range [0, 100].
- -100 <= Node.val <= 100
 
# Solution

Solutions in Java

```java
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
       List<Integer> list = new ArrayList<>();
        return helper(root, list);
    }
    
    private List<Integer> helper(TreeNode root, List<Integer> list){
        if(root == null) return list;
        
        helper(root.left, list);
        list.add(root.val);
        helper(root.right, list);
        
        return list;
    }
}
```
