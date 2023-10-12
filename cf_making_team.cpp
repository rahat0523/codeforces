#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   ll n,l;
   cin>>n>>l;
   vector<ll>v(n);
   for(int i=0;i<n;i++)
   cin>>v[i];
   sort(v.begin(),v.end());
   ll count=0;
   for(int i=0;i<n;i++)
   {
    if(v[i]<=5-l&&v[i+1]<=5-l&&v[i+2]<=5-l)
    {
        count++;
        i+=2;
    }
   }  
   cout<<count<<endl;
}