class Solution {
public:

struct cmp {
    bool operator()(pair<int,string> &a, pair<int,string> &b) {
        if (a.first == b.first)
            return a.second < b.second;   // lexicographically smaller has lower priority
        return a.first > b.first;         // smaller frequency at the top
    }
};
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>mp;
        int n = words.size();
        for(int i=0; i<n; i++){
            mp[words[i]]++;
        }
        // minheap
        priority_queue<pair<int,string>, vector<pair<int,string>>, cmp>minh;

        for(auto x : mp){
            minh.push(make_pair(x.second, x.first));

            if(minh.size()>k){
                minh.pop();
            }
        }
        vector<string>ans;
        while(minh.size()>0){
            ans.push_back(minh.top().second);
            minh.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};