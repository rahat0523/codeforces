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
    ll n,k,x;
    cin>>n>>k>>x;
    if(((k*(k+1))/2)>x||((k*(2*n-k+1))/2)<x)
    cout<<"NO\n";
    else
    cout<<"YES\n";
   }  
}