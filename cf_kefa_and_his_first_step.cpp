#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=0,count=0,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
      k=a[i-1];
      if(a[i]>=k)
      {
        count++;
        mx=max(mx,count);
      }
      else
      {
        k=a[i-1];
        count=0;
      }
    }
    cout<<mx+1<<endl;
}