// class Solution {
// public:
// bool mirror(TreeNode* left, TreeNode* right){
//     if(left == NULL && right == NULL) return true;
//     if(left == NULL || right == NULL) return false;
//     else{
//         if(left->val == right->val){
//             return mirror(left->left,right->right) && mirror(left->right,right->left);
//         } else return false;
//     }
// }
//     bool isSymmetric(TreeNode* root) {
//         if(root == NULL) return true;
//         return mirror(root->left,root->right);
//     }
// };