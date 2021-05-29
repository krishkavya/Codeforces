#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int n,m,c;
   int mcount=0 ,ccount=0;
   cin>>n;
   while(n--)
   {
       cin>>m>>c;
       if(m>c) mcount++;
       else if(m<c) ccount++;
       else if(m==c) 
       {
           mcount++; 
           ccount++;
       }
   }
   if(mcount>ccount) cout<<"Mishka";
   else if(mcount<ccount) cout<<"Chris";
   else cout<<"Friendship is magic!^^";
}
