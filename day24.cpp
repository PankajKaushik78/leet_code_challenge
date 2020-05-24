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
    public TreeNode bstFromPreorder(int[] preorder) {
        Stack<TreeNode> st = new Stack<>();
        TreeNode root = new TreeNode(preorder[0]);
        st.push(root);
        
        for(int i=1; i<preorder.length; i++){
            TreeNode nn = new TreeNode(preorder[i]);
            if(preorder[i] < st.peek().val){
                st.peek().left = nn;
                st.push(nn);
            }else{
                TreeNode rn = st.peek();
                while(st.size() > 0 && preorder[i] > st.peek().val){
                    rn = st.pop();
                }
                rn.right = nn;
                st.push(nn);
            }
        }
        return root;
    }
}