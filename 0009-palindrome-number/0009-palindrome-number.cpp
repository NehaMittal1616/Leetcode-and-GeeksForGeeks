class Solution {
public:
// convert x into string and reverse it then check if the reverse string is equal to the original string or not
    bool isPalindrome(int x) {
       string xe=to_string(x);
       string reve=to_string(x);
       reverse(reve.begin(), reve.end());
       return (xe==reve);
    }
};