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
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    a.erase((unique(a.begin(),a.end())),a.end());
    if(a.size()==1)
    cout<<"0\n";
    else if(a.size()==2)
    cout<<((a[a.size()-1]-a[0])*2)<<"\n";
    else
    cout<<((a[a.size()-1]-a[0])+(a[a.size()-1]-a[a.size()-2]))<<"\n";
    }
}