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
    bool isCompleteTree(TreeNode* root) {
        if(root==nullptr)//if root is null no need to futhur traversal
        return true;

        bool result=false; 
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();

            if(node == nullptr)
             result=true;
            else 
            {
              if(result)
             return false;

            q.push(node->left);
            q.push(node->right);
            }
        }
        return result;
    }
};
