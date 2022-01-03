class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        set<int> s;
        vector<int> v;
        for(auto i : a){
            if(s.find(i) == s.end()){
                s.insert(i);
            } else {
                v.push_back(i);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};