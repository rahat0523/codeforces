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
    string s;
    cin>>s;
    cout<<s[0];
    for(int i=1;i<s.length();i+=2)
    {
        cout<<s[i];
    }
    cout<<endl;
   }  
}