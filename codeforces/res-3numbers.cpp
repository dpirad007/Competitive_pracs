#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int t=4,n;
    long long a,b,c,max;
    while(t--)
    {
        cin>>n;
        v.push_back(n);
    }

    sort(v.begin(),v.end());
    cout<<v[3]-v[0]<<" "<<v[3]-v[1]<<" "<<v[3]-v[2]<<endl;

    

    return 0;
}