#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[101];
    int s=1,i,max=0;
    cin>>c;
    for(i=1;i<strlen(c);i++ )
    {
       if(c[i]==c[i-1])
       {
        s++;
        if(s>=7){
        printf("YES\n");
        return 0;
        }
       }
       else
       s=1;
    }
   printf("NO\n");
}