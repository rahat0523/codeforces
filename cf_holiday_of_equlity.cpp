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
   vector<int>v(n);
   for(int i=0;i<n;i++)
   cin>>v[i];
   ll mx=*max_element(v.begin(),v.end());
   ll sum=accumulate(v.begin(),v.end(),0);
   cout<<n*mx-sum<<endl;
}