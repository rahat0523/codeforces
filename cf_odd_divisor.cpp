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
    while(n!=0)
    {
        if(n%2==0)
        n=n/2;
        else 
        break;
    }
    if(n==1)
    cout<<"NO\n";
    else
    cout<<"YES\n";
   }  
}