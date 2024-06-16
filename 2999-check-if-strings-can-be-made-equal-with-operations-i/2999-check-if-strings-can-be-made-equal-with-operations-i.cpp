class Solution {
public:
    bool canBeEqual(string s1, string s2) {
       int n=s1.length();
       if(s1==s2)
       {
        return true;
       } 
       string a=s1;
      string b=s1;
      swap(a[0],a[2]);
      if(a==s2)
      {
        return true;
      }
      swap(b[1],b[3]);
      if(b==s2)
      {
        return true;
      }
      swap(s1[0],s1[2]);
      swap(s1[1], s1[3]);
      if(s1==s2)
      {
        return true;
      }
      return false;
    }
};