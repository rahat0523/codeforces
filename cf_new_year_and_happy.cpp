#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k;
    cin>>n>>t;
    int time=240-t,s=0;
    if(time<=0)
    cout<<"0\n";
    else
    {
    for(int i=0;i<=n;i++)
    {
        s+=5*i;
        if(s<=time)
        k=i;
        else
        break;
    }
    cout<<k<<"\n";
    }
}