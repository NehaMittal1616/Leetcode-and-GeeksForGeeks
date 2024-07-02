class Solution {
public:


int reversenumber(int num)
{
    int reversednumber=0;
    while(num!=0)
    {
      int lastdigit=num%10;
      reversednumber=reversednumber*10 +lastdigit;
      num=num/10;
    }
    return reversednumber;
}
    int countDistinctIntegers(vector<int>& nums) {
       set<int>st;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
         int num=nums[i];
         int reversednum=reversenumber(num);
         st.insert(reversednum);
         st.insert(num);

       } 
       return st.size();
    }
};