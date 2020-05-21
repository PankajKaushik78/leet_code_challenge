/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
public:
    int ceilVal = INT_MAX;
    void ceilN(TreeNode* root, int target){
        if(root == nullptr) return;
        if(root->val > target){
            if(root->val < ceilVal){
                ceilVal = root->val;
            }
        }
        ceilN(root->left, target);
        ceilN(root->right, target);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        int ceil = INT_MIN;
        for(int i=1; i<=k; i++){
            ceilVal = INT_MAX;
            ceilN(root, ceil);
            ceil = ceilVal;
        }
        return ceil;
        
    }
};