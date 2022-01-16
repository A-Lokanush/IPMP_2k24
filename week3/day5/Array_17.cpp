// finding min difference
int minDiff(vector<int> &arr)
{
    int arr_size = arr.size();
    int min_diff = abs(a[1], a[0]);
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr_size-1; i++)
       if(abs(a[i+1], a[i])<min_diff){
           min_diff = abs(a[i], a[i+1]);
       }
    return min_diff;
}