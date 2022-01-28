class Solution
{
public:
    int subarraySum(vector<int> &arr, int sum)
    {
        int curr_sum = arr[0], start = 0, count = 0,i;
        int n = arr.size();
        for (i = 1; i <= n; i++)
        {
            while (curr_sum > sum && start < i - 1)
            {
                curr_sum = curr_sum - arr[start];
                start++;
            }
            if (curr_sum == sum)
            {
                count++;
            }
            if (i < n)
                curr_sum = curr_sum + arr[i];
        }
        return count;
    }
};