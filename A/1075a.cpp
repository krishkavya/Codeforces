#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    long long int n,a,b;
    cin>>n;
    cin>>a>>b;
    long long int w = max(a-1,b-1);
    long long int bl= max(n-a,n-b);
    if(w>bl) cout <<"BLACK";
    else cout <<"WHITE";
}
