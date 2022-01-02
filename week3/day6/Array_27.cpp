// decreasing part not coming
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int sum = 0;
        map<int,int> m;
        vector<int> ans;
        vector<int> ret;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        set<int> s;
        for(auto k = m.begin() ; k != m.end() ; k++){
            s.insert(k->second);
            ans.push_back(k->second);
            cout<<k->first<<" "<<k->second<<"\n";
        }
        for(auto j = s.begin() ; j != s.end() ; j++){
            sum += *j;
        }
        if(nums.size()==sum){
            for( auto i : s){
                for( auto j : m){
                    if( i == j.second ){
                        int n = j.second;
                        while(n>0){
                          ret.push_back(j.first);n--;   
                        }
                    }
                }
            }
        } else {
            sort(ans.begin(),ans.end());
            for( auto i : ans){
                for( auto j : m){
                    if( i == j.second ){
                        int n = j.second;
                        while(n>0){
                          ret.push_back(j.first);n--;   
                        }
                    }
                }
            }
        }
        
        return ret;
    }
};