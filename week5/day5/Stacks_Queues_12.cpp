#include<bits/stdc++.h>
using namespace std;
  
class Stacks
{
    int *arr; 
    int *top;   
    int *next;  
    int n, k;
    int free; 
public:
    Stacks(int k, int n);
    bool isFull()   {  return (free == -1);  }
    void push(int item, int sn);
    int pop(int sn);
    bool isEmpty(int sn)  {  return (top[sn] == -1); }
};
  
Stacks::Stacks(int k1, int n1)
{
    k = k1, n = n1;
    arr = new int[n];
    top = new int[k];
    next = new int[n];
  
    for (int i = 0; i < k; i++)
        top[i] = -1;
  
    free = 0;
    for (int i=0; i<n-1; i++)
        next[i] = i+1;
    next[n-1] = -1; 
}
  
void Stacks::push(int item, int sn)
{
    if (isFull())
    {
        cout << "\nStacks Overflow\n";
        return;
    }
    int i = free;      
    free = next[i];
    next[i] = top[sn];
    top[sn] = i;
    arr[i] = item;
}
  
int Stacks::pop(int sn)
{
    if (isEmpty(sn))
    {
         cout << "\nStacks Underflow\n";
         return INT_MAX;
    }
    int i = top[sn];
    top[sn] = next[i];
    next[i] = free;
    free = i;
    return arr[i];
}
  
int main()
{
    int k = 3, n = 10;
    Stacks s(k, n);
  
    s.push(15, 2);
    s.push(45, 2);
  
    s.push(17, 1);
    s.push(49, 1);
    s.push(39, 1);
  
    s.push(11, 0);
    s.push(9, 0);
    s.push(7, 0);
  
    cout << "Popped element from Stacks 2 is " << s.pop(2) << endl;
    cout << "Popped element from Stacks 1 is " << s.pop(1) << endl;
    cout << "Popped element from Stacks 0 is " << s.pop(0) << endl;
  
    return 0;
}