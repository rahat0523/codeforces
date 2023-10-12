#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans++;
        if(v[i]==ans)
        {
         ans++;
        }
 }   
    cout<<ans<<endl;
}
}