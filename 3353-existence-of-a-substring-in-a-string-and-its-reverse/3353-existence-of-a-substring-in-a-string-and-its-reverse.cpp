#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubstringPresent(string s) {
       int n=s.size();
       string rev=s;
       reverse(rev.begin(), rev.end());
       for(int i=0;i<n-1;i++)
       {
        char ch1=s[i];
        char ch2=s[i+1];
        for(int i=0;i<n;i++)
        {
            if(ch1==rev[i] && ch2==rev[i+1])
            {
                return true;
            }
        }
       }
       return false;
    }
};