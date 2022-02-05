#include <bits/stdc++.h>
using namespace std;

int Atoi(string str)
{
    int res = 0;

    int sign = 1;

    int i = 0;

    if (str[0] == '-')
    {
        sign = -1;

        i++;
    }

    for (; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]) == 0)
        {
            return -1;
        };
        res = res * 10 + str[i] - '0';
    }

    return sign * res;
}
int main()
{
    string str = "-123a";

    int val = Atoi(str);
    cout << val;
    return 0;
}