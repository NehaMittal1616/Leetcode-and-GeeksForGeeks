class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n=nums.size();
        if(n<2)
        {
            return 0;
        }
        int score=nums[0]+nums[1];
        if(n==2)
        {
            return 1;
        }
        int cnt=1;
        n=n-2;
        int i=2;
        while(n-2>=0 && nums[i]+nums[i+1]==score){
            cnt++;
            i=i+2;
           n=n-2;
    
        }
        return cnt;
    }
};