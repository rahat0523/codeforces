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
    string s;
    cin>>s;
   if(s.size()%2!=0)
   cout<<"NO\n";
   else 
   {
    if(s.substr(0,s.size()/2)==s.substr(s.size()/2))
    cout<<"YES\n";
    else
    cout<<"NO\n";
   }
   }
}