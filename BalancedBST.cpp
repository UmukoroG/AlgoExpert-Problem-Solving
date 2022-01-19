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
    int Height(TreeNode* root, bool& f){
        int x,y;
        if(root==nullptr) return 0;
        x=Height(root->left,f);
        y=Height(root->right,f);
        if(abs(x-y)>1){
            f=false;//not balanced
        }
        return max(x,y)+1; 
        
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return 1;//empty BST
        bool check=true;
        Height(root, check);
        return check;
    }
};