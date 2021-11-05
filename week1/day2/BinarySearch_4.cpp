#include <iostream>
using namespace std;
int floorSearch(int arr[], int n, int x) {
    if (x >= arr[n - 1])
        return n - 1;

    if (x < arr[0])
        return -1;

    for (int i = 1; i < n; i++)
        if (arr[i] > x)
            return (i - 1);

    return -1;
}
int ceilSearch(int arr[], int low, int high, int x){
    int i;
    if(x <= arr[low])
        return low;
    for(i = low; i < high; i++){
        if(arr[i] == x)
        return i;
        if(arr[i] < x && arr[i+1] >= x)
        return i+1;
    }    
    return -1;
}
int main(){
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;
    int ceil = ceilSearch(arr, 0, n-1, x);
    if(ceil == -1){cout << "Ceil of " << x << " DNE ";}
    else {cout << "Ceil of " << x << " is " << arr[ceil];}
    int floor = floorSearch(arr, n - 1, x);
    if (floor == -1){ cout<<"Floor of "<<x <<" DNE ";}
    else{cout<<"Floor of "<< x <<" is " << arr[floor]; }
    return 0;
}