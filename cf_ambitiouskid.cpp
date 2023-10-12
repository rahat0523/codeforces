#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min,a[100000],b;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    min=abs(a[0]-0);
    for(int i=0;i<n;i++)
    {
       b=abs(a[i]-0);
       if(b<min)
       min=b;
    }
    cout<<min<<endl;
}