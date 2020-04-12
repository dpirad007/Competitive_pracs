#include<bits/stdc++.h>

using namespace std;

int main(){
    long long amo;
    double tot,fin=0.0;
    cin>>amo>>tot;

    if(amo>tot)
    {
        std::cout<<std::fixed;
        std::cout<<std::setprecision(2)<<tot<<endl;
    }
    else if(amo%5==0)
    {
        fin=tot-amo-0.50;
        std::cout << std::fixed;
        std::cout<< std::setprecision(2)<<fin;
    }
    else{
        std::cout<<std::fixed;
        std::cout<<std::setprecision(2)<<tot;
    }
    





    return 0;
}