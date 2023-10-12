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
    ll n,count=0;
    int flag=0;
    cin>>n;
    while(n!=1)
    {
        if(n%3!=0)
        {
            flag=1;
            break;
        }
         else if(n%6==0)  n=n/6;
        else n=n*2;
        count++;
    }
    if(flag==0)
    cout<<count<<endl;
    else
    cout<<"-1"<<endl;
   }  
}