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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) return 0;
    int ans = 0;
    stack<TreeNode*> stack;
    stack.push(root);
    
    while(!stack.empty()) {
        TreeNode* node = stack.top();
        stack.pop();
        if(node->left != NULL) {
            if (node->left->left == NULL && node->left->right == NULL)
                ans += node->left->val;
            else
                stack.push(node->left);
        }
        if(node->right != NULL) {
            if (node->right->left != NULL || node->right->right != NULL)
                stack.push(node->right);
        }
    }
    return ans;
    }
};