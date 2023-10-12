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
   deque<ll>v(n);
   for(ll i=0;i<n;i++)
   cin>>v[i];
   /*for(ll i=0;i<n;i++)
   cout<<v[i]<<" ";*/
   ll ans1=0,ans2=0,a,b;
   for(int i=0;i<n;i++)
   {
    a=v.front();
    b=v.back();
    if(a>b)
    {
    v.pop_front();
    if(i%2==0)
    ans1+=a;
    else ans2+=a;

    }
    else
    {
    v.pop_back();
    if(i%2==0)
    ans1+=b;
    else ans2+=b;
    }
   }
   cout<<ans1<<" "<<ans2<<endl;
}