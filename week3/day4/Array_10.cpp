class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> a;
        set<vector<int>> ss;
        for (int i = 0; i < n - 1; i++)
        {
            unordered_set<int> s;
            for (int j = i + 1; j < n-1; j++)
            {
                int x = -(nums[i] + nums[j]);
                if (s.find(x) != s.end()){
                    vector<int> ssa;
                    ssa[0] = x;
                    ssa[1] = nums[i];
                    ssa[2] = nums[j];
                    ss[i].assign(ssa.begin(),ssa.end());
                    a[i].assign(ss[i].begin(),ss[i].end());
                }
                else{
                    s.insert(nums[j]);
                }    
            }
        }
        return a;
    }
};