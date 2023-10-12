#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    vector<int>b;
    int n,c,d,count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>c>>d;
        a.push_back(c);
        b.push_back(d);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            count++;
        }
    }
    cout<<count<<"\n";
}