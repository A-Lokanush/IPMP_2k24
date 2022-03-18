// child sum property

/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        if(root){
            if(root->left != NULL && root->right != NULL){
                if(root->data = root->left->data + root->right->data){
                    return 1 * isSumProperty(root->left) * isSumProperty(root->right);
                } else {
                    return 0;
                }
            } else if(root->left != NULL && root->right == NULL) {
                if(root->data == root->left->data){
                    return 1 * isSumProperty(root->left);
                } else {
                    return 0;
                }
            } else if(root->right != NULL && root->left == NULL ) {
                if(root->data == root->right->data){
                    return 1 * isSumProperty(root->right);
                } else {
                    return 0;
                }
            } else {
                return 1;
            }
        }
        return 1;
    }
};
