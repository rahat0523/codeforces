#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,count=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.rbegin(),v.rend());
    double th=0,tw=0,on=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==4)
            count++;
        else if(v[i]==3)
        th++;
        else if(v[i]==2)
        tw++;
        else if(v[i]==1)
        on++;
    }
    count+=th;
    on=(on-th);
    tw=tw*2;
    if(on>0)
    tw=on+tw;
    count+=ceil(tw/4);
   cout<<count<<"\n";
}