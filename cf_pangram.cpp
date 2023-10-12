#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    string s,b="abcdefghijklmnopqrstuvwxyz";
    getline(cin,s);
    {
       for(int i=0;i<n;i++)
        s[i]=tolower(s[i]);
        sort(s.begin(),s.end());
       int r=0,cnt=0;
       for(int i=0;i<n;i++)
       {
        if(s[i]==b[r])
        {
        r++;
        cnt++;
        }
       }
       if(cnt==26)
       cout<<"YES\n";
       else
       cout<<"NO\n";
    }
}