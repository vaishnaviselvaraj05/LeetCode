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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        queue<TreeNode*> q;
        if (root == nullptr)
            return result;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<int> res;
            while (n) {
                TreeNode* curr = q.front();
                q.pop();
                res.push_back(curr->val);
                if (curr->left != nullptr)
                    q.push(curr->left);
                if (curr->right != nullptr)
                    q.push(curr->right);
                n--;
            }
            result.push_back(res.back());
        }
        return result;
    }
};