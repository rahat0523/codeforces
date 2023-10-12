#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    cin>>a[i];
    sort(a,a+m);
    reverse(a,a+m);
    int ans=*max_element(a,a+n),i=0,j=n-1;
    while(j<m)
    {
        int diff=a[i]-a[j];
       ans=min(ans,diff);
       i++;j++;
    }
    cout<<ans<<"\n";
    //int r=*max_element(a,a+m);
    //int h=*min_element(a,a+m);
    //cout<<r<<" "<<h;
}