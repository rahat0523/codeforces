#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   ll n,m,a,b;
   cin>>n>>m>>a>>b;
   ll ans1,ans2,ans3,minimum;
   ans1=n*a;
   ans2=(n/m)*b+(n%m)*a;
   ans3=(n/m+(n%m!=0))*b;
   minimum=min(ans1,ans2);
   cout<<min(minimum,ans3)<<endl;  
}