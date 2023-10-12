#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1=0,s2=0,n;
    cin>>n;
    char s[n];
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        s1++;
        else if(s[i]=='D')
        s2++;
    }
    if(s1>s2)
    printf("Anton\n");
    else if(s2>s1)
    printf("Danik\n");
    else if(s1==s2)
    printf("Friendship\n");
}