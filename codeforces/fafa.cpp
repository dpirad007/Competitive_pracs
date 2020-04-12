#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n,count=0;
   cin>>n;
   for(int i=1;i<n+1;i++)
   {
       if(n%i==0)
       {
           count++;
       }
   }

   cout<<count-1<<endl;
    return 0;
}