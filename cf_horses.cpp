#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[10];
    for(int i=0;i<4;i++)
    cin>>a[i];
    sort(a,a+4);
    long long int c=0,min;
    for(int i=0;i<4;i++)
    {
       if(a[i]==a[i+1])
       {
        c++;
       }
    }
    cout<<c;
}