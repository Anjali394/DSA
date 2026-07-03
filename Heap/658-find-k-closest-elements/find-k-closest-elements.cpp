class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int>ans;
        priority_queue<pair<int,int>>maxh;

        for(int i=0; i<n; i++){
            int dis = abs(arr[i]-x);
         
            maxh.push(make_pair(dis, arr[i]));

            if(maxh.size()>k){
                maxh.pop();
            }
        }

        while(maxh.size()>0){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(ans.begin(), ans.end());

        return ans;
        
    }
};