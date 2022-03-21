// print all roots to leaf

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
    vector<string> result;
    char buffer[32];
    
    vector<string> binaryTreePaths(TreeNode* root) {
        string s;
        
        if(root == NULL)
            return result;
            
        find_path_string(root, s);
        
        return result;
    }
    
    void find_path_string(TreeNode* root, string path){
        
        if(root->left == NULL && root->right == NULL){
            sprintf(buffer, "%d", root->val);
            path = path + buffer;
            result.push_back(path);
            return ;
        }
        
        sprintf(buffer, "%d->", root->val);
        path += buffer;
        
        if(root->left != NULL){
            find_path_string(root->left, path);
        }
        
        if(root->right != NULL){
            find_path_string(root->right, path);
        }
        
        return ;
    }
};
