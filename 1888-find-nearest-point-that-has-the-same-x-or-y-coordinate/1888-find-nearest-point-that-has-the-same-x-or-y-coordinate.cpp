class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n=points.size();
        int minindex=INT_MAX;
        int manhattan=INT_MAX;
        for(int i=0;i<n;i++)
        {
            // means valid point hai
            if(points[i][0]==x || points[i][1]==y)
            {
                int diff=abs(x-points[i][0])+abs(y-points[i][1]);
             
            // manhatten contains the smallest value of manhatten distance
            if(diff<manhattan)
            {
                  manhattan=min(manhattan, diff);
                minindex=i;
            }
            } 
        }

        if(minindex!=INT_MAX)
        {
             return minindex;
        }
         return -1;



        
    }
};