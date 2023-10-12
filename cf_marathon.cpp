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
    int ans=0;
   vector<int>v(4);
   for(int i=0;i<4;i++)
   cin>>v[i];
    for(int i=1;i<4;i++)
    {
        if(v[i]>v[0])
        ans++;
    }
    cout<<ans<<endl;
   }  
}