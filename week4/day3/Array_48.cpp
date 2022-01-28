class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(auto i : nums){
            m[i]++;
        }
        int max = m[0].second;
        for (auto i : m){
           if (i.second > max)
           {
               max = i.second;
           }   
        }
        for (auto i : m){
            if (i.second == max)
            {
                return i.first;
            }
        }
        return max;
    }
};