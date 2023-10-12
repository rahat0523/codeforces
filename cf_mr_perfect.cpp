#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b,min=0,elv,c,d;
        for(int i=1;i<=n;i++)
        {
            cin>>a>>b;
            if(b==11)
            elv=b;
            else if(b==01&&a<c)
            {
               c=a;
            }
            else if(b==1&&a<d)
            {
               d=a;
            }
        }
    }
}