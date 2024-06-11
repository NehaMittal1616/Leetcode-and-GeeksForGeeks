class Solution {
public:
    bool isinside(int x1, int y1, int x2, int y2, int x, int y) {
        return x >= x1 && x <= x2 && y <= y1 && y >= y2;
        // means the coordinate lie on or inside the fence 
        // if the coordinate lie on or inside the fence , this funcation will returen true
        // otherwise fasle
        // if this function returns true means that the combination of coordinates is not a valid combination
    
    }

    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int xalice = points[i][0];
            int yalice = points[i][1];

            for (int j = 0; j < n; j++) {
                if (i == j) continue; // Skip if both points are the same

                int xbob = points[j][0];
                int ybob = points[j][1];

                // Ensure (xalice, yalice) is the upper left and (xbob, ybob) is the lower right
                if (xalice <= xbob && yalice >= ybob) {
                    bool valid = true;

                    for (int k = 0; k < n; k++) {
                        if (k == i || k == j) continue; // Skip Alice and Bob's positions

                        int x = points[k][0];
                        int y = points[k][1];

                        if (isinside(xalice, yalice, xbob, ybob, x, y)) {
                            valid = false;
                            break;
                        }
                    }

                    if (valid) {
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};
