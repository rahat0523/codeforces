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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(max(a,b)>min(c,d)&&max(c,d)>min(a,b))
    cout<<"YES\n";
    else
    cout<<"NO\n";
   }
}