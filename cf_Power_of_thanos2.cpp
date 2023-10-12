#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a[4];
    cin>>n;
    for(i=0;i<3;i++)
    cin>>a[i];
    if(n>0&&a[0]>0&&a[1]>0&&a[2]>0){
    long long int j,min=a[1],temp;
    for(i=0;i<3;i++)
    {
        for( j=i+1;j<3;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    long long int c=0,s=0;
    for(i=0;i<3;i++)
    {
        s+=a[i]+1;
        if(n<s)
        {
        c=1;
        break;
        }
    }
    if(s<=n)
    printf("YES\n");
    else
    printf("NO %d\n",i);

}
}