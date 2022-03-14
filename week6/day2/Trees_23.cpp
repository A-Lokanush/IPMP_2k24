// Double Tree

void doubleTree(node* Node){
    node* oldLeft;
     
    if (Node == NULL) return;
     
    doubleTree(Node->left);
    doubleTree(Node->right);
     
    oldLeft = Node->left;
    Node->left = newNode(Node->data);
    Node->left->left = oldLeft;
}
     
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
     
    return(Node);
}
