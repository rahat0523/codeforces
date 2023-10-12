#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    char c;
    for(int i=0;i<64;i++)
    {
        cin>>c;
        if(c!='.')
        cout<<c;
    }
    printf("\n");
    }
}