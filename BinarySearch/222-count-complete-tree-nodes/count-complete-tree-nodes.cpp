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
int leftCount(TreeNode* root){
    int c= 0;
    while(root){
        c++;
        root= root->left;
    }
    return c;
}

int rightCount(TreeNode* root){
    int c= 0;
    while(root){
        c++;
        root= root->right;
    }
    return c;
}
    int countNodes(TreeNode* root) {
        int count = 0;
        if(!root){
            return 0;
        }

        int left = leftCount(root->left);
        int right = rightCount(root->right);
        count = countNodes(root->left) + countNodes(root->right)+1;
        return count;
    }
};