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
int digitsum(TreeNode* root,int result)
{
    if(root==NULL) return 0;
    result=result *10 + root->val;
    cout<<result<<endl;
    if(root->left == NULL && root->right== NULL)
    return result;

    int left= digitsum(root->left,result);
    int right=digitsum(root->right,result);
    cout<<left<<endl;
    cout<<right<<endl;
    return left+right;
}
    int sumNumbers(TreeNode* root) {
        int result=0;
        return digitsum(root,result);
    }
};
