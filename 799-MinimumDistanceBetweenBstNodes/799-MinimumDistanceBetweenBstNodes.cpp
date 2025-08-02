// Last updated: 8/2/2025, 5:11:17 PM
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
void inorder(vector<int>& ans, TreeNode*  root){
        if(root==NULL) return ;
        inorder(ans,root->left);
        ans.push_back(root->val);
        inorder(ans,root->right);
    }
    int minDiffInBST(TreeNode* root) {
        vector <int> v;
        inorder(v,root);
        int d=abs(v[0]-v[1]);
        for(int i=1;i<v.size()-1;i++)
         d=min(d,abs(v[i]-v[i+1]));
         return d;
    }
};