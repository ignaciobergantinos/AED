#include <iostream>
#include <array>
#include <string>
#include <fstream>

const int MONTHS_IN_A_YEAR{12};
const int NUMBER_OF_REGIONS{4};
const int NUMBER_OF_SELLERS{3};

using Sales = std::array<std::array<std::array<int, MONTHS_IN_A_YEAR>, NUMBER_OF_SELLERS>, NUMBER_OF_REGIONS>;
Sales totalSalesAmount{};


void readDataFromFile();
void openFileAndSendItToStandardOutput();
int calculateAverageSalesByAGivenRegion(int);


int main(){

	readDataFromFile();
	openFileAndSendItToStandardOutput();
	calculateAverageSalesByAGivenRegion(0);
	
}

void readDataFromFile() {
	std::ifstream inputFileStream;
	inputFileStream.open("TestVendedores.txt");

	int month, seller, region{};

	for(int amountSold{}; inputFileStream >> amountSold >> month >> seller >> region;)
		totalSalesAmount.at(region).at(seller - 1).at(month - 1) += amountSold;

	inputFileStream.close();
}

void openFileAndSendItToStandardOutput() {
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

int calculateAverageSalesByAGivenRegion(int region) {

	int salesSumBySeller{};
	const int NUMBER_OF_SELLERS_IN_A_GIVEN_REGION = std::size(totalSalesAmount.at(region));

	for(int seller{}; seller < NUMBER_OF_SELLERS_IN_A_GIVEN_REGION; seller++) 
		for(int month{}; month < MONTHS_IN_A_YEAR; month++)
			salesSumBySeller += totalSalesAmount.at(region).at(seller).at(month);

	std::cout << "Average sale in region " << region << ": " << (salesSumBySeller / NUMBER_OF_SELLERS_IN_A_GIVEN_REGION);
	return (salesSumBySeller / NUMBER_OF_SELLERS_IN_A_GIVEN_REGION);
}


// compile g++ vendedores.cpp -o output -std=c++2a