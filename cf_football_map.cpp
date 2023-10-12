#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   ll n;
   cin>>n;
   map<string,int>mp;
   while(n--)
   {
    string s;
    cin>>s;
    mp[s]++;
   }  
   ll max=mp.begin()->second;
   for(auto &i:mp)
   {
      if(i.second>max)
      max=i.second;
   }
   for(auto &i:mp)
   {
      if(i.second==max)
      {
      cout<<i.first;
      break;
      }
   }
}