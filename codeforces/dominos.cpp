#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long r,c,count=0,sol,fin,sol1;
    cin>>r>>c;
    if(r%2==0)
    {   
        sol1=r/2;
        count+=c;
        count*=sol1;
    }
     else if(r==1)
    {
        sol=c%2;
        fin=c-sol;
        count+=fin/2;
    }
    else
    {   sol1=r-1;
        sol1=sol1/2;
        count+=c;
        count*=sol1;
        sol=c%2;
        fin=c-sol;
        count+=fin/2;
    }
   
    
    cout<<count<<endl;
    return 0;

}