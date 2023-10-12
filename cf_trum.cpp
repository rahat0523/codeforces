#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,max=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        s=s-a+b;
        if(s>max)
        max=s;
    }
    printf("%d\n",max);
}