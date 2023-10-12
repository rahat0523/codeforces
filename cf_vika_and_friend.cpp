#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,k,a,b,i,x,y,flag=0;
        cin>>n>>m>>k;
        cin>>x>>y;
        for(i=0;i<k;i++)
        {
            cin>>a>>b;
            if((abs(x-a)+abs(y-b))%2==0)
            {
            flag=1;
            //break;
            }
        }
        if(flag)
        printf("NO\n");
        else
        printf("YES\n");
    }
}