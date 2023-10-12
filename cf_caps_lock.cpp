#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
  string s,r;
  cin>>s;
  int c=0,flag=0,l=s.length();
    for(char i:s)
    {
        if(i>='A'&&i<='Z')
        c++;
    }
    if(l-c==0||(islower(s[0])&&l-1==c))
    {
    for(char i:s)
    {
        if(islower(i))
        r+=toupper(i);
        else if(isupper(i))
        r+=tolower(i);
    }
    cout<<r<<endl; 
    }
    else
    cout<<s<<endl;
    }
