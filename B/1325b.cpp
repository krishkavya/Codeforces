#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int t,n,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        for(int i=0;i<n;i++)
        {
            while(i<n-1 && A[i]==A[i+1]) i++;
            c++;
        }
        cout<<c<<endl;
    }
}
