#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
        a.push_back(i);
        a.push_back(n/i);
        }
    }
    sort(a.rbegin(),a.rend());
    a.erase((unique(a.begin(),a.end())),a.end());
    vector<int>b(a);
    vector<int>f;
    int j=0;
    if(a.size()<=2)
    {
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
    }
    else{
    for(int i=1;i<a.size();i++)
    {
        if(a[j]%b[i]==0)
        {
           f.push_back(a[j]);
           j=i;
           if(i==a.size()-1)
           f.push_back(1);
        }
        else
        {
        continue;
        }
    }
}
    for(int i=0;i<f.size();i++)
    cout<<f[i]<<" ";
    cout<<" \n";
}