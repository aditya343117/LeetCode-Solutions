/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<int> ans;
    void preorder(TreeNode *root)
    {
        if (root == NULL) return;

        preorder(root->left);
        ans.push_back(root->val);
        preorder(root->right);
    }

    bool findTarget(TreeNode *root, int k)
    {
        preorder(root);

        int left = 0;
        int right = ans.size() - 1;
        while (left < right)
        {
            if (ans[left] + ans[right] == k)
            {
                return true;
            }
            else if (ans[left] + ans[right] < k)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return false;
    }
};

