# Binary Tree Right Side View

Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

Example 1:

    Input: root = [1,2,3,null,5,null,4]
    Output: [1,3,4]

Example 2:

    Input: root = [1,null,3]
    Output: [1,3]

Example 3:

    Input: root = []
    Output: []
 

Constraints:

    The number of nodes in the tree is in the range [0, 100]. -100 <= Node.val <= 100

# SOlution

This one is in Java 

Here is a explanation video ![java tree left side](https://www.youtube.com/watch?v=thkuu_FWFD8)

```cpp
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
    int maxLevel =0;
    public void helper(TreeNode root,int level,List<Integer> res){
        if(root==null) return;
        if(maxLevel<level){
            res.add(root.val);
            maxLevel=level;
        }
        helper(root.right,level+1,res);
        
        helper(root.left,level+1,res);
    }
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer> res = new ArrayList<>();
        helper(root,1,res);
        return res;
    }
}
```