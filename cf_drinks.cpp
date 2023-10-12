#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,s=0,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s+=a/100;
    }
    cout<<(s/n)*100<<endl;
}