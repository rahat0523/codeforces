#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   ll n,m;
   cin>>n>>m;
   vector<ll>v(m);
   for(ll i=0;i<m;i++)
   cin>>v[i];
   ll ans=v[0]-1;
   for(ll i=1;i<m;i++)
   {
    if(v[i]>=v[i-1])
    ans+=v[i]-v[i-1];
    else
    {
        ans+=(n-v[i-1])+v[i];
    }
   }
   cout<<ans<<endl;

}