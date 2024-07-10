class Solution {
public:
    int numTeams(vector<int>& rating) {
       int n=rating.size();
        int count=0;
        for(int i=0;i<=n-3;i++)
        {
            int ele=rating[i];
            for(int j=i+1;j<n;j++)
            {
                if(rating[j]>rating[i])
                {
                    for(int k=j+1;k<n;k++)
                    {
                        if(rating[k]>rating[j])
                        {
                            count++;
                        }
                    }
                }
                else if(rating[j]<rating[i])
                {
                    for(int k=j+1;k<n;k++)
                    {
                        if(rating[k]<rating[j])
                        {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};