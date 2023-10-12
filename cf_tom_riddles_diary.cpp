#include<bits/stdc++.h>
using namespace std;
int main()
{ 
int t;
cin>>t;
getchar();
map<string,int>m;
while(t--)
{
    string s;
    getline(cin,s);
    if(m[s]==1)cout<<"YES\n";else cout<<"NO\n";
    m[s]=1;
}
   
}