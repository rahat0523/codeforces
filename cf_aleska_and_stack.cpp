#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
    ll n;
    cin>>n;
    vector<ll>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
        ll j=7;   
    for(ll i=2;i<n-1;i++)
    {
        if(3*v[i]%(v[i-1]+v[i-2])!=0)
        {
            j++;
        }  
        else
        //j+=i;
      { while(3*v[i]%(v[i-1]+v[i-2])==0)
       {
          j++;
       }
      }
       v.push_back(j);
       //j+=i;
    }
    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;
 }   
}