class Solution {
public:
    bool binary_search(vector<vector<int>>& matrix, int row, int target) {
        int l = 0;
        int h = matrix[row].size() - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (matrix[row][mid] == target)
                return true;
            else if (target < matrix[row][mid])
                h = mid - 1;
            else
                l = mid + 1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++) {
            if (target <= matrix[i][n - 1]) {
                return binary_search(matrix, i, target);
            }
        }

        return false;
    }
};