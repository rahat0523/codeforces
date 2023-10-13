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
    vector<int>v(3);
    ll count=0;
    for(int i=0;i<3;i++)
    {
        cin>>v[i];
        count+=v[i];
    }
    ll mn=*min_element(v.begin(),v.end());
    ll flag=0;
    if(count%mn==0&&v[0]%mn==0&&v[1]%mn==0&&v[2]%mn==0)
    {
    if((count/mn)==3||(count/mn)==4||(count/mn)==5||(count/mn)==6)
    cout<<"YES\n";
    else 
    flag=1;
    }
    else 
    cout<<"NO\n";
    if(flag==1)
    cout<<"NO\n";
   }  
}