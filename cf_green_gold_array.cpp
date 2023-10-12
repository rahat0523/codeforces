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
    ll n,a;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    vector<ll>ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.emplace_back(a,i);
    }
    sort(v.begin(),v.end(),greater<pair<ll,ll>>());
    for(int i=0;i<n;i++)
    {
        ans[v[i].second]=i+1;
    }
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
   }  
}