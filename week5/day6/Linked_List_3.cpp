#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *next;
}*head = NULL;
void push(struct node **head_ref, int new_val)
{
    struct node *temp =
        (struct node *)malloc(sizeof(struct node));
    temp->val = new_val;
    temp->next = (*head_ref);
    (*head_ref) = temp;
}
void printReverse(struct node *head)
{
    cout << head->val << " ";    
    if(head->next != NULL)
        printReverse(head->next);
        
}
int main()
{
    int n;
    do{
        cout<<"1. Insert 2.Print Reverse 3. Exit\n";
        cin>>n;
        switch(n){
            case 1:
                int x;
                cout<<"Enter the value to be inserted : ";
                cin >> x;
                push(&head, x);
                break;
            case 2:
                printReverse(head);
                break;
            case 3:
                exit(0);
        }
    }while(n!=3);    
    return 0;
}    