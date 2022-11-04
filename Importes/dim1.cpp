#include <iostream>
#include <array>
#include <string>

int main(){
    std::array<std::string, 12> NombreMes{ //Se puede hacer sin array?
        "Enero","Febrero",
        "Marzo","Abril",
        "Mayo","Junio",
        "Julio","Agosto",
        "Septiembre","Octumbre",
        "Noviembre","Diciembre",
    };

    std::array<int, 12> total{0};

    int mes{0};

    for(int imp{0}; std::cin>>imp>>mes;)
        total.at(mes-1) += imp;

    for(int i{0}; i<12 ; i++)
        std::cout << "Valor total en " << NombreMes.at(i) << ": " << total.at(i) << '\n';
    
}
    

/*  for(int imp{0}; std::cin>>imp>>mes;)
        total.at(mes - 1) += imp;
    
    for(int i=0; i<12 ; i++)
        std::cout<<"Ventas totales en " << mes.at(i) << ":" << total.at(i);*/