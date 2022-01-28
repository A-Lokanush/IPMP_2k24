class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> zeros;
        vector<int> ones;
        for(auto i: nums){
            if(i==0){
                zeros.push_back(i);
            } else {
                ones.push_back(i);
            }
        }
        zeros.insert(zeros.end(),ones.begin(),ones.end());
        return zeros;
    }
};