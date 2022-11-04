#include <iostream>
#include <array>
#include <string>

int main(){
    std::array<std::array<int,12>,3>total{0};

    std::array<std::string, 12> NombreMes{
        "Enero","Febrero",
        "Marzo","Abril",
        "Mayo","Junio",
        "Julio","Agosto",
        "Septiembre","Octumbre",
        "Noviembre","Diciembre",
    };

    int mes,vendedor{0};

    for(int imp{0}; std::cin>>imp>>mes>>vendedor;)
        total.at(vendedor-1).at(mes-1) += imp;

    for(int i{0}; i<3; i++){
        std::cout << "VENDEDOR " << i << ":" << std::endl;
        for(int j{0}; j<12; j++)
            std::cout << "ventas en " << NombreMes.at(j) << ": $" << total.at(i).at(j) <<std::endl;
            
    }
        

    
}