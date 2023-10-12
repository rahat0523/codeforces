#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        mp[b]=a;
    }
    while(m--)
    {
        string s,s1;
        cin>>s>>s1;
        s1.pop_back();
        cout<<s<<" "<<s1<<"; #"<<mp[s1]<<endl;
    }
}