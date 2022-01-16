// next smallest palindrome
#include <iostream>
using namespace std;
void nxtPalindrome(int x)
{
    int count = 0;
    int temp = x;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    int a[count - 1];
    int c = count;
    temp = x;
    while (temp != 0)
    {
        a[c - 1] = temp % 10;
        temp = temp / 10;
        c--;
    }
    int mid = count / 2;
    int i = 1;
    while ((mid - i) > 0 && (mid + i) < count)
    {
        if (a[mid - i] > a[mid + i])
        {
            a[mid + i] = a[mid - i];
        }
        else if (a[mid - i] < a[mid + i])
        {
            a[mid - i] += 1;
            a[mid + i] = a[mid - i];
        }
    }
    for (int k = 0; k < count; k++)
    {
        cout << a[k] << " ";
    }
}
int main()
{
    nxtPalindrome(400);
}