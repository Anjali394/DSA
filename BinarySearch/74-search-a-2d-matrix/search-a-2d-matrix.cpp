class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0;
        int h = n*m-1;

        while (l <= h) {
            int mid = l + (h - l) / 2;
//             row = mid / n;
//             col = mid % n;
//          because each row contains n elements.
int val = matrix[mid/m][mid % m];

            if (val == target)
                return true;
            else if (target > val)
                l = mid + 1;
            else
                h = mid - 1;
        }

        return false;
    }
};