#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
 ll int t;
 cin>>t;
 while(t--)
 {
    ll int n;
    cin>>n;
    vector<ll int>a(n);
    vector<ll int>b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll int ans1=b[0]*n,ans2=a[0]*n;
    for(int i=0;i<n;i++)
    {
        ans1+=a[i];
        ans2+=b[i];
    }
    ll int ans=min(ans1,ans2);
    cout<<ans<<endl;
 }   
}