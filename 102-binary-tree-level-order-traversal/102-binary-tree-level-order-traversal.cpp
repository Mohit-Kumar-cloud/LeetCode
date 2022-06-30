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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
        {
            return ans;
        }
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty())
        {
            int n = qu.size();
            vector<int> vec;
            for(int i=0;i<n;i++)
            {
                TreeNode* el  = qu.front();
                vec.push_back(el->val);
                qu.pop();
                if(el->left != NULL)
                {
                    qu.push(el->left);
                }
                if(el->right != NULL)
                {
                    qu.push(el->right);
                }
            }
            ans.push_back(vec);
        }
        return ans;
    }
};