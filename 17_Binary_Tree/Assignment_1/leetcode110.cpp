// class Solution {
// public:
//     int ans;
//     int level(TreeNode* root){
//         if(root==NULL) return 0;
//         return 1+ max(level(root->left), level(root->right));
//     }
//     bool isBalanced(TreeNode* root) {
//         if(root == NULL) return true;
//         int leftH =  level(root->left);
//         int rightH = level(root->right);
//         if (abs(leftH - rightH) > 1) return false;
//         bool leftAns = isBalanced(root->left);
//         bool rightAns = isBalanced(root->right);
//         return leftAns && rightAns;
//     }
// };