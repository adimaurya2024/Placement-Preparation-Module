class Solution {
private:
    void inorderBST(TreeNode *root, vector<int>&inVec)
    {
        if(root==NULL)
        {
            return;
        }
        inorderBST(root->left, inVec);
        inVec.push_back(root->val);
        inorderBST(root->right, inVec);
    }
    
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>inVec;
        inorderBST(root, inVec);
        int i=0;
        int j= inVec.size()-1;
        while(i<j)
        {
            if(inVec[i]+inVec[j]==k)
            {
                return true;
            }
            else if((inVec[i]+inVec[j])<k)
                    {
                i++;
            }
            else{
                j--;
            }
        }
        return false;
        
    }
};
