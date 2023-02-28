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
string findDuplicates(TreeNode* node, unordered_map<string, int>& frequency, vector<TreeNode*>& result) {
        if (!node) {
            return "#";
        }
        
        string left = findDuplicates(node->left, frequency, result);
        string right = findDuplicates(node->right, frequency, result);

        string identifier = to_string(node->val) + "," + left + "," + right;
        frequency[identifier]++;
        
        if (frequency[identifier] == 2) {
            result.push_back(node);
        }
        
        return identifier;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
       unordered_map<string, int> frequency;
        vector<TreeNode*> result;
        findDuplicates(root, frequency, result);
        return result; 
    }
};
