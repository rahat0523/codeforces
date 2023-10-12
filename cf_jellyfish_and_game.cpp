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
    ll n,m,r;
    cin>>n>>m>>r;
    ll a[n],b[m],suma=0,sumb=0;
    for(ll i=0;i<n;i++)
    {
    cin>>a[i];
    suma+=a[i];
    }
    for(ll i=0;i<m;i++)
    {
    cin>>b[i];
    sumb+=b[i];
    }
    ll maxa=*max_element(a,a+n),mina=*min_element(a,a+n),maxb=*max_element(b,b+m),minb=*min_element(b,b+m),ans;

    if(r%2==0)
    {
      if(n==1)
      ans=min(maxa,minb);
      else if(mina>=maxb)
      {
         ans=suma-maxa+minb;
      }
      else
      ans=suma-mina-maxa+min(mina,minb)+min(maxa,maxb);

    }
    else
    {
      if(n==1)
      ans=max(maxa,maxb);
      else
      {
         ans=suma-mina+maxb;
         ans=max(suma,ans);
      }
    }
    cout<<ans<<endl;
   }  
}