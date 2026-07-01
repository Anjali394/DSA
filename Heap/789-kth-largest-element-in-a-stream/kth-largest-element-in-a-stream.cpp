class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> minh;
    int k;

    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        for (int x : nums) {
            add(x);
        }
    }

    int add(int val) {
        if (minh.size() < k) {
            minh.push(val);
        }
        else if (val > minh.top()) {
            minh.pop();
            minh.push(val);
        }

        return minh.top();
    }
};