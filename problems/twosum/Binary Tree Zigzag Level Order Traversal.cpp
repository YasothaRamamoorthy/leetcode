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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      vector<vector<int>> result;
      if(root==NULL)
      return result;
      queue<TreeNode*> q;
      q.push(root);
      while(!q.empty())
      {
          vector<int> v;
          int count=q.size();
          while(count)
          {
            TreeNode*temp=q.front();
            v.push_back(temp->val);
            q.pop();

            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
            count--;
          }
         // cout<<result.size()<<endl;
          if(result.size()%2 !=0)
            {
                reverse(v.begin(),v.end());
            }
          result.push_back(v);
      }
      return result;
    }
};
