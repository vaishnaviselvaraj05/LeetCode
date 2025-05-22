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
        queue<TreeNode*> q;
        int flag = 0;
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
            if (flag == 1) {
                reverse(res.begin(), res.end());
            }
            flag = !flag;
            result.push_back(res);
        }
        return result;
    }
};