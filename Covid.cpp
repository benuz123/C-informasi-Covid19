#include <iostream>
#include <jsoncons/json.hpp>
#include <jsoncons_ext/jsonpath/jsonpath.hpp>
#include <cpr/cpr.h>
#include <fstream>
#include "function.h"

using namespace jsoncons;
using jsoncons::jsonpath::json_query;

void Indonesia();


int main() {	 
	
	Tampilan_Awal();

	return 0;

}

//Fungsi menampilkan file

void Indonesia() {

	std::ifstream is("./indo.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["name"].as<std::string>();
		std::string positif = covid19["positif"].as<std::string>();
		std::string sembuh = covid19["sembuh"].as<std::string>();
		std::string meninggal = covid19["meninggal"].as<std::string>();
		std::string dirawat = covid19["dirawat"].as<std::string>();

		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}

	Tampilan_Awal();
}














