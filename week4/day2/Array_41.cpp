#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nEnter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "\nEnter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxSubArraySum = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = temp + a[i];
        if (temp < 0)
        {
            temp = 0;
        }
        if (temp > maxSubArraySum)
        {
            maxSubArraySum = temp;
        }
    }
    cout << "The maximum subarray sum is: " << maxSubArraySum << endl;
    return 0;
}
