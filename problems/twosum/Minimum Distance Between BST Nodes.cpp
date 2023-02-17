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
int min(int a, int b)
 {
     if(a<b)
     return a;
     else
     return b;
 }
 vector<int> vt;
 void forminglist(TreeNode*root )
 {
if(root!=NULL)
{
    forminglist(root->left);
    vt.push_back(root->val);
    forminglist(root->right);
}
else
 return ;
 }
    int minDiffInBST(TreeNode* root) {
        forminglist(root);
       int result = INT_MAX;
    
for(int loop=1;loop<vt.size();loop++)
{
    result = min(result, vt[loop]-vt[loop-1]);
}
        return result;
    }
};
