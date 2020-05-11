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
    vector<int> v;
public:
    void binarysearch(TreeNode* root,int x, int count, int parent){
        if(root==NULL){
            return ;
        }
        
        if(root->val==x){
            cout<<"root value -"<<root->val<<"  parent -"<<parent <<"  count-"<<count<<endl;
            v.push_back(parent);
            v.push_back(count);
            return ;
        }
        binarysearch(root->left, x, count+1, root->val);
        binarysearch(root->right, x, count+1, root->val);
        return ;
    }
    
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL){
            return false;
        }
        //int count=0,count1=0;
        //int parent=0,parent1=0;
        binarysearch(root, x, 0, 0);
        
        cout<<"first completed"<<endl;
        
         binarysearch(root, y, 0, 0);
       
        cout<<v[0]<<"-"<<v[2]<<endl;
        cout<<v[1]<< " + "<<v[3]<<endl;
       
        if(v[0]!=v[2] && v[1]==v[3]){
            return true;
        }
        return false;
    }
};