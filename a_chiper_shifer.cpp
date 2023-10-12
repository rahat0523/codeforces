#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j=0;
        cin>>n;
        getchar();
        string s,ch;
        getline(cin,s);
        for(int i=1;i<n;i++)
        {
           ch.push_back(s[0]);
           i++;
           if(s[i]!=ch[j])
           {
           continue;
           i++;
           }
           else
           {
             ch.push_back(s[i+1]);
             j++;
             i++;
           }
        }
        cout<<ch<<"\n";
    }
}