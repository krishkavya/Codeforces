#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int t,a,b,k;
    cin>>t;
    while(t--)
    {
        long long int ans=0;
        cin>>a>>b>>k;
        ans = (a-b)*(k/2);
        if(k%2==0) cout<<ans<<endl;
        else cout<<ans+a<<endl;
    }
}
