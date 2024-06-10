class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        int ans=0;
        if(n==0)
        {
            return 0;
        }
        unordered_set<char>st;
       // we are putting all the lowercase characters in set
       // then for each uppercase character we will simply checkmif its lowercase character exists in set
       for(int i=0;i<n;i++)
       {
       
            st.insert(word[i]);
       }

       for(int i=0;i<n;i++)
       {

        if(isupper(word[i]) && st.find(word[i])!=st.end())
        {
            if(st.find(tolower(word[i]))!=st.end())
            {
                ans++;
            }
             st.erase(word[i]);
        }
        
       }
        return ans;
    }
};