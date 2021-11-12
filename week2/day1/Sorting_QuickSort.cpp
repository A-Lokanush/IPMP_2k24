#include <bits/stdc++.h>
using namespace std; 
void display(int a[], int n) { 
    int i; 
    for (i = 0; i < n; i++) 
        cout << a[i] << " "; 
    cout << endl; 
} 
void swap(int* a, int* b) {  int t = *a;  *a = *b;  *b = t; } 
int partition (int a[], int l, int h) { 
    int pivot = a[h];
    int i = (l - 1); 
    for (int j = l; j <= h - 1; j++) { 
        if (a[j] < pivot) { 
            i++;
            swap(&a[i], &a[j]); 
        } 
    } 
    swap(&a[i + 1], &a[h]); 
    return (i + 1); 
} 
void quickSort(int a[], int l, int h) { 
    if (l < h) { 
        int part = partition(a, l, h); 
        quickSort(a, l, part - 1); 
        quickSort(a, part + 1, h); 
    } 
} 
int main() {
    int a[] = {9, 1, 5, 10, 7, 8, 19};
    int n = sizeof(a) / sizeof(a[0]); 
    quickSort(a, 0, n - 1); 
    cout << "Sorted Array: \n"; 
    display(a, n);  return 0; 
}