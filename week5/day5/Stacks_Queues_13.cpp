#include <bits/stdc++.h>
using namespace std;

void printKMax(int *arr, int n, int k)
{
    int i, maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;
    if (k == 1 || k == n)
    {
        for (i = 0; i < n; i++)
            cout << arr[i] << " ";
        return;
    }
    for (i = 0; i < k; i++)
    {
        if (maxA < arr[i])
        {
            maxC = maxB;
            maxB = maxA;
            maxA = arr[i];
        }
        else if (maxB < arr[i])
        {
            maxC = maxB;
            maxB = arr[i];
        }
        else if (maxC < arr[i])
            maxC = arr[i];
    }
    cout << maxA << " ";
    for (i = k; i < n; i++)
    {
        if (maxA < arr[i])
        {
            maxC = maxB;
            maxB = maxA;
            maxA = arr[i];
        }
        else if (maxB < arr[i])
        {
            maxC = maxB;
            maxB = arr[i];
        }
        else if (maxC < arr[i])
            maxC = arr[i];
        if (arr[i - k] == maxA)
        {
            maxA = maxB;
            maxB = maxC;
        }
        cout << maxA << " ";
    }
}
int main()
{
    int arr[] = {1, 5, 2, 7, 8, 4, 7, 2};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    printKMax(arr, n, k);
    return 0;
}