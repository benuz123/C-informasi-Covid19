#include <iostream>
#include <jsoncons/json.hpp>
#include <jsoncons_ext/jsonpath/jsonpath.hpp>
#include <cassert>
#include <fstream>
#include <cpr/cpr.h>
#include "function.h"

using namespace jsoncons;
using jsoncons::jsonpath::json_query;

void Global() {

	std::ifstream is("./globalpositif.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["name"].as<std::string>();
		std::string positif = covid19["value"].as<std::string>();

		std::cout << name <<"	: "<< positif << std::endl;
	}

	std::ifstream sem("./globalsembuh.json");
	json sembuh = json::parse(sem);
	
	for (const auto& sembuh19 : sembuh.array_range())
	{
		std::string name = sembuh19["name"].as<std::string>();
		std::string sembuh = sembuh19["value"].as<std::string>();

		std::cout << name << "	: " << sembuh << std::endl;
	}

	std::ifstream gal("./globalmeninggal.json");
	json meninggal = json::parse(gal);

	for (const auto& meninggal19 : meninggal.array_range())
	{
		std::string name = meninggal19["name"].as<std::string>();
		std::string meninggal = meninggal19["value"].as<std::string>();

		std::cout << name << "	: " << meninggal << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	Tampilan_Awal();
}

int nmr;

void Negara() {
	//US
	std::cout << "Masukkan No Negara : "; std::cin >> nmr;
	if (nmr == 1) 
	{
		std::ifstream is("./negara/afghanistan.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if(nmr == 2)
	{
		std::ifstream is("./negara/albania.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 3)
	{
		std::ifstream is("./negara/algeria.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 4)
	{
		std::ifstream is("./negara/andorra.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 5)
	{
		std::ifstream is("./negara/angola.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 6)
	{
		std::ifstream is("./negara/antigua_and_barbuda.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 7)
	{
		std::ifstream is("./negara/argentina.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 8)
	{
		std::ifstream is("./negara/armenia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 9)
	{
		std::ifstream is("./negara/australia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 10)
	{
		std::ifstream is("./negara/australia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 11)
	{
		std::ifstream is("./negara/azerbaijan.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 12)
	{
		std::ifstream is("./negara/bahamas.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 13)
	{
		std::ifstream is("./negara/bahrain.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 14)
	{
		std::ifstream is("./negara/bangladesh.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 15)
	{
		std::ifstream is("./negara/barbados.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 16)
	{
		std::ifstream is("./negara/belarus.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 17)
	{
		std::ifstream is("./negara/belgium.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 18)
	{
		std::ifstream is("./negara/belize.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 19)
	{
		std::ifstream is("./negara/benin.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 20)
	{
		std::ifstream is("./negara/bhutan.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 21)
	{
		std::ifstream is("./negara/bolivia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 22)
	{
		std::ifstream is("./negara/bosnia_and_herzegovina.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 23)
	{
		std::ifstream is("./negara/botswana.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 24)
	{
		std::ifstream is("./negara/brazil.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 25)
	{
		std::ifstream is("./negara/brunei.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 26)
	{
		std::ifstream is("./negara/bulgaria.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 27)
	{
		std::ifstream is("./negara/burkina_faso.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 28)
	{
		std::ifstream is("./negara/burma.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 29)
	{
		std::ifstream is("./negara/burundi.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 30)
	{
		std::ifstream is("./negara/cabo_verde.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 31)
	{
		std::ifstream is("./negara/cambodia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 32)
	{
		std::ifstream is("./negara/cameroon.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 33)
	{
		std::ifstream is("./negara/canada.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 34)
	{
		std::ifstream is("./negara/central_african_republik.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 35)
	{
		std::ifstream is("./negara/chad.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 36)
	{
		std::ifstream is("./negara/chile.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 37)
	{
		std::ifstream is("./negara/china.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 38)
	{
		std::ifstream is("./negara/colombia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 39)
	{
		std::ifstream is("./negara/comoros.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 40)
	{
		std::ifstream is("./negara/congo_brazzaville.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 41)
	{
		std::ifstream is("./negara/congo_kinshasa.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 42)
	{
		std::ifstream is("./negara/costa_rica.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 43)
	{
		std::ifstream is("./negara/cote_d_ivoire.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 44)
	{
		std::ifstream is("./negara/croatia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 45)
	{
		std::ifstream is("./negara/cuba.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 46)
	{
		std::ifstream is("./negara/cyprus.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 47)
	{
		std::ifstream is("./negara/czechia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 48)
	{
		std::ifstream is("./negara/denmark.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 49)
	{
		std::ifstream is("./negara/diamond_princess.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 50)
	{
		std::ifstream is("./negara/djibouti.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 51)
	{
		std::ifstream is("./negara/dominica.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 52)
	{
		std::ifstream is("./negara/dominician_republic.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 53)
	{
		std::ifstream is("./negara/ecuador.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 54)
	{
		std::ifstream is("./negara/egypt.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 55)
	{
		std::ifstream is("./negara/el_salvador.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 56)
	{
		std::ifstream is("./negara/equatorial_guinea.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 57)
	{
		std::ifstream is("./negara/eritrea.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 58)
	{
		std::ifstream is("./negara/estonia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 59)
	{
		std::ifstream is("./negara/eswatini.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 60)
	{
		std::ifstream is("./negara/ethiopia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 61)
	{
		std::ifstream is("./negara/fiji.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 62)
	{
		std::ifstream is("./negara/finland.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 63)
	{
		std::ifstream is("./negara/france.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 64)
	{
		std::ifstream is("./negara/gabon.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 65)
	{
		std::ifstream is("./negara/gambia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 66)
	{
		std::ifstream is("./negara/georgia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 67)
	{
		std::ifstream is("./negara/germany.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 68)
	{
		std::ifstream is("./negara/ghana.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 69)
	{
		std::ifstream is("./negara/greece.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 70)
	{
		std::ifstream is("./negara/grenada.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 71)
	{
		std::ifstream is("./negara/guatemala.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 72)
	{
		std::ifstream is("./negara/guinea.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 73)
	{
		std::ifstream is("./negara/guinea_bissau.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 74)
	{
		std::ifstream is("./negara/guyana.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 75)
	{
		std::ifstream is("./negara/haiti.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 76)
	{
		std::ifstream is("./negara/holy_see.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 77)
	{
		std::ifstream is("./negara/honduras.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 78)
	{
		std::ifstream is("./negara/hungary.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 79)
	{
		std::ifstream is("./negara/iceland.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 80)
	{
		std::ifstream is("./negara/india.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 81)
	{
		std::ifstream is("./negara/indonesia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 82)
	{
		std::ifstream is("./negara/iran.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 83)
	{
		std::ifstream is("./negara/iraq.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 84)
	{
		std::ifstream is("./negara/ireland.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 85)
	{
		std::ifstream is("./negara/israel.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 86)
	{
		std::ifstream is("./negara/italy.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 87)
	{
		std::ifstream is("./negara/jamaica.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 88)
	{
		std::ifstream is("./negara/japan.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 89)
	{
		std::ifstream is("./negara/jordan.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 90)
	{
		std::ifstream is("./negara/kazakhstan.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 91)
	{
		std::ifstream is("./negara/kenya.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 92)
	{
		std::ifstream is("./negara/korea.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 93)
	{
		std::ifstream is("./negara/kosovo.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 94)
	{
		std::ifstream is("./negara/kuwait.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 95)
	{
		std::ifstream is("./negara/kyrgyzstan.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 96)
	{
		std::ifstream is("./negara/laos.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 97)
	{
		std::ifstream is("./negara/latvia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 98)
	{
		std::ifstream is("./negara/lebanon.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if (nmr == 99)
	{
		std::ifstream is("./negara/lesotho.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	else if(nmr == 100)
	{
		std::ifstream is("./negara/liberia.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Country_Region"].as<std::string>();
			std::string positif = covid19["Confirmed"].as<std::string>();
			std::string sembuh = covid19["Recovered"].as<std::string>();
			std::string meninggal = covid19["Deaths"].as<std::string>();
			std::string dirawat = covid19["Active"].as<std::string>();

			std::cout << std::endl;
			std::cout << "Negara		: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
			std::cout << "Dirawat		: " << dirawat << std::endl;
		}
	}
	



	if (nmr == 101)
	{
	std::ifstream is("./negara/libya.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 102)
	{
	std::ifstream is("./negara/liechtenstein.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 103)
	{
	std::ifstream is("./negara/lithuania.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 104)
	{
	std::ifstream is("./negara/luxembourg.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 105)
	{
	std::ifstream is("./negara/madagascar.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 106)
	{
	std::ifstream is("./negara/malawi.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 107)
	{
	std::ifstream is("./negara/malaysia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 108)
	{
	std::ifstream is("./negara/maldives.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 109)
	{
	std::ifstream is("./negara/mali.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 110)
	{
	std::ifstream is("./negara/malta.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 111)
	{
	std::ifstream is("./negara/mauritania.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 112)
	{
	std::ifstream is("./negara/mauritius.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 113)
	{
	std::ifstream is("./negara/mexico.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 114)
	{
	std::ifstream is("./negara/moldova.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 115)
	{
	std::ifstream is("./negara/monaco.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 116)
	{
	std::ifstream is("./negara/mongolia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 117)
	{
	std::ifstream is("./negara/montenegro.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 118)
	{
	std::ifstream is("./negara/morocco.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 119)
	{
	std::ifstream is("./negara/mozambique.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 120)
	{
	std::ifstream is("./negara/ms_zaandam.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
	std::string name = covid19["Country_Region"].as<std::string>();
	std::string positif = covid19["Confirmed"].as<std::string>();
	std::string sembuh = covid19["Recovered"].as<std::string>();
	std::string meninggal = covid19["Deaths"].as<std::string>();
	std::string dirawat = covid19["Active"].as<std::string>();

	std::cout << std::endl;
	std::cout << "Negara		: " << name << std::endl;
	std::cout << "Positif		: " << positif << std::endl;
	std::cout << "Sembuh		: " << sembuh << std::endl;
	std::cout << "Meninggal	: " << meninggal << std::endl;
	std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 121)
	{
	std::ifstream is("./negara/namibia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 122)
	{
	std::ifstream is("./negara/nepal.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 123)
	{
	std::ifstream is("./negara/netherlands.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 124)
	{
	std::ifstream is("./negara/new_zealand.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 125)
	{
	std::ifstream is("./negara/nicaragua.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 126)
	{
	std::ifstream is("./negara/niger.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 127)
	{
	std::ifstream is("./negara/nigeria.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 128)
	{
	std::ifstream is("./negara/north_macedonia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 129)
	{
	std::ifstream is("./negara/norway.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 130)
	{
	std::ifstream is("./negara/oman.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 131)
	{
	std::ifstream is("./negara/pakistan.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 132)
	{
	std::ifstream is("./negara/panama.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 133)
	{
	std::ifstream is("./negara/papua_new_guinea.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 134)
	{
	std::ifstream is("./negara/paraguay.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 135)
	{
	std::ifstream is("./negara/peru.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 136)
	{
	std::ifstream is("./negara/philippines.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 137)
	{
	std::ifstream is("./negara/poland.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 138)
	{
	std::ifstream is("./negara/portugal.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 139)
	{
	std::ifstream is("./negara/qatar.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 140)
	{
	std::ifstream is("./negara/romania.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 141)
	{
	std::ifstream is("./negara/rusia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 142)
	{
	std::ifstream is("./negara/rwanda.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 143)
	{
	std::ifstream is("./negara/saint_kitts_and_nevis.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 144)
	{
	std::ifstream is("./negara/saint_lucia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 145)
	{
	std::ifstream is("./negara/saint_vincent_and_the_grenadines.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 146)
	{
	std::ifstream is("./negara/san_marino.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 147)
	{
	std::ifstream is("./negara/sao_tome_and_principe.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 148)
	{
	std::ifstream is("./negara/saudi_arabia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 149)
	{
	std::ifstream is("./negara/senegal.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 150)
	{
	std::ifstream is("./negara/serbia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 151)
	{
	std::ifstream is("./negara/seychelles.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 152)
	{
	std::ifstream is("./negara/sierra_leone.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 153)
	{
	std::ifstream is("./negara/singapore.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 154)
	{
	std::ifstream is("./negara/slovakia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 155)
	{
	std::ifstream is("./negara/slovenia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 156)
	{
	std::ifstream is("./negara/somalia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 157)
	{
	std::ifstream is("./negara/south_afrika.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 158)
	{
	std::ifstream is("./negara/south_sudan.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 159)
	{
	std::ifstream is("./negara/spain.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 160)
	{
	std::ifstream is("./negara/sri_lanka.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 161)
	{
	std::ifstream is("./negara/sudan.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 162)
	{
	std::ifstream is("./negara/suriname.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 163)
	{
	std::ifstream is("./negara/sweden.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 164)
	{
	std::ifstream is("./negara/switzerland.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 165)
	{
	std::ifstream is("./negara/syria.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 166)
	{
	std::ifstream is("./negara/taiwan.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 167)
	{
	std::ifstream is("./negara/tajikistan.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 168)
	{
	std::ifstream is("./negara/tanzania.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 169)
	{
	std::ifstream is("./negara/thailand.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 170)
	{
	std::ifstream is("./negara/timor_leste.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 171)
	{
	std::ifstream is("./negara/togo.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 172)
	{
	std::ifstream is("./negara/trinidad_and_tobago.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 173)
	{
	std::ifstream is("./negara/tunisia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 174)
	{
	std::ifstream is("./negara/turkey.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 175)
	{
	std::ifstream is("./negara/uganda.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 176)
	{
	std::ifstream is("./negara/ukraine.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 177)
	{
	std::ifstream is("./negara/united_arab_emirates.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 178)
	{
	std::ifstream is("./negara/united_kingdom.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 179)
	{
	std::ifstream is("./negara/uruguay.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 180)
	{
	std::ifstream is("./negara/us.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 181)
	{
	std::ifstream is("./negara/uzbekistan.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 182)
	{
	std::ifstream is("./negara/venezuela.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 183)
	{
	std::ifstream is("./negara/vietnam.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 184)
	{
	std::ifstream is("./negara/west_bank_and_gaza.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 185)
	{
	std::ifstream is("./negara/western_sahara.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 186)
	{
	std::ifstream is("./negara/yemen.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 187)
	{
	std::ifstream is("./negara/zambia.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else if (nmr == 188)
	{
	std::ifstream is("./negara/zimbabwe.json");
	json covid = json::parse(is);

	for (const auto& covid19 : covid.array_range())
	{
		std::string name = covid19["Country_Region"].as<std::string>();
		std::string positif = covid19["Confirmed"].as<std::string>();
		std::string sembuh = covid19["Recovered"].as<std::string>();
		std::string meninggal = covid19["Deaths"].as<std::string>();
		std::string dirawat = covid19["Active"].as<std::string>();

		std::cout << std::endl;
		std::cout << "Negara		: " << name << std::endl;
		std::cout << "Positif		: " << positif << std::endl;
		std::cout << "Sembuh		: " << sembuh << std::endl;
		std::cout << "Meninggal	: " << meninggal << std::endl;
		std::cout << "Dirawat		: " << dirawat << std::endl;
	}
	}
	else
	{
	std::cout << "Nomor yang anda masukkan tidak terdaftar"<< std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	Tampilan_Awal();
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	Tampilan_Awal();
}
