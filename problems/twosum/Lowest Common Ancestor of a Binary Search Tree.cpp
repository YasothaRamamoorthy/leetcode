/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
void  lca(TreeNode* root,TreeNode*p,TreeNode*q ,TreeNode*&result)
{
    if(root==NULL) 
      return ;
     else  if((p->val < root->val) && (q->val < root->val)) // if p and q val is less than root val no need to check for right side we eliminating the right side 
     lca(root->left,p,q,result);
     else if((p->val > root->val) && (q->val > root->val))// if p and q val is greater than root no need to check for left so elimunating left side of the bst tree
     lca(root->right,p,q,result);
     else
      result=root;

}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        TreeNode* result;
        lca(root,p,q,result);
        return result;
    }
};
