#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
 int n;
 cin>>n;   
 int a[n];
 map<int,int>mp;
 for(int i=0;i<n;i++)
{
    cin>>a[i];
    mp[a[i]]++;
}
int ans=INT_MIN;
for(int  i=0;i<n;i++)
ans=max(ans,mp[a[i]]);
cout<<ans<<endl;
}