#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    getline(cin,s);
    sort(s.begin(),s.end());
    int count=0, j=0,a[30];
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
           r.push_back(s[i]);
    }
   r.erase(unique(r.begin(),r.end()),r.end());
    cout<<r.length()<<endl;
}