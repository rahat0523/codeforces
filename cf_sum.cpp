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
    vector<int>v(3);
    for(int i=0;i<3;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    if(v[2]==v[0]+v[1])
    cout<<"YES\n";
    else
    cout<<"NO\n";
   }  
}