class Solution {
public:
   bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        // Checking each row first
        for (int i = 0; i < n; i++) {
            vector<int> rowcheck(n, 0);
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] < 1 || matrix[i][j] > n) {
                    return false; // Check for out-of-bound values
                }
                rowcheck[matrix[i][j] - 1] = 1;
            }
            for (int k = 0; k < n; k++) {
                if (rowcheck[k] == 0) {
                    return false;
                }
            }
        }

        // Checking each column
        for (int j = 0; j < n; j++) {
            vector<int> colcheck(n, 0);
            for (int i = 0; i < n; i++) {
                if (matrix[i][j] < 1 || matrix[i][j] > n) {
                    return false; // Check for out-of-bound values
                }
                colcheck[matrix[i][j] - 1] = 1;
            }
            for (int k = 0; k < n; k++) {
                if (colcheck[k] == 0) {
                    return false;
                }
            }
        }

        return true;
    }
};