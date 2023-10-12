#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   ll n;
   cin>>n;
   ll ans=0,i=0;
   while(n)
   {
    n=n&(n-1);
    ans++;
   }
   cout<<ans;
}