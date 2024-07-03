class Solution {
public:
    int largestInteger(int n) {
        //first of all get all the digits of n
        vector<int>digits;
        while(n)
        {
            int digit=n%10;
            digits.push_back(digit);
            n=n/10;
        }
        reverse(digits.begin(), digits.end()); // to get the digits in n in original order


        // then get even and odd numbers from the digits array 
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<digits.size();i++)
        {
            if(digits[i]%2==0) even.push_back(digits[i]);
            else odd.push_back(digits[i]);
        }
    // sort them separately
    sort(even.begin(), even.end(), greater<int>());
    sort(odd.begin(), odd.end(), greater<int>()); // sorting both in descending order
  

  int evenindex=0;
  int oddindex=0;
  for(int i=0;i<digits.size();i++)
  {
    if(digits[i]%2==0) 
    {
         digits[i]=even[evenindex];
           evenindex++;
    }
    else 
    {
        digits[i]=odd[oddindex];
         oddindex++;
    }
  }
    //now digits array contains all the elements accoring to the given condition 
    int ans=0;
    for(int i=0;i<digits.size();i++)
    {
        ans=10*ans+digits[i];
    }
    return ans;

    }
};