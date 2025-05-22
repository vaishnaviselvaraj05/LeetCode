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
    void findPath(TreeNode* root, vector<string>& result, string s) {
        if (!root->left && !root->right) {
            s += to_string(root->val);
            result.push_back(s);
            return;
        }
        s += to_string(root->val) + "->";

        if (root->left)
            findPath(root->left, result, s);
        if (root->right)
            findPath(root->right, result, s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s;
        vector<string> result;
        findPath(root, result, s);
        return result;
    }
};