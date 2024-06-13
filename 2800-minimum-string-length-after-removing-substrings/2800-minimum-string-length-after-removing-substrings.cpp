class Solution {
public:
    int minLength(std::string s) {
        int n = s.size();
        if (n == 0) {
            return 0;
        }

        stack<char> st;

        // Iterate over each character in the string
        for (int i = 0; i < n; i++) {
            if (!st.empty() && ((s[i] == 'B' && st.top() == 'A') || (s[i] == 'D' && st.top() == 'C'))) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }

        return st.size();
    }
};