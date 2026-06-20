class Solution {
public:
    int mySqrt(int x) {
        int ans;
        if (x ==0 ) return 0;
        int l = 1, h =x;
        while(l<=h){
            int mid = l +(h-l)/2;
            long long square = 1LL * mid * mid;

            if(square == x){
                ans = mid;
                return ans;
            } else if(square >x){
                h = mid-1;
            } else {
                ans = mid;
                l = mid+1;
            }
        }

        return ans;
    }
};