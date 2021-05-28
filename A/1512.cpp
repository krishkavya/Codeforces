#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector <int> a(n);
        for(int &e : a )
        {
            cin>>e;
        }
        vector <int> b =a;
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[1])
            {
                cout<<i+1<<endl;
            }
        }
    }
}
