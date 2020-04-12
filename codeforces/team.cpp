#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long no,sol;
        vector<int> v;
        for(int j=0;j<3;j++)
        {
            cin>>no;
            v.push_back(no);

        }
        sol=accumulate(v.begin(),v.end(),0);
        if(sol>=2)
        {
            count++;
        }
    }

    cout<<count<<endl;
    
    
    
    return 0;

}