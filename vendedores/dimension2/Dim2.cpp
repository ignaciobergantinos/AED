#include <iostream>
#include <array>
#include <string>

const int SELLERS_QUANTITY{3};

int main(){

    std::array<std::array<int,12>,SELLERS_QUANTITY> totalSalesAmount{};

    std::array<std::string, 12> months{
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

    int month, seller{};

    for(int amountSold{}; std::cin >> amountSold >> month >> seller;)
        totalSalesAmount.at(seller - 1).at(month - 1) += amountSold;

    for(int sellerNumber{}; sellerNumber < SELLERS_QUANTITY; sellerNumber++){
        std::cout << "seller " << sellerNumber << ":" << std::endl;

        for(int monthNumber{}; monthNumber < 12; monthNumber++)
            std::cout << "Ventas en el mes de " << months.at(monthNumber) << ": $" << totalSalesAmount.at(sellerNumber).at(monthNumber) <<std::endl;
            
    }
}