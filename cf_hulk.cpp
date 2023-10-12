#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string h="I hate ",l="I love ",r="it",t="that ";
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        cout<<h;
        if(i==n)
        cout<<r;
        else 
        cout<<t;
        }
        else if(i%2==0)
        {
           cout<<l;
        if(i==n)
        cout<<r; 
        else
        cout<<t;
        }
    }
    cout<<endl;
}