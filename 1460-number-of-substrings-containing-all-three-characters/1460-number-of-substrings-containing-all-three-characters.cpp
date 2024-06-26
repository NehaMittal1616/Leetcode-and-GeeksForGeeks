class Solution {
public:

// in this question , we have to return number of substrings with xactly 3 characters
// we will be using 2 pointer approach (sliding window protocol)
    int numberOfSubstrings(string s) {
        int l=0;
        int r=0;
        int count=0;
       int n=s.size();
       unordered_map<char, int>mp;
        while(r<n)
        {
            mp[s[r]]++;
            while(mp['a']>0 && mp['b']>0 && mp['c']>0)
            {
                count+=n-r;
                mp[s[l]]--;
                l++;
            }
            r++;
        }
        return count;
    }
};