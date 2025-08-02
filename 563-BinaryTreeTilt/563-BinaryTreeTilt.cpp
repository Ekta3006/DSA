// Last updated: 8/2/2025, 5:11:28 PM
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
    int totalTilt = 0;

    int findsum(TreeNode* root) {
        if (root == NULL) return 0;
        
        int left = findsum(root->left);
        int right = findsum(root->right);

        totalTilt += abs(left - right);

        return left + right + root->val;
    }

    int findTilt(TreeNode* root) {
        findsum(root);
        return totalTilt;
    }
};

