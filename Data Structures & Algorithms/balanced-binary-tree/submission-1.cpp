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
    bool isBalanced(TreeNode* root) {


        return height(root) != -1;
        
    }

    int height(TreeNode* root) {

        if(root == nullptr){
            return 0;
        }

        int right_height = height(root->right);
        int left_height = height(root->left);

        if (left_height == -1) return -1;
        if (right_height == -1) return -1;

        if (abs(left_height - right_height) > 1) {
            return -1;
        }

        return 1 + max(height(root->left), height(root->right));
    }
    
};
