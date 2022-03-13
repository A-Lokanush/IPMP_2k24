/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
       queue<Node *> q;
       q.push(root);
       int l=0,es=0,os=0;
       while(!q.empty()){
           int size = q.size();
           l++;
           while(size>0){
               Node * temp = q.front();
               
               if(l % 2 == 0)
                es += temp->data;
               else
                os += temp->data;
                
               if(temp->left){
                   q.push(temp->left);
               }
               if(temp->right){
                   q.push(temp->right);
               }
               q.pop();
               size--;
           }
       }
       return os - es;
    }
};