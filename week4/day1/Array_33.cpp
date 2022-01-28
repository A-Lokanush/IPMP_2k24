#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void NumStringSort(vector<char> &str)
{
    sort(str.begin(), str.end());
    for(auto i : str ){
        cout<<i;
    }
}
int main()
{
    char test[] = "abcde";
    std::vector<char> v(test, test + sizeof(test)/sizeof(*test));
    NumStringSort(v);
    return 0;
}