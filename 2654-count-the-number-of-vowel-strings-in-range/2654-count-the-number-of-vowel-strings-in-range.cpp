class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
         for(int i=left; i<=right; i++)
         {
            string it=words[i];
          if((it[0]=='a'|| it[0]=='e' || it[0]=='i' || it[0]=='o' || it[0]=='u')  && (it[it.length()-1]=='a' ||it[it.length()-1]=='e' ||it[it.length()-1]=='i' ||it[it.length()-1]=='o' ||it[it.length()-1]=='u'))
        {
            count++;
        }
    
         }
            
        
        return count;
    }
};