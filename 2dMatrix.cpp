class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int n = matrix.size();
        if (n == 0) return false;
        int m = matrix[0].size();
        for (int i = 0; i < n; ++i) {
            if (std::binary_search(matrix[i].begin(), matrix[i].end(), target)) {
                return true;
            }
        }
        return false;
    }
};
