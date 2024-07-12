#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int count = 0;
        // Character to indices mapping
        unordered_map<char, vector<int>> mp;
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            mp[s[i]].push_back(i);
        }

        for (const string& str : words) {
            int prevIndex = -1;
            bool isSubsequence = true;
            for (char ch : str) {
                if (mp.find(ch) == mp.end()) {
                    isSubsequence = false;
                    break;
                }
                // Find the smallest index greater than prevIndex using upper_bound
                auto it = upper_bound(mp[ch].begin(), mp[ch].end(), prevIndex);
                if (it == mp[ch].end()) {
                    isSubsequence = false;
                    break;
                }
                prevIndex = *it;
            }
            if (isSubsequence) {
                count++;
            }
        }

        return count;
    }
};
