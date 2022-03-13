/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    /*You are required to complete this method*/
    bool recursion(Node * root,int level, int * leaflevel){
        if(root)
           return true;
           
        if(root->left==NULL && root->right==NULL){
            if(*leaflevel==0){
                *leaflevel = level;
                return true;
            }
            return (level == *leaflevel);
        }   
        
        return recursion(root->left,level+1,leaflevel) && recursion(root->right,level+1,leaflevel);
    }
    bool check(Node *root)
    {
       int level = 0, leaflevel = 0;
       return recursion(root,level,&leaflevel);
    }
};
