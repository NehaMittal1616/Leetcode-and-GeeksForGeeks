class Solution {
public:
    int getLucky(string s, int k) {
        int n=s.length();
        vector<int>answer(n);
        int i=0;
        for(char ch:s)
        {
            answer[i]=(ch-'a')+1;
            i++;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int number=answer[i];
            while(number)
            {
                int digit=number%10;
                ans+=digit;
                number=number/10;
            }
        }

        k=k-1;
        if(k==0)
        {
            return ans;
        }
       
        while(k)
        {
        int  result=0;
          while(ans)
          {
            int digit=ans%10;
            result+=digit;
            ans=ans/10;
          }
          k--;
          ans=result;
        
        }
        return ans;

    }
};