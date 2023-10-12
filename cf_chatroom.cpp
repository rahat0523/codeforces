#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r="hello";
    getline(cin,s);
    int x=0,y=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==r[x])
        {
            x++;
            y++;
        }
    }
    if(y==5)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}