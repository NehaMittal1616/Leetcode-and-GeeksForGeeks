class Solution {
public:
    int splitNum(int num) {
        // first we need to get the digits of num
        vector<int>digits;
        while(num)
        {
             int digit=num%10;
             digits.push_back(digit);
             num=num/10;
        }

        // digits array contains the digits of the number
        sort(digits.begin(),digits.end());
       
       int num1=0;
       int num2=0;
       // num1 and num2 will contain the alternate digits 
       for(int i=0;i<digits.size();i++)
       {
        if(i%2==0)
        {
           num1=num1*10+digits[i];
        }
        else
        {
            num2=num2*10+digits[i];
        }
        
       }
  return num1+num2;
    }
};