class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n=apple.size();
        int m=capacity.size();
        int totalapples=0;
        for(int i=0;i<n;i++)
        {
            totalapples+=apple[i];
        }
        int boxes=0;
        sort(capacity.begin(),capacity.end());
        reverse(capacity.begin(),capacity.end());
        // we have sorted the array in descending order
        for(int i=0;i<m && totalapples>0;i++)
        {
               if(capacity[i]>=totalapples)
                 {
                    totalapples=0;
                    boxes++;
                 }
                 else
                 {
                    boxes++;
             totalapples=totalapples-capacity[i];
              
                 }
                
            

        }
        return boxes;
        
    }
};