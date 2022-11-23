#include <iostream>
#include <array>
#include <string>

const int REGION_QUANTITY{4};
const int SELLERS_QUANTITY{3};
const int MONTHS_IN_A_YEAR{12};


int main(){

    std::array<std::array<std::array<int, MONTHS_IN_A_YEAR>, SELLERS_QUANTITY>, REGION_QUANTITY> totalSalesAmount{};

    std::array<std::string, MONTHS_IN_A_YEAR> months {
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiembre",
        "Octumbre",
        "Noviembre",
        "Diciembre",
    };

    int mes,vendedor,region{};

    for(int amountSold{}; std::cin >> amountSold >> mes >> vendedor >> region;)
        totalSalesAmount.at(region).at(vendedor - 1).at(mes - 1) += amountSold;

    for(int region{}; region < REGION_QUANTITY; region++){
        std::cout << "-" << "REGION " << region <<"- "<< std::endl;

        for(int seller{1}; seller < REGION_QUANTITY; seller++){
            std::cout << "VENDEDOR " << seller << ":" << std::endl;

             for(int month{}; month < 12; month++)
            std::cout << "ventas en " << months.at(month) << ": $" << totalSalesAmount.at(region).at(seller - 1).at(month) <<std::endl;
            }
        std::cout<<std::endl;
    } 
}