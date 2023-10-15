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
    int n,x;
    cin>>n>>x;
    if(n<2)
    cout<<"1\n";
    else
    {
        cout<<1+ceil((n-2)/(x*1.00))<<endl;
    }
   }  
}