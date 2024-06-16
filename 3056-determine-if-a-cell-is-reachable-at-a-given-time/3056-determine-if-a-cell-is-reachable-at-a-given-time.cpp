#include <set>
#include <utility>
#include<bits/stdc++.h>

class Solution {
public:
    // bool dfs(int currow, int currcol, int fx, int fy, int currtime, int t, std::set<std::pair<int, int>>& visited, int rn[], int cn[]) {
    //     if (currow == fx && currcol == fy && currtime == t) {
    //         return true;
    //     }
    //     if (currtime > t) {
    //         return false;
    //     }
        
    //     visited.insert({currow, currcol});
        
    //     for (int i = 0; i < 8; i++) {
    //         int adjrow = currow + rn[i];
    //         int adjcol = currcol + cn[i];
            
    //         if (adjrow >= 0 && adjcol >= 0 && visited.find({adjrow, adjcol}) == visited.end()) {
    //             if (dfs(adjrow, adjcol, fx, fy, currtime + 1, t, visited, rn, cn)) {
    //                 return true;
    //             }
    //         }
    //     }
        
    //     visited.erase({currow, currcol});
    //     return false;
    // }

    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        // int rn[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
        // int cn[8] = {0, 1, 1, 1, 0, -1, -1, -1};
        // set<std::pair<int, int>> visited;
        
        // return dfs(sx, sy, fx, fy, 0, t, visited, rn, cn);
 

 // USING THE CONCEPT CHEBYSHEV DISTANCE

 int chebyshevDist = max(abs(fx - sx), abs(fy - sy));
        
        // Check if it is possible to reach (fx, fy) from (sx, sy) in exactly t moves
        if (chebyshevDist>t) {
            return false;
        }
        
        

         if(sx==fx && sy==fy)
         {
            return t!=1;
         }
         
       return true;

    }
};
