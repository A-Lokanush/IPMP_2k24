#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int a[100], n;
    cout<<"Length of the array : "; 
    cin>>n; 
    cout<<endl;
    cout<<"Enter the numbers to be sorted : ";
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cout<<endl;
    insertionSort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}