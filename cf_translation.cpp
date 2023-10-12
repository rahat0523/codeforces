#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1001],s1[1001];
    int flag=0;
    cin>>s>>s1;
    strrev(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!=s1[i])
        flag=1;
    }
    if(flag==1)
    printf("NO\n");
    else
    printf("YES\n");
}