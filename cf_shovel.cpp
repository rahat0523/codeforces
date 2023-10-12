#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,sum=0,k,count=0;
    cin>>n>>a;
    int i=1;
    while(1)
    {
        sum=n*i;
        if(sum%10==0||sum%10==a)
        {
            k=i;
            break;
        }
        i++;
    }
    
    cout<<k<<"\n";
}