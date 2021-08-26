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
    
    TreeNode *getNewnode(int val)
    {
        TreeNode *newnode = new TreeNode;
        newnode->val = val;
        newnode->left = newnode->right = NULL;
        return newnode;
    }
    
    int construct_BST(vector<int> &preorder,int n,int i,TreeNode *curr,int left,int right){
        if(i==n || preorder[i]<left || preorder[i]>right) return i;
        
        if(preorder[i]<curr->val){
            curr->left = getNewnode(preorder[i]);
            i++;
            i = construct_BST(preorder,n,i,curr->left,left,curr->val-1);
        }
        
        if(i==n || preorder[i]<left || preorder[i]>right) return i;
        
        curr->right = getNewnode(preorder[i]);
        i++;
        i = construct_BST(preorder,n,i,curr->right,curr->val+1,right);
        
        return i;
    }
    
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        
        if(n == 0) return NULL;
        
        TreeNode* root = getNewnode(preorder[0]);
        
        if(n == 1) return root;
        
        construct_BST(preorder, n, 1, root, INT_MIN, INT_MAX);
        
        return root;
    }
};
