class Solution {
public:
// time limit exceeded if we use nested for loops , TC =O(N^2)
    long long countCompleteDayPairs(vector<int>& hours) {
    //    long long cnt=0;
    //    int n=hours.size();
    //    for(int i=0;i<n-1;i++)
    //    {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if((hours[i]+hours[j])%24==0)
    //         {
    //             cnt++;
    //         }
    //     }
    //    } 
    //    return cnt;


    // using hashmap 
    // reducing time complexity from O(N^2) to O(N)
   
    unordered_map<int,int>remaindercnt;
    long long cnt=0;
    int n=hours.size();
    for(int i=0;i<n;i++)
    {
     int remainder=hours[i]%24;
       int complement=(24-remainder)%24;
    // we have to find pairs such that (remainder+complement )%24==0
        if(remaindercnt.find(complement)!=remaindercnt.end())
        {
           // complement required is present
           cnt+=remaindercnt[complement];
        }

     remaindercnt[remainder]++; // acts as complement for another elemenent
    }
    return cnt;

    }
};