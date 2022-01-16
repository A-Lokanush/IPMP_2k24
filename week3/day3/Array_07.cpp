// next biggest permutation
class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n = a.size();
        for( int i = n-1 ; i > 0 ; i-- ){
            if(a[i-1]<a[i]){
                vector<int> substr;
                int min = a[i],pos = i;
                for (int j = i ; j < n ; j++ ){
                    if(min > a[i-1] && min < a[j]){
                        min = a[j];
                        pos = j;
                    }
                }
                int temp = a[i-1];
                a[i-1] = min;
                a[pos] = temp;
                substr.assign(a[i],a[n-1]);
                sort(substr.begin(),substr.end());
                for(int k = 0 ; k < i ; k++ ){
                    cout<<a[k]<<" ";
                }
                for(auto m : substr){
                    cout<<m<<" ";
                }
            }
            return;
        }
        sort(a.begin(),a.end());
        for(auto m : a){
            cout<<m<<" ";
        }
    }
};