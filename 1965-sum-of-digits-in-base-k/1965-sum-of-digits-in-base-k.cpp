class Solution {
public:
    int sumBase(int n, int k) {
        // first step is basically converting a number from base 10 to base k
        vector<int>digits;
        while(n>0)
        {
            digits.push_back(n%k);
            n=n/k;
        }
        // sum of digits
        int sum=0;
        for(int i=0;i<digits.size();i++)
        {
            sum+=digits[i];
        }
        return sum;
    }
};