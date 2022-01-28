class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> zeros;
        vector<int> ones;
        vector<int> twos;
        for(auto i: nums){
            if(i==0){
                zeros.push_back(i);
            } else  if(i==1){
                ones.push_back(i);
            } else {
                twos.push_back(i);
            }
        }
        zeros.insert(zeros.end(),ones.begin(),ones.end());
        zeros.insert(zeros.end(),twos.begin(),twos.end());
        return zeros;
    }
};