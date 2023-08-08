class Solution {
public:
    void postTrav(vector<int>&ans, TreeNode* root)
    {
        if(root==NULL){
            return;
        }
        if(root->left)
        {
            postTrav(ans, root->left);
        }
        if(root->right)
        {
            postTrav(ans, root->right);
        }
        ans.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
      vector<int>ans;  
      postTrav(ans,root);
      return ans;
    }
};
