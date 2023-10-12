#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   vector<int>v(4);
   for(int i=0;i<4;i++)
   cin>>v[i];
   string s;
   cin>>s;
   int ans=0;
   for(int i=0;i<s.size();i++)
   {
      ans+=v[s[i]-'0'-1];
   }
    cout<<ans<<endl;
}