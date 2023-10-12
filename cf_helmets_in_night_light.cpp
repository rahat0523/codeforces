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
    int n,p;
    cin>>n>>p;
    ll ans=p;
    ll count=n-1;
    vector<ll>a(n);
    vector<ll>b(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++)
    {
        v.emplace_back(b[i],a[i]);
    }
    sort(v.begin(),v.end());
    for(auto i:v)
    {
       if(count==0)
       break;
       else if(i.first>p)
       {
       ans+=count*p;
       count-=(count);
       }
       else
       {
        ans+=i.first*(min(i.second,count));
        count-=min(i.second,count);
       }

       }
    cout<<ans<<endl;
    }
   }