// still some error


/* A binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
//Function to return a list containing elements of left view of the binary tree.
void bfs(Node* root, vector<int> &a){
    queue<Node*> q;
    q.push(root);
    a.push_back(root->data);
    while(!q.empty()){
        auto temp = q.front();
        q.pop();
        if(temp->left){
            q.push(temp->left);
            a.push_back(temp->left->data);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
vector<int> leftView(Node *root)
{
   vector<int> ans;
   bfs(root,ans);
   return ans;
}
