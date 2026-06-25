class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int>ans;
        set<int> s;
    int i =n1-1, j = n2-1;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
        while(i>=0 && j>=0){
            if(nums1[i] == nums2[j]){
                s.insert(nums1[i]);
                i--;
            j--;
            } else if(nums1[i]>nums2[j]){
                i--;
            } else{
                j--;
            }
            
        }
        for(auto x : s){
            ans.push_back(x);
        }
        return ans;
    }
};