class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // find NGR of nums2, 
        // store in map along with NGR, 
        // match with nums1 and return;
        int n = nums2.size();
        stack<int>st;
        unordered_map<int,int>mp;
        vector<int>ans;

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && nums2[i]>=st.top()){
                st.pop();
            }
            if(st.size()==0){
                // /ans.push_back(-1);
                mp[nums2[i]] = -1;
            } else {
                // /ans.push_back(st.top());
                mp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }

        for(int x : nums1){
            ans.push_back(mp[x]);
        }
        return ans;
        
    }
};