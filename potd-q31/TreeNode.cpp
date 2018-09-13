#include "TreeNode.h"

int getHeightBalance(TreeNode* root,int level) {
  if(root->left_ ==NULL and root->right_ == NULL)
    return level;
  int left = 0, right =0;
  if(root->left_ !=NULL )
    left = getHeightBalance(root->left_,++level);
  if(root->right_ !=NULL)
    right = getHeightBalance(root->right_,++level);
  if(left>right)
    return left;
  return right;
}
int getHeightBalance(TreeNode* root) {
  int level = 0;
  if(root->left_ ==NULL and root->right_ == NULL)
    return level;
  int left = 0, right =0;
  if(root->left_ !=NULL )
    left = getHeightBalance(root->left_,1);
  if(root->right_ !=NULL)
    right = getHeightBalance(root->right_,1);
  return left-right;
}

bool isHeightBalanced(TreeNode* root) {

  return (getHeightBalance(root)==0);
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}

