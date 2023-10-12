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
    ll a,b,n;
    cin>>a>>b>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    cin>>v[i];
    ll count=0,i=0;
    count+=b-1;
    for(ll i=0;i<n;i++)
    {
       if((v[i]+1)>=a)
       {
       count+=a-1;
       }
       else 
       count+=v[i];
    }
    cout<<count+1<<endl;
}  
}