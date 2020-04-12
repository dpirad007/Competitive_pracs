#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5],n;
    vector<long> v;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            //cout<<"enter elements";
           
            cin>>n;
             //cout<<i<<j;
            if(n==1)
            {
                v.push_back(i+1);
                v.push_back(j+1);
            }
            a[i][j]=n;
        }
        cout<<endl;
    }

    int c=0;
    for(int i=0;i<2;i++)
    {
        //cout<<x<<endl;
        if(v[0]>3)
        {
            while(v[0]!=3)
            {
                v[0]--;
                c++;
            }
        }
        else if(v[0]<3)
        {
            while(v[0]!=3)
            {
                v[0]++;
                c++;
            }

        }
        if(v[1]>3)
        {
            while(v[1]!=3)
            {
                v[1]--;
                c++;
            }
        }
        else if(v[1]<3)
        {
            while(v[1]!=3)
            {
                v[1]++;
                c++;
            }

        }
        
    }

    cout<<c;
    return 0;
}