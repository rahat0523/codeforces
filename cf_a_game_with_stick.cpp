#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   ll a,b;
   cin>>a>>b;
   if(min(a,b)%2==0)
   cout<<"Malvika\n";
   else
   cout<<"Akshat\n";
}