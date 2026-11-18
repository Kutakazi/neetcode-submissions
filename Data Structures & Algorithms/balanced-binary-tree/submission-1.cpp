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
    int checkHeight(TreeNode* root) {
        if (root == nullptr) return 0;

        int a = checkHeight(root->right);
        int b = checkHeight(root->left);

        if (a == -1 || b == -1) {
            return -1;
        }

        if (a == b || a - b == -1 || a - b == 1) {
            return max(a, b) + 1;
        } else {
            return -1;
        }
    }

    bool isBalanced(TreeNode* root) {
        if(checkHeight(root) == -1) {
            return false;
        } else {
            return true;
        }
    }
};
