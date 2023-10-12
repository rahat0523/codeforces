#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1001];
    cin>>s;
    int c=0,c1=0,i;
    for( i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        c++;
        else if(s[i]>='A'&&s[i]<='Z')
        c1++;

    }
    if(c>c1||c==c1)
    {
         printf("%s\n",strlwr(s));
    }
    else
   printf("%s\n",strupr(s));
}