#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int flag=0;
    for(int i=1;i<n;i++)
    {
        if((a[i]-a[i-1])>1)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";
 }   
}