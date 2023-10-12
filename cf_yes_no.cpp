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
    string s,a;
    cin>>s;
    for(int i=0;i<3;i++)
    {
        a+=tolower(s[i]);
    }
    if(a=="yes")
    cout<<"YES\n";
    else
    cout<<"NO\n";
   }  
}