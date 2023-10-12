#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1001];
    int i;
    cin>>s;
    strlwr(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        continue;
        else
        printf(".%c",s[i]);
    }
}