#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
      unordered_map<char,string>chartostring;
      unordered_map<string,char>stringtochar;
      istringstream iss(s);

      vector<string>words;
      string word;
      while(iss>>word)
      {
        words.push_back(word);
      }
      if(words.size()!=pattern.size())
      {
        return false;
      }
      for(int i=0;i<pattern.size();i++)
      {
        char c=pattern[i];
        string w=words[i];
         // mapping of the character is already present
         if(chartostring.count(c))
         {
            if(chartostring[c]!=w)
            {
                return false;
            }

         }
         else
         {
            // mapping of the word is already present
            if(stringtochar.count(w))
            {
                if(stringtochar[w]!=c)
                {
                    return false;
                }
            }
            else
         {
            chartostring[c]=w;
            stringtochar[w]=c;
         }
         }
      }
      return true;
    }
};