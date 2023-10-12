#include<stdio.h>
int main()
{
    int i,j,t,n,x=0;
    char s[1000000];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d ",&n);
        gets(s);

        for(j=0;j<n;j++)
        {
            if(s[j]<=s[x])
                x=j;
        }
        printf("%c",s[x]);
                for(j=0;j<n;j++)
                {
                    if(j==x)
                        continue;
                              printf("%c",s[j]);
                }
                printf("\n");
    }
}