#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int a[], int n){
    int temp = 0;
    cout<<"The Entered Array : ";
    for (int i = 0; i < n; i++){
        cout<<a[i];
    }
    cout<<"\n\nSorting.....\n\n";
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1; j++){
            if (a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp; }
        }
    }
    cout<<endl;
    cout<<"The Sorted Array : ";
    for (int i = 0; i < n; i++){
        cout<<a[i]<< " ";
    }
    cout<<endl;
}
int main() {
    int a[100], n;
    cout<<"Length of the array : "; 
    cin>>n; 
    cout<<endl;
    cout<<"Enter the numbers to be sorted : ";
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cout<<endl;
    bubbleSort(a, n); return 0; 
}