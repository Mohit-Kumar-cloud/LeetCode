/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(root == NULL)
        {
            return ans;
        }
        vector<Node*> stack;
        stack.push_back(root);
        while(!stack.empty())
        {
            Node* el = stack.back();
            ans.push_back(el->val);
            stack.pop_back();
            for(int i=el->children.size()-1;i>=0;i--)
            {
                stack.push_back(el->children[i]);
            }
        }
        return ans;
    }
};