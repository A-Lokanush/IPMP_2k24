// getiing the elements which repeats
#include <bits/stdc++.h>
using namespace std;
int getRepetitiveOccurrence(int arr[], int size)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }
    for (auto i : hash)
    {
        if (i.second > 1)
        {
            return i.first;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 5, 4, 5, 2, 4,
                 3, 5, 2, 4, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getRepetitiveOccurrence(arr, n);
    return 0;
}