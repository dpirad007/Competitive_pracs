#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,count=0;
    cin>>n;
    int arr[5] = {1,2,3,4,5};

    for(int i=4;i>=0;i--)
    {
        while(n>=arr[i])
        {
            n-=arr[i];
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}