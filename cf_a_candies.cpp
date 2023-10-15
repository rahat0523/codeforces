#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   ll t,a;
   cin>>t;
   while(t--)
   {
    ll n,ans;
    cin>>n;
    while(n%a!=0)
    {
        a=3;
        ans=n/a;
        a*=(a+1);
    }
    cout<<ans<<endl;
   }
}