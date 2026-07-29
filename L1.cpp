#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int X=5;

    int Y=10;
    int z=3,t=5 ;

    std::cout<<X<<Y<<std::endl;

    int U {U=0};
    std::cout<<U<<std::endl;

    int Q{};
    std::cout<<Q<<std::endl;

    int R=8;
    std::cout<<R<<'\n';
 
    int T=7;
    std::cout<<"the value of T is "<<T<<'\n';

    std::cout<<"enter a  number "<<'\n';
    std::cin>>T;

    std::cout<<"the  entered value  is "<<T<<'\n';

    std::cout<<"enter any  two number "<<'\n';
    std::cin>>T>>Q; 

    std::cout<<"the  entered values are "<<T<<" and "<<Q<<'\n';

    return 0;
}