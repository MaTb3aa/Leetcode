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
    
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        stack<TreeNode*>stk;
        TreeNode* node = root;
        while(node != nullptr || stk.size() ){
            while(node){
                stk.push(node);
                node = node->right;
            }
            node = stk.top();
            stk.pop();
            sum += node->val;
            node->val = sum;
            node = node->left;
        }
        return root;
    }
};