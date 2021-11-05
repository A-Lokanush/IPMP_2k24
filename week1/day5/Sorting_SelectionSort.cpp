#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
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
    selectionSort(a, n);
    cout << "Sorted array: \n";
    for (int i=0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}