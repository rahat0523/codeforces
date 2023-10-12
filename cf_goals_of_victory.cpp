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
   ll n;
   cin>>n;
   vector<ll>v(n-1);  
   for(ll i=0;i<n-1;i++)
   {
   cin>>v[i];
   }
   ll sum=accumulate(v.begin(),v.end(),0);
   cout<<-1*sum<<endl;
   }
}