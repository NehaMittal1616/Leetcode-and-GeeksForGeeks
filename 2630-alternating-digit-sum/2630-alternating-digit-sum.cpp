class Solution {
public:
    int alternateDigitSum(int n) {
        // get the digits of the number
        vector<int>digits;
        while(n)
        {
           int digit=n%10;
            digits.push_back(digit);
            n=n/10;
        }
        reverse(digits.begin(), digits.end());
        int sum=0;
        sum+=digits[0];
        for(int i=1;i<digits.size();i++)
        {
           if(i%2==0) sum+=digits[i];
           else
           {
            sum-=digits[i];
           }
        }
        return sum;
    }
};