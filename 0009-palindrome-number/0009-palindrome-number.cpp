class Solution {
public:
    bool isPalindrome(int x) {
        int rev=x;
        string reve=to_string(rev);
       string xe=to_string(x);
        reverse(reve.begin(), reve.end());
        return (reve==xe); 
    }
};