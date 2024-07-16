class Solution {
public:
    int strStr(string haysack, string needle) {
    //  int h_len=haysack.length();
    //  int n_len=needle.length();
    //  if(n_len==0) return 0;
    //  if(n_len>h_len) return -1;
    //  // O((h_len-n_len+1)*n)
    //  for(int i=0;i<=h_len-n_len;i++)
    //  {
    //     if(haysack.substr(i,n_len)==needle)
    //     {
    //         return i;
    //     }
    //  }
    //  return -1;
    return haysack.find(needle);
    }
};