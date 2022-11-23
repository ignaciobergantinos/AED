#include <iostream>

int main(){
    int totalSalesAmount{};

    for(int amountSold{}; std::cin >> amountSold; )
        totalSalesAmount += amountSold;

    std::cout << "Total Sales: " << totalSalesAmount;
}