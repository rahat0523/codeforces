#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,c,r,s,ans;
        cin>>a>>b>>c;
        if(a==b)
        cout<<"0\n";
        else
        {
          r=(a+b)/2;
          s=abs(r-a);
          ans=ceil(s/c);
        cout<<ans<<endl;
        }
    }
}