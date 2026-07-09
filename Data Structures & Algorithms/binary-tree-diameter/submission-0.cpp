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
    int diameterOfBinaryTree(TreeNode* root) {
        int max_diameter = 0;
        calc_height(root, max_diameter);
        return max_diameter;

        
    }

private:
    int calc_height(TreeNode* node, int& max_diameter){
        if(node == nullptr){
            return 0;
        }

        max_diameter = max(max_diameter, calc_height(node->right, max_diameter) + calc_height(node->left, max_diameter));

        return 1 + max(calc_height(node->right, max_diameter),calc_height(node->left, max_diameter));

    }


};
