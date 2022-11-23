#include <iostream>
#include <array>
#include <string>
#include <fstream>

const int MONTHS_IN_A_YEAR{12};
const int NUMBER_OF_REGIONS{4};
const int NUMBER_OF_SELLERS{3};

int main(){

	std::array<std::array<std::array<int, MONTHS_IN_A_YEAR>, NUMBER_OF_SELLERS>, NUMBER_OF_REGIONS> totalSalesAmount{};

	std::ifstream inputFileStream;
	inputFileStream.open("TestVendedores.txt");

	int month, seller, region{};

	for(int amountSold{}; inputFileStream >> amountSold >> month >> seller >> region;)
		totalSalesAmount.at(region).at(seller - 1).at(month - 1) += amountSold;

	inputFileStream.close();



	std::ofstream outputFileStream;
	outputFileStream.open("totalSalesAmount.txt", std::ios::out);

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
		"Diciembre"
 };

	for(int region{}; region < NUMBER_OF_REGIONS; region++) {
		std::cout << "---" << "REGION " << region << "---" << std::endl;

		for(int seller{}; seller < NUMBER_OF_SELLERS; seller++) {
			std::cout << seller;
			std::cout << "VENDEDOR " << (seller + 1) << std::endl;

			for(int month{}; month < MONTHS_IN_A_YEAR; month++)
				std::cout << "ventas en " << months.at(month) << ": $" << totalSalesAmount.at(region).at(seller).at(month) << std::endl;
		}

	std::cout << std::endl;

	} 

	outputFileStream.write(reinterpret_cast<const char*>(&totalSalesAmount), sizeof (totalSalesAmount));

  	outputFileStream.close();

}

// g++ vendedores.cpp -o output -std=c++2a