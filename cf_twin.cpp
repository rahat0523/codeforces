#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    int max=0,count=0;
    for(int i=0;i<n;i++)
    {
        max+=a[i];
        count++;
        if(max>(s-max))
        break;
    }
    cout<<count<<endl;
}