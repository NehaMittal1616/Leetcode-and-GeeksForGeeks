class Solution {
public:
    int captureForts(vector<int>& forts) {
      int n=forts.size();
      int maxcaptured=0;
      // we will move towards right and left for each 1
      for(int i=0;i<n;i++)
      {
        if(forts[i]==1)
        {
            int captured=0;
            // move towards right
            for(int j=i+1; j<n;j++)
            {
                if(forts[j]==0) captured++;
                else if(forts[j]==-1) 
                {
                 maxcaptured=max(maxcaptured, captured);
                 break;
                } 
                else if(forts[i]==1) break;
            }
           // again set captured =0;
           captured=0;
           // move towards left
           for(int j=i-1; j>=0;j--)
           {
              if(forts[j]==0) captured++;
                else if(forts[j]==-1) 
                {
                    maxcaptured=max(maxcaptured, captured);
                    break;
                }
                else if(forts[i]==1) break;
           }
        }
      }
      return maxcaptured;
    }
};