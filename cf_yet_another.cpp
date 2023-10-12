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
   while (t--)
   {
      ll a,b;
      cin>>a>>b;
      ll ans=abs(a-b);
      cout<<ans/10 +(ans%10!=0)<<endl;
   }
     
}