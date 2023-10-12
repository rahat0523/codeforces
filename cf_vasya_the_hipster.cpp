#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   vector<ll>v(2);
   for(int i=0;i<2;i++)
   cin>>v[i];
   sort(v.begin(),v.end());
   cout<<v[0]<<" "<<(v[1]-v[0])/2<<endl;  
}