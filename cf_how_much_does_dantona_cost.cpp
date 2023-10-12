#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
   vector<ll>::iterator i;
    (i=find(v.begin(),v.end(),k));
    if(i!=v.end())
    cout<<"YES"<<endl;
    else
    cout<<"NO\n";
   }
}