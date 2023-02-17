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
int min(int a,int b)
{
    if(a<b)
    return a;
    else
    return b;
}
vector<int> bst;
void inorder(TreeNode* root)
{
    if(!root)
    return ;
    else
    {
        inorder(root->left);
        bst.push_back(root->val);
        inorder(root->right);
    }
    return ;
}
    int getMinimumDifference(TreeNode* root) {
        int result= INT_MAX;
        inorder(root);
        for(int i=1;i<bst.size();i++)
        {
            int val = abs(bst[i]-bst[i-1]);
            result= min(result,val);
        } 
        return result;       
    }
};
