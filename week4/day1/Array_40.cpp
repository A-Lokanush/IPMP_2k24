class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        if(k > nums.size()){
            k = k % nums.size();
        }
        for(int i = k; i > 0;i--){
            temp.push_back(nums[nums.size()-i]);
        }
        nums.erase(nums.end()-k,nums.end());
        nums.insert(nums.begin(),temp.begin(),temp.end());
    }
};