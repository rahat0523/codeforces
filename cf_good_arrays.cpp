#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n],s=0;
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        if(a[i]!=1)
        s+=a[i];
        }
        if(n==1||s-n<0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
}