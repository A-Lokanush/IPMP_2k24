class Solution {
public:
    void set(vector<int> &v){
        unordered_set<int> s(v.begin(), v.end());
        v.assign(s.begin(), s.end());
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        set(nums1);set(nums2);
        int n1 = nums1.size()-1;
        int n2 = nums2.size()-1;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(n1>=0 && n2>=0){
            if(nums1[n1]==nums2[n2]){
                a.push_back(nums1[n1]);
                n1--; n2--;
            } else if(nums1[n1]>nums2[n2]){
                n1--;
            } else {
                n2--;
            }
        }
        return a;
    }
};