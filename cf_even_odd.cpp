#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,ans;
    cin>>a>>b;
    if(a%2==0)
    {
        if(b<=a/2)
        {
            ans=1+(b-1)*2;
        }
        else
        {
            ans=2+((b-a/2)-1)*2;
        }
    }
    else
    {
        if(b<=a/2+1)
        {
            ans=1+(b-1)*2;
        }
        else
        {
            ans=2+((b-1-a/2)-1)*2;
        }
    }
    cout<<ans<<endl;
}