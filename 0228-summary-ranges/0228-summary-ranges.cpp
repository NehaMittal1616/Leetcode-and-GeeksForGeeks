class Solution {
public:
// we will be using 2 pointer or sliding window approach to solve this question 
    vector<string> summaryRanges(vector<int>& nums) {
       vector<string> result;
    int n = nums.size();
    if (n == 0) return result;

    int start = 0;
    for (int i = 1; i <= n; ++i) {
        // Check if the current number does not form a contiguous sequence
        if (i == n || nums[i] != nums[i - 1] + 1) {
            // Form the range string
            if (start == i - 1) {
                result.push_back(to_string(nums[start]));
            } else {
                result.push_back(to_string(nums[start]) + "->" + to_string(nums[i - 1]));
            }
            // Move the start pointer to the next number
            start = i;
        }
    }

    return result;

       
    }
};