#include <bits/stdc++.h>
using namespace std;

string removeStr(string s1, string s2)
{
    string res;
    for (int i = 0; i < s1.length(); i++)
    {
        int found = s2.find(s1[i]);
        if (found == string::npos){
            res.push_back(s1[i]);
        }
    }
    return res;
}

int main()
{
    string s1 = "1235";
    string s2 = "1234";
    cout << removeStr(s1, s2) << endl;
    return 0;
}