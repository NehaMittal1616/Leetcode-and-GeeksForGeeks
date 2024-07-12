class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
    
       vector<string>morse={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
       set<string>st;
       for(int i=0;i<words.size();i++)
       {
           string s1=words[i];
           string code="";
           for(char ch:s1)
           {
            code+=morse[ch-'a'];
           }
           st.insert(code);
       } 
       return st.size();

    }
};