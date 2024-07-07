class Solution {
public:
// is it possible to amke all the strings eual if all the characters are be divided equally among each element in the array
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            string s1=words[i];
            for(char ch: s1)
            {
                mp[ch]++;
            }
          
        }
        for(auto it:mp)
        {
            // means the character can not be divided equally among the elements of the array
            if(it.second%n!=0)
            {
                return false;
            }
        }
        return true;
    }

};