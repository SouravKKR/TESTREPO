#include<iostream>
#include"includes/header.h"
#include"includes/header2.h"
#define repfor(i, a, b) for(i=a;i<b;i++)
#define repbac(i, a, b) for(i=a;i>=b;i--)
typedef long long ll ;

int main()
{
    int i ;
    repfor(i ,0, 10){
        std::cout<<"keyboard dragons ROCKS!!"<<std::endl ;
    }
    std::cout<<add(2,3)<<"\n";
    getchar();
    return 0 ;
}