void get2NonRepeatingNos(int arr[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto &x : m)
    {
        if (x.second == 1)
        {
            cout << x.first << " ";
        }
    }
}