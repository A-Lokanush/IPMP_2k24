int minDiff(vector<int> &arr)
{
    int arr_size = arr.size();
    int min_diff = abs(a[1], a[0]);
    int i = 0, j = 0;
    while (i < arr_size)
    {
        j = i + 1;
        while (j < arr_size)
        {
            if (abs(a[j], a[i]) < min_diff)
            {
                min_diff = abs(a[j], a[i]);
            }
            j++;
        }
        i++;
    }

    return min_diff;
}
