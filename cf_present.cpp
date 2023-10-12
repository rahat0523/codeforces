#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,a[1000];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      cin>>v;
      a[v]=i;
    }
    for(int j=1;j<=n;j++)
    cout<<a[j]<<" ";
    cout<<endl;
}