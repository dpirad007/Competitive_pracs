#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,no,ine,ino;
    cin>>n;
    //vector<long long> v;
    long counte=0,counto=0;
    for(int i=0;i<n;i++)
    {
        cin>>no;
        if(no%2==0)
        {
            counte++;
            ine=i;
            //v.push_back(no);
        }
        else
        {
            counto++;
            ino=i;
            //v.push_back(no);
        }
    }
    if(counte==1)
    {
        cout<<ine+1;
    }
    else
    {
        cout<<ino+1;
    }
    

    

    return 0;
}