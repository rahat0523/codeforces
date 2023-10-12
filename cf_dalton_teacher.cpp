#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       float s=0;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       cin>>a[i];
       for(int i=0;i<n;i++)
       {
           if(a[i]==(i+1))
           s++;
       }
       if(s==0)
       printf("0\n");
       else if(s==1)
       printf("1\n");
       else 
       printf("%.0lf\n",ceil(s/2));
       s=0;
    }
}