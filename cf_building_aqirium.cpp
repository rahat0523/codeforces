#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 
bool func(ll a[],ll n,ll m,ll k)
{
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
    if(a[i]<m)
    cnt+=(m-a[i]);

    }
   return cnt<=k;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    ll  l=0, h=INT_MAX,ans=INT_MAX;
    while(l<=h)
    {
       ll m=(h-l)/(2+l);
       if(func(a,n,m,k))
       {
        ans=m;
        l=m+1;
       }
       else
       h=m-1;
    }
       cout<<ans<<endl;
 }
}