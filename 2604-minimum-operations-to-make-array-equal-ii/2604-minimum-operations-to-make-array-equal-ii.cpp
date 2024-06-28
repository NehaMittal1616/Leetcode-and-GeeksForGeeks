class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        if (k == 0 && nums1!=nums2) return -1;
         if(k==0 && nums1==nums2) return 0;
        long long subtract = 0;
        long long add = 0;
        int n = nums1.size();

        for (int i = 0; i < n; ++i) {
            long long diff = nums1[i] - nums2[i];
            if (diff % k != 0) {
                // If the difference is not divisible by k, it's impossible to make the arrays equal
                return -1;
            }

            if (diff > 0) {
                subtract += diff / k;
            } else if (diff < 0) {
                add += -diff / k;
            }
        }

        if (subtract != add) {
            // If the total additions needed don't match the total subtractions, it's impossible
            return -1;
        }

        // Each operation can adjust both an addition and a subtraction simultaneously
        return subtract;
    }
};