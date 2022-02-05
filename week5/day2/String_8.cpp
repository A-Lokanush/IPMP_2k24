#include <bits/stdc++.h>
using namespace std;

void counter(string str)
{
    // unordered_map<char, int> count;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     count[str[i]]++;
    // }

    // for (auto it : count)
    // {
    //     cout<<it.first<<it.second;
    // }
    int n = str.length();
    for (int i = 0; i < n; i++)
    {

        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        cout << str[i] << count;
    }
}

int main()
{
    string str = "kkkoooowwwwaaadexxxxxxywww";
    counter(str);
    return 0;
}