#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[101];
    int s=0,i;
    cin>>c;
    for(i=0;i<strlen(c);i++ )
    {
        if(c[i]=='4'||c[i]=='7')
        {
            s++;
        }
    }
    if(s==4||s==7)
    printf("YES\n");
    else
    printf("NO\n");
}