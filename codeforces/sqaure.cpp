#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a;
    double ans1,ans2;
    long long sol;
    cin>>n>>m>>a;
    ans1=ceil((double)n/(double)a);
    ans2=ceil((double)m/(double)a);
    sol=ans1*ans2;
    cout<<fixed<<sol;


    return 0;
}