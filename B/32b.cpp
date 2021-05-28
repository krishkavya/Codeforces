#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    string A,s2;
    cin>>A;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='.') s2=s2+"0";
        else if(A[i]=='-' && A[i+1]=='.') 
        {
            s2=s2+"1";
            ++i;
        }
        else if(A[i]=='-'&& A[i+1]=='-')
        {
            s2=s2+"2";
            ++i;
        }
    }
    cout<<s2;
}
