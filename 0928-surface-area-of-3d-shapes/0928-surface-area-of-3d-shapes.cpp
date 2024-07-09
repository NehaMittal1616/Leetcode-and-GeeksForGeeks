class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
     int n = grid.size();
        int surfaceArea = 0;

        // Iterate through each cell in the grid
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] > 0) {
                    // Top and bottom faces
                    surfaceArea += 2;

                    // Side faces
                    // Left side
                    if (i == 0) {
                        surfaceArea += grid[i][j];
                    } else {
                        surfaceArea += max(grid[i][j] - grid[i - 1][j], 0);
                    }

                    // Right side
                    if (i == n - 1) {
                        surfaceArea += grid[i][j];
                    } else {
                        surfaceArea += max(grid[i][j] - grid[i + 1][j], 0);
                    }

                    // Front side
                    if (j == 0) {
                        surfaceArea += grid[i][j];
                    } else {
                        surfaceArea += max(grid[i][j] - grid[i][j - 1], 0);
                    }

                    // Back side
                    if (j == n - 1) {
                        surfaceArea += grid[i][j];
                    } else {
                        surfaceArea += max(grid[i][j] - grid[i][j + 1], 0);
                    }
                }
            }
        }

        return surfaceArea;

    }
};