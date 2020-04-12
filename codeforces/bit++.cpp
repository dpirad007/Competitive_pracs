#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    long x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        
        string s;
        cin>>s;
        if(s=="X++" || s=="++X")
        {
            x++;
        }
        else if(s=="--X" || s=="X--")
        {
            x--;
        }
    }
    cout<<x;

    return 0;
}