void allPermutation(string str)
{
    sort(str.begin(), str.end());
    do{
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}