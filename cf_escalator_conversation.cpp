#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,h,a[1001],s=0;
        cin>>n>>m>>k>>h;
        for(int i=0;i<n;i++)
        cin>>a[i];
       for(int i=0;i<n;i++) 
       {
        if(h!=a[i]&&abs(h-a[i])%k==0&&abs(h-a[i])/k<=m-1)
        {
            s++;
        }
       }
       printf("%d\n",s);
    }
}