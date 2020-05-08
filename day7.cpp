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
    public boolean isCousins(TreeNode root, int x, int y) {
        dfs(root, null, 0, x, y);
        if(xDepth == yDepth && xParent != yParent) return true;
        return false;
    }
    int xDepth = -1, yDepth = -2;
    TreeNode xParent = null, yParent = null;
    
    public void dfs(TreeNode root, TreeNode parent,int depth, int x, int y){
        if(root == null) return;
        if(root.val == x){
            xDepth = depth;
            xParent = parent;
        }else if(root.val == y){
            yDepth = depth;
            yParent = parent;
        }else{
            dfs(root.left, root, depth+1, x, y);            
            dfs(root.right, root, depth+1, x, y);

        }
    }
}