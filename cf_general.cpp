#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans;
    cin>>n;
    int minInd=-1,maxInd=-1,mini=INT_MAX,maxi=INT_MIN;

    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num<=mini){
            mini=num;
            minInd=i;
        }
        if(num>maxi){
            maxi=num;
            maxInd=i;
        }
    }

    if(minInd>maxInd){
        ans=maxInd+(n-minInd-1);
    }
    else ans=maxInd+(n-minInd-1)-1;
    cout<<ans<<endl;
}