class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>result;
        for(int i=1;i<n;i++)
        {
  // check that i and n-i both does not have any 0 digit
           int a=i;
           int b=n-i;
           // a and b both should not have 0 digit 
          bool ans=true;
          while(a)
          {
            int digit=a%10;
            if(digit==0)
            {
                ans=false;
                break;
            }
            a=a/10;
          }
          while(b)
          {
              int digit=b%10;
              if(digit==0) 
              {
                ans=false;
                break;
              }
              b=b/10;
          }
          if(ans)
          {
            result.push_back(i);
            result.push_back(n-i);
            break;
          }
        }
        return result;

    }
};