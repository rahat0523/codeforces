#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n>>p;
    int a[p];
    for(int i=0;i<p;i++)
    cin>>a[i];
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)
    cin>>b[i];
    int r[p+q];
    copy(a,a+p,r);
    copy(b,b+q,r+p);
    sort(r,r+p+q);
    int s=0,f=1;
    for(int i=0;i<p+q;i++)
    {
        if(r[i]==f)
        {
            f++;
            s++;
        }
    }
    if(s==n)
    cout<<"I become the guy.\n";
    else
    cout<<"Oh, my keyboard!\n";
}