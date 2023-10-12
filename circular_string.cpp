#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a;
    cin>>s>>a;
    int r=s.size();
    s+=s;
    int count=0,l=a.size();
    for(int i=0;i<(r+l-1);i++)
    {
        string temp=s.substr(i,l);
        //if(temp.compare(a)==0)
        if(temp==a)
        count++;
        }
    
    cout<<count;
}