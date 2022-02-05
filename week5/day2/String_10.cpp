class Solution {
public:
    int firstUniqChar(string s) {
        int min = INT_MAX;
        pair<int,int> hash[100000];
        for( int i =0 ; i<s.length();i++){
            hash[s[i]].first++;
            hash[s[i]].second = i;
        }
        for( auto i : hash){
            if(i.first == 1 && i.second < min){
                min = i.second;
            }
        }
        if( min == INT_MAX ) {
            return -1;
        }
        return min;
    }
};