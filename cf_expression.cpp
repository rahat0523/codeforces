#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,ans,max=0;
    cin>>a>>b>>c;
    vector<long long int>v;
    v.push_back(a+(b*c));
    v.push_back(a*(b+c));
    v.push_back(a*b*c);
    v.push_back((a+b)*c);
    v.push_back((a*b)+c);
    v.push_back(a+b+c);
    sort(v.rbegin(),v.rend());
    cout<<v[0]; 

}