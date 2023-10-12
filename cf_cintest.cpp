#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int long long n,i,j=0,k,l,temp;
        cin>>n;
        long long int a[n],b[n];
        for(i=0;i<n;i++){
        cin>>a[i];
        }
        for(i=0;i<n;i++){
        b[i]=a[i];
        }
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(b[j]>b[k])
                {
                temp=b[j];
                b[j]=b[k];
                b[k]=temp;
                }
            }
        }
        int flag=0;
   for(int i=0;i<n/2;i++)
   {
     if(a[i]%2==0&&b[i]%2!=0||a[i]%2!=0&&b[i]%2==0){
     flag=1;
     break;
     }
    }
    if(flag==0)
    printf("YES\n");
    else
   printf("NO\n");
    }
}