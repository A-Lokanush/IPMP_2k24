int minSum(vector<int>& arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int min = INT_MAX, x, y;
    for (int i = 1; i < n; i++) {
        if (abs(arr[i - 1] + arr[i]) <= min) {
            min = abs(arr[i - 1] + arr[i]);
            x = i - 1;
            y = i;
        }
    }

    return min
}