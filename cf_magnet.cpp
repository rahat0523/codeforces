#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    s=a[0];
    for(int i=0;i<n;i++)
    {
      if(a[i]!=s)
      c++;
      int r=i;
      s=a[r];
    }
    cout<<c+1<<endl;
}