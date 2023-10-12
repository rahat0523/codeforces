#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
    ll s,n;
    cin>>s>>n;
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.emplace_back(a,b);
    }
    sort(v.begin(),v.end());
    int count=0,flag=0;
    while(count!=n)
    {
        if(s>v[count].first)
        {
            s+=v[count].second;
        }
        else 
        {
         flag=1;
         break;
        }
        count++;
    }
    if(flag==1)
    cout<<"NO\n";
    else 
    cout<<"YES\n";

}