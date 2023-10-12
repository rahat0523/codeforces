#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   ll t;
   cin>>t;
   while(t--)
   {
   map<int,int>mp;
   vector<int>v;
    ll n,x;
    cin>>n;
    while(n--)
    {
        ll a;
        cin>>a;
        mp[a]++;
        v.push_back(a);
    }
    for(auto i:mp)
    {
        if(i.second==1)
        x=i.first;
    }
   auto i=find(v.begin(),v.end(),x);
   cout<<distance(v.begin(),i)+1<<endl;
   }  
}