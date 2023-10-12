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
    ll a,n=6,b,ans1=0,ans2=0,count=0;
    cin>>a;
    while(n--)
    {
        count++;
       if(count>3)
       {
       ans1+=a%10;;
       }
       else
       {
       ans2+=a%10;
       }
       a=a/10;
    }
    //cout<<ans1<<" "<<ans2<<endl;
    if(ans1==ans2)
    cout<<"YES\n";
    else
    cout<<"NO\n";
  }  
}