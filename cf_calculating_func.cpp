#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n%2==0)
    printf("%lld\n",n/2);
    else
      printf("-%lld\n",(n/2)+1);

}