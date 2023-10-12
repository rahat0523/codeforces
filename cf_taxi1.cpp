#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double s=0;
    while(n--)
    {
        double a;
        cin>>a;
        s+=a;
    }
    cout<<ceil(s/4)<<"\n";
}