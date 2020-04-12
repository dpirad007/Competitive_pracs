#include<bits/stdc++.h>
using namespace std;

int ms(vector<long long> v)
{
    int a=0,sum=INT_MIN;
    for(auto x: v)
    {
        a+=x;
        sum=max(a,sum);
        a=max(a,0);
    }
    cout<<sum<<" ";
    return sum;
}










int main()
{
    long long t,sol,fin;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<long long> v,ss;
        long long no,a;
        cin>>no;
        for(int j=0;j<no;j++)
        {
            cin>>a;
            v.push_back(a);
            if(a>0)
            {
                ss.push_back(a);
            }

        }
        fin=ms(v);
        
        sol=accumulate(ss.begin(),ss.end(),0);
        if(sol==0)
        {
            cout<<fin;
        }
        else
        {
                cout<<sol;
        }
        

    }
    return 0;
}