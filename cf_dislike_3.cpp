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
   ll n,count=0;
   cin>>n;
   for(int i=0;i<2000;i++)
   {
    if(i%3==0||i%10==3) continue;
    else count++;
    if(count==n)
    {
        cout<<i<<endl;
    break;
    }
   }  
   }
}