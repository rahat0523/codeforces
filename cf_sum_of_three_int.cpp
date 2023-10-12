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
    int n;
    cin>>n;
    if(n<=6||n==9)
    cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        if(n%3==0)
        cout<<1<<" "<<4<<" "<<n-5<<endl;
        else
        cout<<1<<" "<<2<<" "<<n-3<<endl;
    }
   }
}