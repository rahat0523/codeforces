#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   ll n,a,b,ans;
   cin>>n;
   if(n<0)
   {
    n=abs(n);
    //if(n==10)
    //cout<<0<<endl;
   // else
    {
     a=n%10;
     b=(n%100)/10;
     if(a>=b)
     {
     ans=((n/10)==0)?-0:n/10;
     cout<<-1*ans<<endl;
     }
     else
     {
     ans=((n/100)*10+a)==0?-0:(n/100)*10+a;
     cout<<-1*ans<<endl;
     }
    }
   }  
   else
   cout<<n<<endl;
}