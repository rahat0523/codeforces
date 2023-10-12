#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   int t;
   cin>>t;
   while(t--)
   {
    int n,ans=0,ans1=0;
    cin>>n;
    if((n/2)%2!=0)
    cout<<"NO\n";
    else
    {
      cout<<"YES\n";
        for(int i=2;i<=n;i+=2)
        {
          cout<<i<<" ";
          ans+=i;
        }
        for(int i=1;i<n-2;i+=2)
        {
            cout<<i<<" ";
            ans1+=i;
        }
        cout<<ans-ans1<<endl;
    }
   }
}