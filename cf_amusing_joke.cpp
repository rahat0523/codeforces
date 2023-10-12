#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,s;
    cin>>a>>b>>s;
    a+=b;
    sort(s.begin(),s.end());
    sort(a.begin(),a.end());
    int x=a.compare(s);
    if(x==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}