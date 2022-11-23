#include <iostream>
#include <array>
#include <string>
#include <fstream>



int main(){

	std::array<std::array<std::array<int,12>,3>,4> totalSalesAmount{};

	std::ifstream inputFileStream;
	inputFileStream.open("TestVendedores.txt");

	int month, seller, region{};

	for(int amountSold{}; inputFileStream >> amountSold >> month >> seller >> region;)
		totalSalesAmount.at(region).at(seller - 1).at(month - 1) += amountSold;

	inputFileStream.close();

}

// g++ vendedores.cpp -o output -std=c++2a