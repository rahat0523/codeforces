#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   vector<ll>v(4);
   for(int i=0;i<4;i++)
   {
    cin>>v[i];
   }
   sort(v.begin(),v.end());
   ll a,b,c;
   a=abs(v[3]-v[0]);
   b=abs(v[1]-a);
   c=abs(v[2]-a);
   cout<<a<<" "<<b<<" "<<c<<" "<<endl;
}