#include <iostream>
#include <array>
#include <string>

int main(){
    std::array<std::array<std::array<int,12>,3>,4>total{0};

    std::array<std::string, 12> NombreMes{
        "Enero","Febrero",
        "Marzo","Abril",
        "Mayo","Junio",
        "Julio","Agosto",
        "Septiembre","Octumbre",
        "Noviembre","Diciembre",
    };

    int mes,vendedor,region{0};

    for(int imp{0}; std::cin>>imp>>mes>>vendedor>>region;)
        total.at(region).at(vendedor-1).at(mes-1) += imp;

    for(int i{0}; i<4; i++)
    {
        std::cout << "-" << "REGION " << i <<"- " << ":" << std::endl;
        for(int k{1}; k<4; k++)
            {
            std::cout << "VENDEDOR " << k << ":" << std::endl;
             for(int j{0}; j<12; j++)
            std::cout << "ventas en " << NombreMes.at(j) << ": $" << total.at(i).at(k-1).at(j) <<std::endl;
            }
        std::cout<<std::endl;
    } 
        
        
            
    
        

    
}