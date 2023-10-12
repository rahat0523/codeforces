#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0)
        {
            if(a+(c/2)>b+(c/2))
            cout<<"First\n";
            else
            cout<<"Second\n";
        }
        else
        {
            if(a+1+(c/2)>b+(c/2))
            cout<<"First\n";
            else
            cout<<"Second\n";
        }
    }
}