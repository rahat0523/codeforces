#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
#define endl "\n"
#define ll long long int 
int main()
{ 
    ll n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int o=0,e=0,j,k;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
          j=i;
          e++;
        }
        else
        {
            k=i;
            o++;
        }
    }
    if(e<o)
    cout<<j+1<<endl;
    else 
    cout<<k+1<<endl;
}