class Solution {
public:
TreeNode* ans=NULL;
bool solve(TreeNode* root, TreeNode* p, TreeNode* q)
{
    if(root==NULL)return false;
    if(root->val==p->val )
    {
        bool it=false;
        if(q->val>p->val)
        it=solve(p->right,p,q);
        else
        it=solve(p->left,p,q);
        if(it==true)
        ans=p;
      cout<<it<<" ";
        return true;
   
    }
     else if (root->val==q->val )
    {
        bool it=false;
        if(q->val<p->val)
        it=solve(q->right,p,q);
        else
        it=solve(q->left,p,q);
        if(it==true)
        if(it==true)
        ans=q;
                cout<<it<<" ";
        return true;

    }
    
   bool l=solve(root->left,p,q);
   bool r=solve(root->right,p,q);
    
   if(r && l){if(ans==NULL)ans=root;
   return true;
   }
   return r||l;
 

}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)return NULL;
        solve(root,p,q);
        return ans;
        
        
    }
};
