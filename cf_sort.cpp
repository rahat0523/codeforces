#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    string a="abc",s;
    cin>>s;
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=a[i])
        j++;
    }
    if(j==3)
    cout<<"NO\n";
    else
    cout<<"YES\n";
 }   
}