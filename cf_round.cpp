#include<bits/stdc++.h>
using namespace std;
pow(int n)
{ 
    int r=1;
    for(int i=1;i<=n;i++)
    {
        r*=10;
    }
    return r;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      vector<int>a;
      string s;
      cin>>s;
      int count;
      reverse(s.begin(),s.end());
      for(int i=0;i<s.length();i++)
      {
        if(s[i]!='0')
        {
            int r=s[i]-'0';
           a.push_back(r*(pow(i)));
        }
      }
      cout<<a.size()<<"\n";
      for(int i=0;i<a.size();i++)
      cout<<a[i]<<" ";
      cout<<"\n";
    }
}