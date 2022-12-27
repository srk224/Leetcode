#include<iostream>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
void height_Tree(TreeNode* root,int cur,int &maxm) {
    if (root == NULL){
        maxm = max(cur,maxm);
        return;
    }
    height_Tree(root->left,cur+1,maxm);
    height_Tree(root->right,cur+1,maxm);
}
void findsum(TreeNode* root,int cur,int &ans,int depth) {
    if (cur == depth){
        ans += root->val;
        return;
    }
    if (root->left!=nullptr)
        findsum(root->left,cur+1,ans,depth);
    if (root->right!=nullptr)
        findsum(root->right,cur+1,ans,depth);
}
    int deepestLeavesSum(TreeNode* root) {
        int maxm = 0;
        height_Tree(root,0,maxm);
        int depth = maxm;
        int ans = 0;
        findsum(root,1,ans,depth);
        return ans;
    }
