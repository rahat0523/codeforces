#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
       {
         flag=1;
         break;
       }
    }
    if(flag==1)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}