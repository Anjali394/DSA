class Solution {
public:

    void mergeArrays(vector<int>& nums1, vector<int>& nums2, int n, int m, vector<int>& res) {
        int i =0, j=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]) {
                res.push_back(nums1[i]);
                i++;
            } else {
                res.push_back(nums2[j]);
                j++;
            }
        }
        while(i < n) {
        res.push_back(nums1[i++]);
        }

        while(j < m) {
            res.push_back(nums2[j++]);
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {  
        vector<int> res;

    int n = nums1.size();
    int m = nums2.size();

    mergeArrays(nums1, nums2, n, m, res);

    int s = res.size();

    if (s % 2 == 0) {
        return ((double)res[(s/2)-1] + res[s/2]) / 2.0;
    }

    return (double)res[(s-1)/2];
        
    }
};