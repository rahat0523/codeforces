#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],i,flag=0,s=0;
        for(i=0;i<n;i++)
        cin>>a[i];
       int temp=-1;
       if(is_sorted(a,a+n))
       {
        cout<<"0"<<endl;
        continue;;
        }
        int x=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>=a[i-1])
            continue;
            else
            {
                x=i;
                break;
            }
        }
        int ans=*max_element(a,a+x);
        cout<<ans<<endl;
    
}
}