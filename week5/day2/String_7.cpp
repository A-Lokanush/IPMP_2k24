int lexRank(string s)
{
    int count = 0;
    string str = s;
    sort(str.begin(), str.end());
    do
    {
        if (strcmp(s, str) == 0)
        {
            count++;
        }
    } while (next_permutation(str.begin(), str.end()));
    return count;
}