#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   vector<int>v={2,2,2,2,2};
   bool all_same=all_of(v.begin(),v.end(),[&](int n){
   return n==v[0];}); 
   if(all_same)
   cout<<"YES"<<endl;
   else
   cout<<"not\n";
   
}