#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4'||s[i]=='7')
         {
            flag++;
         }
    }
    if(flag==s.length())
    cout<<"YES\n";
    else
    {
        int a=stoi(s);
        int b,c;
        if(a%4==0||a%7==0||a%47==0||a%74==0||a%447==0||a%474==0||a%477==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        }
    }
