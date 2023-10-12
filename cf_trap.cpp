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
        int a,b,min=100000000;
        while(n--)
        {
        cin>>a>>b;
        int ans=a+(b-1)/2;
        if(ans<min)
        min=ans;
        }
        cout<<min<<endl;
    }
}