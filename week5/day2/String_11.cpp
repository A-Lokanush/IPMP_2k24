#include <bits/stdc++.h>
using namespace std;

int strCmp(string s1, string s2)
{
    if (s1 > s2)
        return 1;
    if (s1 < s2)
        return -1;

    return 0;
}

int main()
{
    string s1 = "1235";
    string s2 = "1234";
    cout << strCmp(s1, s2) << endl;
    return 0;
}