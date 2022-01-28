class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        for(auto i: nums){
            if(i%2==0){
                even.push_back(i);
            } else {
                odd.push_back(i);
            }
        }
        even.insert(even.end(),odd.begin(),odd.end());
        return even;
    }
};