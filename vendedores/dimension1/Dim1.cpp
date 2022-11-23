#include <iostream>
#include <array>
#include <string>

int main(){

    std::array<std::string, 12> months { 
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

    std::array<int, 12> totalSalesAmount{};

    int month{};

    for(int amountSold{}; std::cin >> amountSold >> month;)
        totalSalesAmount.at(month - 1) += amountSold;

    for(int month{}; month < 12 ; month++)
        std::cout << "Ventas en el mes de: " << months.at(month) << ": " << totalSalesAmount.at(month) << '\n';
    
}