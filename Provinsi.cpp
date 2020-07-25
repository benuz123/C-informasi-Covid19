#include <iostream>
#include <jsoncons/json.hpp>
#include <jsoncons_ext/jsonpath/jsonpath.hpp>
#include <cassert>
#include <fstream>
#include <cpr/cpr.h>
#include "function.h"

using namespace jsoncons;
using jsoncons::jsonpath::json_query;

int nomor;
void Provinsi() {
	std::cout << "Masukkan No Provinsi : "; std::cin >> nomor;
	if (nomor == 1)
	{
		std::ifstream is("./provinsi/aceh.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 2)
	{
		std::ifstream is("./provinsi/bali.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 3)
	{
		std::ifstream is("./provinsi/banten.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 4)
	{
		std::ifstream is("./provinsi/bengkulu.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 5)
	{
		std::ifstream is("./provinsi/daerah_istimewa_yogyakarta.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 6)
	{
		std::ifstream is("./provinsi/dki_jakarta.json");
		json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 7)
	{
	std::ifstream is("./provinsi/gorontalo.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 8)
	{
	std::ifstream is("./provinsi/jambi.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 9)
	{
	std::ifstream is("./provinsi/jawa_barat.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 10)
	{
	std::ifstream is("./provinsi/jawa_tengah.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 11)
	{
	std::ifstream is("./provinsi/jawa_timur.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 12)
	{
	std::ifstream is("./provinsi/kalimantan_barat.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 13)
	{
	std::ifstream is("./provinsi/kalimantan_selatan.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 14)
	{
	std::ifstream is("./provinsi/kalimantan_tengah.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 15)
	{
	std::ifstream is("./provinsi/kalimantan_timur.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 16)
	{
	std::ifstream is("./provinsi/kalimantan_utara.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 17)
	{
	std::ifstream is("./provinsi/kepulauan_bangka_belitung.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 18)
	{
	std::ifstream is("./provinsi/kepulauan_riau.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 19)
	{
	std::ifstream is("./provinsi/lampung.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 20)
	{
	std::ifstream is("./provinsi/maluku.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 21)
	{
	std::ifstream is("./provinsi/maluku_utara.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 22)
	{
	std::ifstream is("./provinsi/nusa_tenggara_barat.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 23)
	{
	std::ifstream is("./provinsi/nusa_tenggara_timur.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 24)
	{
	std::ifstream is("./provinsi/papua.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 25)
	{
	std::ifstream is("./provinsi/papua_barat.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 26)
	{
	std::ifstream is("./provinsi/riau.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 27)
	{
	std::ifstream is("./provinsi/sulawesi_barat.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 28)
	{
	std::ifstream is("./provinsi/sulawesi_selatan.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 29)
	{
	std::ifstream is("./provinsi/sulawesi_tengah.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 30)
	{
	std::ifstream is("./provinsi/sulawesi_tenggara.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 31)
	{
	std::ifstream is("./provinsi/sulawesi_utara.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 32)
	{
	std::ifstream is("./provinsi/sumatera_barat.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 33)
	{
	std::ifstream is("./provinsi/sumatera_selatan.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else if (nomor == 34)
	{
	std::ifstream is("./provinsi/sumatera_utara.json");
	json covid = json::parse(is);

		for (const auto& covid19 : covid.array_range())
		{
			std::string name = covid19["Provinsi"].as<std::string>();
			std::string positif = covid19["Kasus_Posi"].as<std::string>();
			std::string sembuh = covid19["Kasus_Semb"].as<std::string>();
			std::string meninggal = covid19["Kasus_Meni"].as<std::string>();

			std::cout << "Provinsi	: " << name << std::endl;
			std::cout << "Positif		: " << positif << std::endl;
			std::cout << "Sembuh		: " << sembuh << std::endl;
			std::cout << "Meninggal	: " << meninggal << std::endl;
		}
	}
	else
	{
		std::cout << "Nomor yang anda masukkan tidak Terdaftar";
		std::cout << std::endl;
		std::cout << std::endl;
		Tampilan_Awal();
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	Tampilan_Awal();
}