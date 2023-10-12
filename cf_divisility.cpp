#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a<b)
        cout<<b-a<<"\n";
        else if(a%b==0)
        cout<<"0\n";
        else 
        {
            int n=a/b;
            cout<<b*(n+1)-a<<endl;
        }
    }
}