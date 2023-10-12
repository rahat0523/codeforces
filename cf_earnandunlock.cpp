#include<bits/stdc++.h>
using namespace std;
bitset<200001>dp;
main(){
	int n;cin>>n;
	dp[0]=1;int64_t t=0,ans=0;
	for(int i=0;i<n;i++){
		if(t<i)break;
		int64_t a;cin>>a;t+=a;
		if(dp[i])ans=max(ans,t-i);
		dp|=dp<<a;
		dp[i]=0;
	}
	for(int i=n-1;i<200001;i++)if(dp[i]){ans=max(ans,t-i);break;}
	cout<<ans;
}
