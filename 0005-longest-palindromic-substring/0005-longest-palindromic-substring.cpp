class Solution {
public:
// we can solve this question using dynamic programming
// if we find the longest common substring between a string and its reverese , we find the longest palindromin subsequence 
// we will start from recursion and move upto tabulation
    string longestPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        int n = s.size();
        if (n <= 1) {
            return s;
        }

        int maxsubstrlength = 0;
        int maxsubstrendindex = 0;
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));  
        // dp stores the length of longest common subsequence between s and rev
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (s[i - 1] == rev[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    if(dp[i][j]>maxsubstrlength)
                    {
                        // Check if the substring is contiguous in the reverse string
                        int revIdx = n - j;
                        if (revIdx + dp[i][j] - 1 == i - 1) {
                            maxsubstrlength = dp[i][j];
                            maxsubstrendindex = i - 1;
                        }
                    }
                } else {
                    dp[i][j] = 0; // because we want to get longest common substring
                }
            }
        }
        return s.substr(maxsubstrendindex - maxsubstrlength + 1, maxsubstrlength);
    }

};