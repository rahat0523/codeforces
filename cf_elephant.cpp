#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<5)
    printf("1\n");
    else
    {
        if(n%5==0)
        printf("%d\n",(n/5));
        else
        printf("%d\n",(n/5)+1);
    }
}