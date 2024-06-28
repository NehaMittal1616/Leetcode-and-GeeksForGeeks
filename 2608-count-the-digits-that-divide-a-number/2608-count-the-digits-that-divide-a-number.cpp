class Solution {
public:
    int countDigits(int num) {
        // get the digits of num
        vector<int>digits;
        int number=num;
        while(number)
        {
            int digit=number%10;
            digits.push_back(digit);
            number=number/10;
        }
        int cnt=0;
        for(int i=0;i<digits.size();i++)
        {
            if(num%digits[i]==0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};