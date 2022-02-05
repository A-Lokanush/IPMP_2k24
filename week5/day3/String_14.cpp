class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int len = 0,max=0;
        string temp = "";
        for( int i = 0; i<str.length(); i++ ){
            if( temp.find(str[i]) == string::npos ){
                temp.push_back(str[i]);
                len++;
            } else {
                if( len > max){
                    max = len;
                }
                i--;
                temp = ""; len = 0;
            }
        }
        if( len > max){
                    max = len;
        }
        return max;
    }
};