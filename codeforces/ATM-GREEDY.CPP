#include<bits/stdc++.h>
using namespace std;


int main() 
{   
    int count=0;
    long long n;
    cin>>n;

    array<int,5> arr {1,5,10,20,100};

    for(int i=arr.size()-1;i>=0;i--)
    {
        while(n>=arr[i])
        {
            n-=arr[i];
            count++;
        }
    }

    cout<<count;
    
    
    return 0;
}
