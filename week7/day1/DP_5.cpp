// min no. of jumps

class Solution {
public:
    int jump(vector<int>& nums) {
        int len = nums.size() - 1, curr = -1, next = 0, count = 0;
        for (int i = 0; next < len; i++) {
            if (i > curr) {
                count++;
                curr = next;
            }    
            next = max(next, nums[i] + i);
        };
        return count;
    }
};
