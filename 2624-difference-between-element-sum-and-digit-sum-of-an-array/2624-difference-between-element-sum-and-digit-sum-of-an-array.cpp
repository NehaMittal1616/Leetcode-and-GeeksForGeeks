class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int elementsum=0;
        int digitsum=0;
        for(int i=0;i<n;i++)
        {
            elementsum+=nums[i];
            int number=nums[i];
            while(number)
            {
                digitsum+=number%10;
                number=number/10;
            }

        }
        return abs(elementsum-digitsum);
    }
};