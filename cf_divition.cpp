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
    ll n;
    cin>>n;
    if(n>=1900)
    cout<<"Division 1\n";
    else if(1600<=n&&n<=1899)
    cout<<"Division 2\n";
    else if(1400<=n&&n<=1599)
    cout<<"Division 3\n";
    else if(n<=1399)
    cout<<"Division 4\n";
   }
   
}