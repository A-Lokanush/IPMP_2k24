class Solution {
public:
    bool uniqueOccurrences(vector<int>& a) {
        map<int,int> m;
        int sum =0;
        int n = a.size();
        for(int i = 0;i<n;i++){
            m[a[i]]++;
        }
        set<int> s;
        for(auto k = m.begin() ; k != m.end() ; k++){
            s.insert(k->second);
            cout<<k->second;
        }
        for(auto j = s.begin() ; j != s.end() ; j++){
            sum += *j;
        }
        if(a.size()==sum){
            return true;
        } else {
            return false;
        }
    }
};