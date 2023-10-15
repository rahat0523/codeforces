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
    ll n,ans,a;
    cin>>n;
    a=3;
    ans=n/3;
    while(n%a)
    {
        a=a*2+1;
        ans=n/a;
        
    }
    cout<<ans<<endl;
   }
}