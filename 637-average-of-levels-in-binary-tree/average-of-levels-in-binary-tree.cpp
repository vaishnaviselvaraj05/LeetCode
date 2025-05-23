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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        queue<TreeNode*>q;
        if(root==nullptr) return result;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            double avg = 0.0;
            for(int i = 0 ; i < n ; i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                avg += curr->val;
                if(curr->left!=nullptr) q.push(curr->left);
                if(curr->right!=nullptr) q.push(curr->right);
            }
            result.push_back(avg / n);
        }
        return result;
    }
};