#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int a,b,max=0;
            cin>>a>>b;
            if(a<=10){
            if(b>=max)

            {
              max=b;
             x=i;
            }
            }
        }
        printf("%d\n",x);
        x=0;

    }
}