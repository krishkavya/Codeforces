#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
   int n,fourc=0,threec=0,twoc=0,onec=0,count=0;
    cin>>n;
    int S[n];
    for(int i=0;i<n;i++)
    {
        cin>>S[i];
        if(S[i]==4) fourc++;
        else if(S[i]==3) threec++;
        else if(S[i]==2) twoc++;
        else onec++;
    }
    count =count+fourc+threec+(twoc/2);
    //cout<<count<<endl;
    onec-=threec;
    if(twoc%2==1)
    {
        count=count+1;
        onec-=2;
    }
    if(onec>0)
    {
        count+=(onec+3)/4;
    }
    cout<<count;
}
