class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int n = 0;
        for(auto i : nums){
            m[i]++;
        }
        for (auto i : m){
           if (i.second > nums.size()/2)
           {
               n = i.first;
           }   
        }
        return n;
    }
};