class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n=colors.size();
        int count=0;
        for(int i=1;i<n-1;i++)
        {
            int c=colors[i];
            int prev=colors[i-1];
            int next=colors[i+1];
            if(c!=prev && c!=next)
            {
                count++;
            }
        }

        if(colors[0]!=colors[n-1] && colors[0]!=colors[1])
        {
            count++;
        }
        if(colors[n-1]!=colors[n-2] && colors[n-1]!=colors[0])
        {
            count++;
        }
        return count;
    }

};