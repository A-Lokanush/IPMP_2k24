// left subArra is same as right subArray, find such index
class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int sum = 0,leftSum = 0;
        for (auto i : nums ){ sum+= i;}
        for(int j =0; j<nums.size() ; j++) {
            if( leftSum == sum - leftSum - nums[j])
                return j;
            leftSum += nums[j];
        }
        return -1;
    }
};