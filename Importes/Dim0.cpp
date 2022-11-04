#include <iostream>

int main(){
    int total{0};
    for(int imp{0}; std::cin>>imp;)
        total += imp;
    std::cout<<"el total es: "<<total;
    
}
