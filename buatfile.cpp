#include <iostream>
#include <jsoncons/json.hpp>
#include <jsoncons_ext/jsonpath/jsonpath.hpp>
#include <cassert>
#include <cpr/cpr.h>
#include <fstream>
#include "function.h"

using namespace jsoncons;
using jsoncons::jsonpath::json_query;

//Fungsi Pembuatan File

void buatfileIndo() {
	auto r = cpr::Get(cpr::Url{ "https://api.kawalcorona.com/indonesia" });
	r.status_code;

	std::ofstream myfile;
	myfile.open("indo.json");
	myfile << r.text;
	myfile.close();

}

void buatfileGlobal() {
	auto r = cpr::Get(cpr::Url{ "https://api.kawalcorona.com/positif" });
	r.status_code;

	std::ofstream pos;
	pos.open("globalpositif.json");
	pos << "[" << r.text << "]";
	pos.close();

	auto x = cpr::Get(cpr::Url{ "https://api.kawalcorona.com/sembuh" });
	x.status_code;

	std::ofstream buh;
	buh.open("globalsembuh.json");
	buh << "[" << x.text << "]";
	buh.close();

	auto y = cpr::Get(cpr::Url{ "https://api.kawalcorona.com/meninggal" });
	y.status_code;

	std::ofstream gal;
	gal.open("globalmeninggal.json");
	gal << "[" << y.text << "]";
	gal.close();
}


void buatfileNegara() {
	auto r = cpr::Get(cpr::Url{ "https://api.kawalcorona.com/" });
	r.status_code;

	std::ofstream myfile;
	myfile.open("global.json");
	myfile << r.text;
	myfile.close();

	//pembuatan file per negara
	std::ifstream is("global.json");
	json covid = json::parse(is);

	//negara US
	json result_US = json_query(covid, "$[0].attributes");
	std::ofstream US;
	US.open("./negara/us.json");
	US << result_US;
	US.close();

	//negara Brazil
	json result_Brazil = json_query(covid, "$[1].attributes");
	std::ofstream Brazil;
	Brazil.open("./negara/brazil.json");
	Brazil << result_Brazil;
	Brazil.close();

	//negara Rusia
	json result_Rusia = json_query(covid, "$[2].attributes");
	std::ofstream Rusia;
	Rusia.open("./negara/rusia.json");
	Rusia << result_Rusia;
	Rusia.close();

	//negara india
	json result_india = json_query(covid, "$[3].attributes");
	std::ofstream india;
	india.open("./negara/india.json");
	india << result_india;
	india.close();

	//negara united_kingdom
	json result_united_kingdom = json_query(covid, "$[4].attributes");
	std::ofstream united_kingdom;
	united_kingdom.open("./negara/united_kingdom.json");
	united_kingdom << result_united_kingdom;
	united_kingdom.close();

	//negara peru
	json result_peru = json_query(covid, "$[5].attributes");
	std::ofstream peru;
	peru.open("./negara/peru.json");
	peru << result_peru;
	peru.close();

	//negara chile
	json result_chile = json_query(covid, "$[6].attributes");
	std::ofstream chile;
	chile.open("./negara/chile.json");
	chile << result_chile;
	chile.close();

	//negara spain
	json result_spain = json_query(covid, "$[7].attributes");
	std::ofstream spain;
	spain.open("./negara/spain.json");
	spain << result_spain;
	spain.close();

	//negara italy
	json result_italy = json_query(covid, "$[8].attributes");
	std::ofstream italy;
	italy.open("./negara/italy.json");
	italy << result_italy;
	italy.close();

	//negara iran
	json result_iran = json_query(covid, "$[9].attributes");
	std::ofstream iran;
	iran.open("./negara/iran.json");
	iran << result_iran;
	iran.close();

	//negara mexico
	json result_mexico = json_query(covid, "$[10].attributes");
	std::ofstream mexico;
	mexico.open("./negara/mexico.json");
	mexico << result_mexico;
	mexico.close();

	//negara pakistan
	json result_pakistan = json_query(covid, "$[11].attributes");
	std::ofstream pakistan;
	pakistan.open("./negara/pakistan.json");
	pakistan << result_pakistan;
	pakistan.close();

	//negara france
	json result_france = json_query(covid, "$[12].attributes");
	std::ofstream france;
	france.open("./negara/france.json");
	france << result_france;
	france.close();

	//negara turkey
	json result_turkey = json_query(covid, "$[13].attributes");
	std::ofstream turkey;
	turkey.open("./negara/turkey.json");
	turkey << result_turkey;
	turkey.close();

	//negara germany
	json result_germany = json_query(covid, "$[14].attributes");
	std::ofstream germany;
	germany.open("./negara/germany.json");
	germany << result_germany;
	germany.close();

	//negara saudi_arabia
	json result_saudi_arabia = json_query(covid, "$[15].attributes");
	std::ofstream saudi_arabia;
	saudi_arabia.open("./negara/saudi_arabia.json");
	saudi_arabia << result_saudi_arabia;
	saudi_arabia.close();

	//negara bangladesh
	json result_bangladesh = json_query(covid, "$[16].attributes");
	std::ofstream bangladesh;
	bangladesh.open("./negara/bangladesh.json");
	bangladesh << result_bangladesh;
	bangladesh.close();

	//negara south_afrika
	json result_south_afrika = json_query(covid, "$[17].attributes");
	std::ofstream south_afrika;
	south_afrika.open("./negara/south_afrika.json");
	south_afrika << result_south_afrika;
	south_afrika.close();

	//negara canada
	json result_canada = json_query(covid, "$[18].attributes");
	std::ofstream canada;
	canada.open("./negara/canada.json");
	canada << result_canada;
	canada.close();

	//negara qatar
	json result_qatar = json_query(covid, "$[19].attributes");
	std::ofstream qatar;
	qatar.open("./negara/qatar.json");
	qatar << result_qatar;
	qatar.close();

	//negara colombia
	json result_colombia = json_query(covid, "$[20].attributes");
	std::ofstream colombia;
	colombia.open("./negara/colombia.json");
	colombia << result_colombia;
	colombia.close();

	//negara china
	json result_china = json_query(covid, "$[21].attributes");
	std::ofstream china;
	china.open("./negara/china.json");
	china << result_china;
	china.close();

	//negara sweden
	json result_sweden = json_query(covid, "$[22].attributes");
	std::ofstream sweden;
	sweden.open("./negara/sweden.json");
	sweden << result_sweden;
	sweden.close();

	//negara egypt
	json result_egypt = json_query(covid, "$[23].attributes");
	std::ofstream egypt;
	egypt.open("./negara/egypt.json");
	egypt << result_egypt;
	egypt.close();

	//negara belarus
	json result_belarus = json_query(covid, "$[24].attributes");
	std::ofstream belarus;
	belarus.open("./negara/belarus.json");
	belarus << result_belarus;
	belarus.close();

	//negara belgium
	json result_belgium = json_query(covid, "$[25].attributes");
	std::ofstream belgium;
	belgium.open("./negara/belgium.json");
	belgium << result_belgium;
	belgium.close();

	//negara argentina
	json result_argentina = json_query(covid, "$[26].attributes");
	std::ofstream argentina;
	argentina.open("./negara/argentina.json");
	argentina << result_argentina;
	argentina.close();

	//negara ecuador
	json result_ecuador = json_query(covid, "$[27].attributes");
	std::ofstream ecuador;
	ecuador.open("./negara/ecuador.json");
	ecuador << result_ecuador;
	ecuador.close();

	//negara indonesia
	json result_indonesia = json_query(covid, "$[28].attributes");
	std::ofstream indonesia;
	indonesia.open("./negara/indonesia.json");
	indonesia << result_indonesia;
	indonesia.close();

	//negara netherlands
	json result_netherlands = json_query(covid, "$[29].attributes");
	std::ofstream netherlands;
	netherlands.open("./negara/netherlands.json");
	netherlands << result_netherlands;
	netherlands.close();

	//negara united_arab_emirates
	json result_united_arab_emirates = json_query(covid, "$[30].attributes");
	std::ofstream united_arab_emirates;
	united_arab_emirates.open("./negara/united_arab_emirates.json");
	united_arab_emirates << result_united_arab_emirates;
	united_arab_emirates.close();

	//negara iraq
	json result_iraq = json_query(covid, "$[31].attributes");
	std::ofstream iraq;
	iraq.open("./negara/iraq.json");
	iraq << result_iraq;
	iraq.close();

	//negara kuwait
	json result_kuwait = json_query(covid, "$[32].attributes");
	std::ofstream kuwait;
	kuwait.open("./negara/kuwait.json");
	kuwait << result_kuwait;
	kuwait.close();

	//negara ukraine
	json result_ukraine = json_query(covid, "$[33].attributes");
	std::ofstream ukraine;
	ukraine.open("./negara/ukraine.json");
	ukraine << result_ukraine;
	ukraine.close();

	//negara singapore
	json result_singapore = json_query(covid, "$[34].attributes");
	std::ofstream singapore;
	singapore.open("./negara/singapore.json");
	singapore << result_singapore;
	singapore.close();

	//negara portugal
	json result_portugal = json_query(covid, "$[35].attributes");
	std::ofstream portugal;
	portugal.open("./negara/portugal.json");
	portugal << result_portugal;
	portugal.close();

	//negara oman
	json result_oman = json_query(covid, "$[36].attributes");
	std::ofstream oman;
	oman.open("./negara/oman.json");
	oman << result_oman;
	oman.close();

	//negara philippines
	json result_philippines = json_query(covid, "$[37].attributes");
	std::ofstream philippines;
	philippines.open("./negara/philippines.json");
	philippines << result_philippines;
	philippines.close();

	//negara poland
	json result_poland = json_query(covid, "$[38].attributes");
	std::ofstream poland;
	poland.open("./negara/poland.json");
	poland << result_poland;
	poland.close();

	//negara switzerland
	json result_switzerland = json_query(covid, "$[39].attributes");
	std::ofstream switzerland;
	switzerland.open("./negara/switzerland.json");
	switzerland << result_switzerland;
	switzerland.close();


	//negara dominician_republic
	json result_dominician_republic = json_query(covid, "$[40].attributes");
	std::ofstream dominician_republic;
	dominician_republic.open("./negara/dominician_republic.json");
	dominician_republic << result_dominician_republic;
	dominician_republic.close();

	//negara afghanistan
	json result_afghanistan = json_query(covid, "$[41].attributes");
	std::ofstream afghanistan;
	afghanistan.open("./negara/afghanistan.json");
	afghanistan << result_afghanistan;
	afghanistan.close();

	//negara bolivia
	json result_bolivia = json_query(covid, "$[42].attributes");
	std::ofstream bolivia;
	bolivia.open("./negara/bolivia.json");
	bolivia << result_bolivia;
	bolivia.close();

	//negara panama
	json result_panama = json_query(covid, "$[43].attributes");
	std::ofstream panama;
	panama.open("./negara/panama.json");
	panama << result_panama;
	panama.close();

	//negara romania
	json result_romania = json_query(covid, "$[44].attributes");
	std::ofstream romania;
	romania.open("./negara/romania.json");
	romania << result_romania;
	romania.close();

	//negara ireland
	json result_ireland = json_query(covid, "$[45].attributes");
	std::ofstream ireland;
	ireland.open("./negara/ireland.json");
	ireland << result_ireland;
	ireland.close();

	//negara bahrain
	json result_bahrain = json_query(covid, "$[46].attributes");
	std::ofstream bahrain;
	bahrain.open("./negara/bahrain.json");
	bahrain << result_bahrain;
	bahrain.close();

	//negara armenia
	json result_armenia = json_query(covid, "$[47].attributes");
	std::ofstream armenia;
	armenia.open("./negara/armenia.json");
	armenia << result_armenia;
	armenia.close();

	//negara nigeria
	json result_nigeria = json_query(covid, "$[48].attributes");
	std::ofstream nigeria;
	nigeria.open("./negara/nigeria.json");
	nigeria << result_nigeria;
	nigeria.close();

	//negara israel
	json result_israel = json_query(covid, "$[49].attributes");
	std::ofstream israel;
	israel.open("./negara/israel.json");
	israel << result_israel;
	israel.close();

	//negara kazakhstan
	json result_kazakhstan = json_query(covid, "$[50].attributes");
	std::ofstream kazakhstan;
	kazakhstan.open("./negara/kazakhstan.json");
	kazakhstan << result_kazakhstan;
	kazakhstan.close();

	//negara japan
	json result_japan = json_query(covid, "$[51].attributes");
	std::ofstream japan;
	japan.open("./negara/japan.json");
	japan << result_japan;
	japan.close();

	//negara austria
	json result_austria = json_query(covid, "$[52].attributes");
	std::ofstream austria;
	austria.open("./negara/austria.json");
	austria << result_austria;
	austria.close();

	//negara honduras
	json result_honduras = json_query(covid, "$[53].attributes");
	std::ofstream honduras;
	honduras.open("./negara/honduras.json");
	honduras << result_honduras;
	honduras.close();

	//negara ghana
	json result_ghana = json_query(covid, "$[54].attributes");
	std::ofstream ghana;
	ghana.open("./negara/ghana.json");
	ghana << result_ghana;
	ghana.close();

	//negara azerbaijan
	json result_azerbaijan = json_query(covid, "$[55].attributes");
	std::ofstream azerbaijan;
	azerbaijan.open("./negara/azerbaijan.json");
	azerbaijan << result_azerbaijan;
	azerbaijan.close();

	//negara guatemala
	json result_guatemala = json_query(covid, "$[56].attributes");
	std::ofstream guatemala;
	guatemala.open("./negara/guatemala.json");
	guatemala << result_guatemala;
	guatemala.close();

	//negara moldova
	json result_moldova = json_query(covid, "$[57].attributes");
	std::ofstream moldova;
	moldova.open("./negara/moldova.json");
	moldova << result_moldova;
	moldova.close();


	//negara serbia
	json result_serbia = json_query(covid, "$[58].attributes");
	std::ofstream serbia;
	serbia.open("./negara/serbia.json");
	serbia << result_serbia;
	serbia.close();

	//negara algeria
	json result_algeria = json_query(covid, "$[59].attributes");
	std::ofstream algeria;
	algeria.open("./negara/algeria.json");
	algeria << result_algeria;
	algeria.close();

	//negara denmark
	json result_denmark = json_query(covid, "$[60].attributes");
	std::ofstream denmark;
	denmark.open("./negara/denmark.json");
	denmark << result_denmark;
	denmark.close();

	//negara nepal
	json result_nepal = json_query(covid, "$[61].attributes");
	std::ofstream nepal;
	nepal.open("./negara/nepal.json");
	nepal << result_nepal;
	nepal.close();

	//negara korea
	json result_korea = json_query(covid, "$[62].attributes");
	std::ofstream korea;
	korea.open("./negara/korea.json");
	korea << result_korea;
	korea.close();

	//negara cameroon
	json result_cameroon = json_query(covid, "$[63].attributes");
	std::ofstream cameroon;
	cameroon.open("./negara/cameroon.json");
	cameroon << result_cameroon;
	cameroon.close();

	//negara morocco
	json result_morocco = json_query(covid, "$[64].attributes");
	std::ofstream morocco;
	morocco.open("./negara/morocco.json");
	morocco << result_morocco;
	morocco.close();

	//negara czechia
	json result_czechia = json_query(covid, "$[65].attributes");
	std::ofstream czechia;
	czechia.open("./negara/czechia.json");
	czechia << result_czechia;
	czechia.close();

	//negara sudan
	json result_sudan = json_query(covid, "$[66].attributes");
	std::ofstream sudan;
	sudan.open("./negara/sudan.json");
	sudan << result_sudan;
	sudan.close();

	//negara cote_d_ivoire
	json result_cote_d_ivoire = json_query(covid, "$[67].attributes");
	std::ofstream cote_d_ivoire;
	cote_d_ivoire.open("./negara/cote_d_ivoire.json");
	cote_d_ivoire << result_cote_d_ivoire;
	cote_d_ivoire.close();

	//negara norway
	json result_norway = json_query(covid, "$[68].attributes");
	std::ofstream norway;
	norway.open("./negara/norway.json");
	norway << result_norway;
	norway.close();

	//negara malaysia
	json result_malaysia = json_query(covid, "$[69].attributes");
	std::ofstream malaysia;
	malaysia.open("./negara/malaysia.json");
	malaysia << result_malaysia;
	malaysia.close();

	//negara uzbekistan
	json result_uzbekistan = json_query(covid, "$[70].attributes");
	std::ofstream uzbekistan;
	uzbekistan.open("./negara/uzbekistan.json");
	uzbekistan << result_uzbekistan;
	uzbekistan.close();

	//negara australia
	json result_australia = json_query(covid, "$[71].attributes");
	std::ofstream australia;
	australia.open("./negara/australia.json");
	australia << result_australia;
	australia.close();

	//negara finland
	json result_finland = json_query(covid, "$[72].attributes");
	std::ofstream finland;
	finland.open("./negara/finland.json");
	finland << result_finland;
	finland.close();

	//negara congo_kinshasa
	json result_congo_kinshasa = json_query(covid, "$[73].attributes");
	std::ofstream congo_kinshasa;
	congo_kinshasa.open("./negara/congo_kinshasa.json");
	congo_kinshasa << result_congo_kinshasa;
	congo_kinshasa.close();

	//negara senegal
	json result_senegal = json_query(covid, "$[74].attributes");
	std::ofstream senegal;
	senegal.open("./negara/senegal.json");
	senegal << result_senegal;
	senegal.close();

	//negara north_macedonia
	json result_north_macedonia = json_query(covid, "$[75].attributes");
	std::ofstream north_macedonia;
	north_macedonia.open("./negara/north_macedonia.json");
	north_macedonia << result_north_macedonia;
	north_macedonia.close();

	//negara kenya
	json result_kenya = json_query(covid, "$[76].attributes");
	std::ofstream kenya;
	kenya.open("./negara/kenya.json");
	kenya << result_kenya;
	kenya.close();

	//negara el_salvador
	json result_el_salvador = json_query(covid, "$[77].attributes");
	std::ofstream el_salvador;
	el_salvador.open("./negara/el_salvador.json");
	el_salvador << result_el_salvador;
	el_salvador.close();


	//negara tajikistan
	json result_tajikistan = json_query(covid, "$[78].attributes");
	std::ofstream tajikistan;
	tajikistan.open("./negara/tajikistan.json");
	tajikistan << result_tajikistan;
	tajikistan.close();

	//negara haiti
	json result_haiti = json_query(covid, "$[79].attributes");
	std::ofstream haiti;
	haiti.open("./negara/haiti.json");
	haiti << result_haiti;
	haiti.close();

	//negara ethiopia
	json result_ethiopia = json_query(covid, "$[80].attributes");
	std::ofstream ethiopia;
	ethiopia.open("./negara/ethiopia.json");
	ethiopia << result_ethiopia;
	ethiopia.close();

	//negara guinea
	json result_guinea = json_query(covid, "$[81].attributes");
	std::ofstream guinea;
	guinea.open("./negara/guinea.json");
	guinea << result_guinea;
	guinea.close();

	//negara gabon
	json result_gabon = json_query(covid, "$[82].attributes");
	std::ofstream gabon;
	gabon.open("./negara/gabon.json");
	gabon << result_gabon;
	gabon.close();

	//negara venezuela
	json result_venezuela = json_query(covid, "$[83].attributes");
	std::ofstream venezuela;
	venezuela.open("./negara/venezuela.json");
	venezuela << result_venezuela;
	venezuela.close();

	//negara kyrgyzstan
	json result_kyrgyzstan = json_query(covid, "$[84].attributes");
	std::ofstream kyrgyzstan;
	kyrgyzstan.open("./negara/kyrgyzstan.json");
	kyrgyzstan << result_kyrgyzstan;
	kyrgyzstan.close();

	//negara djibouti
	json result_djibouti = json_query(covid, "$[85].attributes");
	std::ofstream djibouti;
	djibouti.open("./negara/djibouti.json");
	djibouti << result_djibouti;
	djibouti.close();

	//negara bulgaria
	json result_bulgaria = json_query(covid, "$[86].attributes");
	std::ofstream bulgaria;
	bulgaria.open("./negara/bulgaria.json");
	bulgaria << result_bulgaria;
	bulgaria.close();

	//negara luxembourg
	json result_luxembourg = json_query(covid, "$[87].attributes");
	std::ofstream luxembourg;
	luxembourg.open("./negara/luxembourg.json");
	luxembourg << result_luxembourg;
	luxembourg.close();

	//negara hungary
	json result_hungary = json_query(covid, "$[88].attributes");
	std::ofstream hungary;
	hungary.open("./negara/hungary.json");
	hungary << result_hungary;
	hungary.close();

	//negara mauritania
	json result_mauritania = json_query(covid, "$[89].attributes");
	std::ofstream mauritania;
	mauritania.open("./negara/mauritania.json");
	mauritania << result_mauritania;
	mauritania.close();

	//negara bosnia_and_herzegovina
	json result_bosnia_and_herzegovina = json_query(covid, "$[90].attributes");
	std::ofstream bosnia_and_herzegovina;
	bosnia_and_herzegovina.open("./negara/bosnia_and_herzegovina.json");
	bosnia_and_herzegovina << result_bosnia_and_herzegovina;
	bosnia_and_herzegovina.close();

	//negara central_african_republik
	json result_central_african_republik = json_query(covid, "$[91].attributes");
	std::ofstream central_african_republik;
	central_african_republik.open("./negara/central_african_republik.json");
	central_african_republik << result_central_african_republik;
	central_african_republik.close();

	//negara greece
	json result_greece = json_query(covid, "$[92].attributes");
	std::ofstream greece;
	greece.open("./negara/greece.json");
	greece << result_greece;
	greece.close();

	//negara thailand
	json result_thailand = json_query(covid, "$[93].attributes");
	std::ofstream thailand;
	thailand.open("./negara/thailand.json");
	thailand << result_thailand;
	thailand.close();

	//negara costa_rica
	json result_costa_rica = json_query(covid, "$[94].attributes");
	std::ofstream costa_rica;
	costa_rica.open("./negara/costa_rica.json");
	costa_rica << result_costa_rica;
	costa_rica.close();

	//negara somalia
	json result_somalia = json_query(covid, "$[95].attributes");
	std::ofstream somalia;
	somalia.open("./negara/somalia.json");
	somalia << result_somalia;
	somalia.close();

	//negara croatia
	json result_croatia = json_query(covid, "$[96].attributes");
	std::ofstream croatia;
	croatia.open("./negara/croatia.json");
	croatia << result_croatia;
	croatia.close();

	//negara albania
	json result_albania = json_query(covid, "$[97].attributes");
	std::ofstream albania;
	albania.open("./negara/albania.json");
	albania << result_albania;
	albania.close();

	//negara cuba
	json result_cuba = json_query(covid, "$[98].attributes");
	std::ofstream cuba;
	cuba.open("./negara/cuba.json");
	cuba << result_cuba;
	cuba.close();

	//negara maldives
	json result_maldives = json_query(covid, "$[99].attributes");
	std::ofstream maldives;
	maldives.open("./negara/maldives.json");
	maldives << result_maldives;
	maldives.close();

	//negara nicaragua
	json result_nicaragua = json_query(covid, "$[100].attributes");
	std::ofstream nicaragua;
	nicaragua.open("./negara/nicaragua.json");
	nicaragua << result_nicaragua;
	nicaragua.close();

	//negara kosovo
	json result_kosovo = json_query(covid, "$[101].attributes");
	std::ofstream kosovo;
	kosovo.open("./negara/kosovo.json");
	kosovo << result_kosovo;
	kosovo.close();

	//negara mali
	json result_mali = json_query(covid, "$[102].attributes");
	std::ofstream mali;
	mali.open("./negara/mali.json");
	mali << result_mali;
	mali.close();

	//negara madagascar
	json result_madagascar = json_query(covid, "$[103].attributes");
	std::ofstream madagascar;
	madagascar.open("./negara/madagascar.json");
	madagascar << result_madagascar;
	madagascar.close();

	//negara sri_lanka
	json result_sri_lanka = json_query(covid, "$[104].attributes");
	std::ofstream sri_lanka;
	sri_lanka.open("./negara/sri_lanka.json");
	sri_lanka << result_sri_lanka;
	sri_lanka.close();

	//negara equatorial_guinea
	json result_equatorial_guinea = json_query(covid, "$[105].attributes");
	std::ofstream equatorial_guinea;
	equatorial_guinea.open("./negara/equatorial_guinea.json");
	equatorial_guinea << result_equatorial_guinea;
	equatorial_guinea.close();

	//negara estonia
	json result_estonia = json_query(covid, "$[106].attributes");
	std::ofstream estonia;
	estonia.open("./negara/estonia.json");
	estonia << result_estonia;
	estonia.close();

	//negara paraguay
	json result_paraguay = json_query(covid, "$[107].attributes");
	std::ofstream paraguay;
	paraguay.open("./negara/paraguay.json");
	paraguay << result_paraguay;
	paraguay.close();

	//negara south_sudan
	json result_south_sudan = json_query(covid, "$[108].attributes");
	std::ofstream south_sudan;
	south_sudan.open("./negara/south_sudan.json");
	south_sudan << result_south_sudan;
	south_sudan.close();

	//negara west_bank_and_gaza
	json result_west_bank_and_gaza = json_query(covid, "$[109].attributes");
	std::ofstream west_bank_and_gaza;
	west_bank_and_gaza.open("./negara/west_bank_and_gaza.json");
	west_bank_and_gaza << result_west_bank_and_gaza;
	west_bank_and_gaza.close();

	//negara iceland
	json result_iceland = json_query(covid, "$[110].attributes");
	std::ofstream iceland;
	iceland.open("./negara/iceland.json");
	iceland << result_iceland;
	iceland.close();

	//negara lithuania
	json result_lithuania = json_query(covid, "$[111].attributes");
	std::ofstream lithuania;
	lithuania.open("./negara/lithuania.json");
	lithuania << result_lithuania;
	lithuania.close();

	//negara lebanon
	json result_lebanon = json_query(covid, "$[112].attributes");
	std::ofstream lebanon;
	lebanon.open("./negara/lebanon.json");
	lebanon << result_lebanon;
	lebanon.close();

	//negara slovakia
	json result_slovakia = json_query(covid, "$[113].attributes");
	std::ofstream slovakia;
	slovakia.open("./negara/slovakia.json");
	slovakia << result_slovakia;
	slovakia.close();

	//negara guinea_bissau
	json result_guinea_bissau = json_query(covid, "$[114].attributes");
	std::ofstream guinea_bissau;
	guinea_bissau.open("./negara/guinea_bissau.json");
	guinea_bissau << result_guinea_bissau;
	guinea_bissau.close();

	//negara slovenia
	json result_slovenia = json_query(covid, "$[115].attributes");
	std::ofstream slovenia;
	slovenia.open("./negara/slovenia.json");
	slovenia << result_slovenia;
	slovenia.close();

	//negara zambia
	json result_zambia = json_query(covid, "$[116].attributes");
	std::ofstream zambia;
	zambia.open("./negara/zambia.json");
	zambia << result_zambia;
	zambia.close();

	//negara new_zealand
	json result_new_zealand = json_query(covid, "$[117].attributes");
	std::ofstream new_zealand;
	new_zealand.open("./negara/new_zealand.json");
	new_zealand << result_new_zealand;
	new_zealand.close();

	//negara sierra_leone
	json result_sierra_leone = json_query(covid, "$[118].attributes");
	std::ofstream sierra_leone;
	sierra_leone.open("./negara/sierra_leone.json");
	sierra_leone << result_sierra_leone;
	sierra_leone.close();

	//negara tunisia
	json result_tunisia = json_query(covid, "$[119].attributes");
	std::ofstream tunisia;
	tunisia.open("./negara/tunisia.json");
	tunisia << result_tunisia;
	tunisia.close();

	//negara benin
	json result_benin = json_query(covid, "$[120].attributes");
	std::ofstream benin;
	benin.open("./negara/benin.json");
	benin << result_benin;
	benin.close();

	//negara jordan
	json result_jordan = json_query(covid, "$[121].attributes");
	std::ofstream jordan;
	jordan.open("./negara/jordan.json");
	jordan << result_jordan;
	jordan.close();

	//negara latvia
	json result_latvia = json_query(covid, "$[122].attributes");
	std::ofstream latvia;
	latvia.open("./negara/latvia.json");
	latvia << result_latvia;
	latvia.close();

	//negara yemen
	json result_yemen = json_query(covid, "$[123].attributes");
	std::ofstream yemen;
	yemen.open("./negara/yemen.json");
	yemen << result_yemen;
	yemen.close();

	//negara cabo_verde
	json result_cabo_verde = json_query(covid, "$[124].attributes");
	std::ofstream cabo_verde;
	cabo_verde.open("./negara/cabo_verde.json");
	cabo_verde << result_cabo_verde;
	cabo_verde.close();

	//negara congo_brazzaville
	json result_congo_brazzaville = json_query(covid, "$[125].attributes");
	std::ofstream congo_brazzaville;
	congo_brazzaville.open("./negara/congo_brazzaville.json");
	congo_brazzaville << result_congo_brazzaville;
	congo_brazzaville.close();

	//negara niger
	json result_niger = json_query(covid, "$[126].attributes");
	std::ofstream niger;
	niger.open("./negara/niger.json");
	niger << result_niger;
	niger.close();

	//negara malawi
	json result_malawi = json_query(covid, "$[127].attributes");
	std::ofstream malawi;
	malawi.open("./negara/malawi.json");
	malawi << result_malawi;
	malawi.close();

	//negara cyprus
	json result_cyprus = json_query(covid, "$[128].attributes");
	std::ofstream cyprus;
	cyprus.open("./negara/cyprus.json");
	cyprus << result_cyprus;
	cyprus.close();

	//negara burkina_faso
	json result_burkina_faso = json_query(covid, "$[129].attributes");
	std::ofstream burkina_faso;
	burkina_faso.open("./negara/burkina_faso.json");
	burkina_faso << result_burkina_faso;
	burkina_faso.close();

	//negara georgia
	json result_georgia = json_query(covid, "$[130].attributes");
	std::ofstream georgia;
	georgia.open("./negara/georgia.json");
	georgia << result_georgia;
	georgia.close();

	//negara uruguay
	json result_uruguay = json_query(covid, "$[131].attributes");
	std::ofstream uruguay;
	uruguay.open("./negara/uruguay.json");
	uruguay << result_uruguay;
	uruguay.close();

	//negara rwanda
	json result_rwanda = json_query(covid, "$[132].attributes");
	std::ofstream rwanda;
	rwanda.open("./negara/rwanda.json");
	rwanda << result_rwanda;
	rwanda.close();

	//negara chad
	json result_chad = json_query(covid, "$[133].attributes");
	std::ofstream chad;
	chad.open("./negara/chad.json");
	chad << result_chad;
	chad.close();

	//negara mozambique 134
	json result_mozambique = json_query(covid, "$[134].attributes");
	std::ofstream mozambique;
	mozambique.open("./negara/mozambique.json");
	mozambique << result_mozambique;
	mozambique.close();

	//negara uganda
	json result_uganda = json_query(covid, "$[135].attributes");
	std::ofstream uganda;
	uganda.open("./negara/uganda.json");
	uganda << result_uganda;
	uganda.close();

	//negara andorra 136
	json result_andorra = json_query(covid, "$[136].attributes");
	std::ofstream andorra;
	andorra.open("./negara/andorra.json");
	andorra << result_andorra;
	andorra.close();

	//negara eswatini
	json result_eswatini = json_query(covid, "$[137].attributes");
	std::ofstream eswatini;
	eswatini.open("./negara/eswatini.json");
	eswatini << result_eswatini;
	eswatini.close();

	//negara liberia
	json result_liberia = json_query(covid, "$[138].attributes");
	std::ofstream liberia;
	liberia.open("./negara/liberia.json");
	liberia << result_liberia;
	liberia.close();

	//negara libya
	json result_libya = json_query(covid, "$[139].attributes");
	std::ofstream libya;
	libya.open("./negara/libya.json");
	libya << result_libya;
	libya.close();

	//negara sao_tome_and_principe
	json result_sao_tome_and_principe = json_query(covid, "$[140].attributes");
	std::ofstream sao_tome_and_principe;
	sao_tome_and_principe.open("./negara/sao_tome_and_principe.json");
	sao_tome_and_principe << result_sao_tome_and_principe;
	sao_tome_and_principe.close();

	//negara diamond_princess
	json result_diamond_princess = json_query(covid, "$[141].attributes");
	std::ofstream diamond_princess;
	diamond_princess.open("./negara/diamond_princess.json");
	diamond_princess << result_diamond_princess;
	diamond_princess.close();

	//negara san_marino
	json result_san_marino = json_query(covid, "$[142].attributes");
	std::ofstream san_marino;
	san_marino.open("./negara/san_marino.json");
	san_marino << result_san_marino;
	san_marino.close();

	//negara jamaica
	json result_jamaica = json_query(covid, "$[143].attributes");
	std::ofstream jamaica;
	jamaica.open("./negara/jamaica.json");
	jamaica << result_jamaica;
	jamaica.close();

	//negara malta
	json result_malta = json_query(covid, "$[144].attributes");
	std::ofstream malta;
	malta.open("./negara/malta.json");
	malta << result_malta;
	malta.close();

	//negara togo
	json result_togo = json_query(covid, "$[145].attributes");
	std::ofstream togo;
	togo.open("./negara/togo.json");
	togo << result_togo;
	togo.close();

	//negara zimbabwe
	json result_zimbabwe = json_query(covid, "$[146].attributes");
	std::ofstream zimbabwe;
	zimbabwe.open("./negara/zimbabwe.json");
	zimbabwe << result_zimbabwe;
	zimbabwe.close();

	//negara tanzania
	json result_tanzania = json_query(covid, "$[147].attributes");
	std::ofstream tanzania;
	tanzania.open("./negara/tanzania.json");
	tanzania << result_tanzania;
	tanzania.close();

	//negara montenegro
	json result_montenegro = json_query(covid, "$[148].attributes");
	std::ofstream montenegro;
	montenegro.open("./negara/montenegro.json");
	montenegro << result_montenegro;
	montenegro.close();

	//negara suriname
	json result_suriname = json_query(covid, "$[149].attributes");
	std::ofstream suriname;
	suriname.open("./negara/suriname.json");
	suriname << result_suriname;
	suriname.close();

	//negara taiwan
	json result_taiwan = json_query(covid, "$[150].attributes");
	std::ofstream taiwan;
	taiwan.open("./negara/taiwan.json");
	taiwan << result_taiwan;
	taiwan.close();

	//negara vietnam
	json result_vietnam = json_query(covid, "$[151].attributes");
	std::ofstream vietnam;
	vietnam.open("./negara/vietnam.json");
	vietnam << result_vietnam;
	vietnam.close();

	//negara mauritius
	json result_mauritius = json_query(covid, "$[152].attributes");
	std::ofstream mauritius;
	mauritius.open("./negara/mauritius.json");
	mauritius << result_mauritius;
	mauritius.close();

	//negara burma
	json result_burma = json_query(covid, "$[153].attributes");
	std::ofstream burma;
	burma.open("./negara/burma.json");
	burma << result_burma;
	burma.close();

	//negara comoros
	json result_comoros = json_query(covid, "$[154].attributes");
	std::ofstream comoros;
	comoros.open("./negara/comoros.json");
	comoros << result_comoros;
	comoros.close();

	//negara angola
	json result_angola = json_query(covid, "$[155].attributes");
	std::ofstream angola;
	angola.open("./negara/angola.json");
	angola << result_angola;
	angola.close();

	//negara syria
	json result_syria = json_query(covid, "$[156].attributes");
	std::ofstream syria;
	syria.open("./negara/syria.json");
	syria << result_syria;
	syria.close();

	//negara guyana
	json result_guyana = json_query(covid, "$[157].attributes");
	std::ofstream guyana;
	guyana.open("./negara/guyana.json");
	guyana << result_guyana;
	guyana.close();

	//negara mongolia
	json result_mongolia = json_query(covid, "$[158].attributes");
	std::ofstream mongolia;
	mongolia.open("./negara/mongolia.json");
	mongolia << result_mongolia;
	mongolia.close();

	//negara eritrea
	json result_eritrea = json_query(covid, "$[159].attributes");
	std::ofstream eritrea;
	eritrea.open("./negara/eritrea.json");
	eritrea << result_eritrea;
	eritrea.close();

	//negara burundi
	json result_burundi = json_query(covid, "$[160].attributes");
	std::ofstream burundi;
	burundi.open("./negara/burundi.json");
	burundi << result_burundi;
	burundi.close();

	//negara namibia
	json result_namibia = json_query(covid, "$[161].attributes");
	std::ofstream namibia;
	namibia.open("./negara/namibia.json");
	namibia << result_namibia;
	namibia.close();

	//negara brunei
	json result_brunei = json_query(covid, "$[162].attributes");
	std::ofstream brunei;
	brunei.open("./negara/brunei.json");
	brunei << result_brunei;
	brunei.close();

	//negara cambodia
	json result_cambodia = json_query(covid, "$[163].attributes");
	std::ofstream cambodia;
	cambodia.open("./negara/cambodia.json");
	cambodia << result_cambodia;
	cambodia.close();

	//negara trinidad_and_tobago
	json result_trinidad_and_tobago = json_query(covid, "$[164].attributes");
	std::ofstream trinidad_and_tobago;
	trinidad_and_tobago.open("./negara/trinidad_and_tobago.json");
	trinidad_and_tobago << result_trinidad_and_tobago;
	trinidad_and_tobago.close();

	//negara bahamas
	json result_bahamas = json_query(covid, "$[165].attributes");
	std::ofstream bahamas;
	bahamas.open("./negara/bahamas.json");
	bahamas << result_bahamas;
	bahamas.close();

	//negara monaco
	json result_monaco = json_query(covid, "$[166].attributes");
	std::ofstream monaco;
	monaco.open("./negara/monaco.json");
	monaco << result_monaco;
	monaco.close();

	//negara barbados
	json result_barbados = json_query(covid, "$[167].attributes");
	std::ofstream barbados;
	barbados.open("./negara/barbados.json");
	barbados << result_barbados;
	barbados.close();

	//negara botswana
	json result_botswana = json_query(covid, "$[168].attributes");
	std::ofstream botswana;
	botswana.open("./negara/botswana.json");
	botswana << result_botswana;
	botswana.close();

	//negara liechtenstein
	json result_liechtenstein = json_query(covid, "$[169].attributes");
	std::ofstream liechtenstein;
	liechtenstein.open("./negara/liechtenstein.json");
	liechtenstein << result_liechtenstein;
	liechtenstein.close();

	//negara bhutan
	json result_bhutan = json_query(covid, "$[170].attributes");
	std::ofstream bhutan;
	bhutan.open("./negara/bhutan.json");
	bhutan << result_bhutan;
	bhutan.close();

	//negara antigua_and_barbuda
	json result_antigua_and_barbuda = json_query(covid, "$[171].attributes");
	std::ofstream antigua_and_barbuda;
	antigua_and_barbuda.open("./negara/antigua_and_barbuda.json");
	antigua_and_barbuda << result_antigua_and_barbuda;
	antigua_and_barbuda.close();

	//negara gambia
	json result_gambia = json_query(covid, "$[172].attributes");
	std::ofstream gambia;
	gambia.open("./negara/gambia.json");
	gambia << result_gambia;
	gambia.close();

	//negara saint_vincent_and_the_grenadines
	json result_saint_vincent_and_the_grenadines = json_query(covid, "$[173].attributes");
	std::ofstream saint_vincent_and_the_grenadines;
	saint_vincent_and_the_grenadines.open("./negara/saint_vincent_and_the_grenadines.json");
	saint_vincent_and_the_grenadines << result_saint_vincent_and_the_grenadines;
	saint_vincent_and_the_grenadines.close();

	//negara belize
	json result_belize = json_query(covid, "$[174].attributes");
	std::ofstream belize;
	belize.open("./negara/belize.json");
	belize << result_belize;
	belize.close();

	//negara lesotho
	json result_lesotho = json_query(covid, "$[175].attributes");
	std::ofstream lesotho;
	lesotho.open("./negara/lesotho.json");
	lesotho << result_lesotho;
	lesotho.close();

	//negara timor_leste
	json result_timor_leste = json_query(covid, "$[176].attributes");
	std::ofstream timor_leste;
	timor_leste.open("./negara/timor_leste.json");
	timor_leste << result_timor_leste;
	timor_leste.close();

	//negara grenada
	json result_grenada = json_query(covid, "$[177].attributes");
	std::ofstream grenada;
	grenada.open("./negara/grenada.json");
	grenada << result_grenada;
	grenada.close();

	//negara seychelles
	json result_seychelles = json_query(covid, "$[178].attributes");
	std::ofstream seychelles;
	seychelles.open("./negara/seychelles.json");
	seychelles << result_seychelles;
	seychelles.close();

	//negara laos
	json result_laos = json_query(covid, "$[179].attributes");
	std::ofstream laos;
	laos.open("./negara/laos.json");
	laos << result_laos;
	laos.close();

	//negara saint_lucia
	json result_saint_lucia = json_query(covid, "$[180].attributes");
	std::ofstream saint_lucia;
	saint_lucia.open("./negara/saint_lucia.json");
	saint_lucia << result_saint_lucia;
	saint_lucia.close();

	//negara dominica
	json result_dominica = json_query(covid, "$[181].attributes");
	std::ofstream dominica;
	dominica.open("./negara/dominica.json");
	dominica << result_dominica;
	dominica.close();

	//negara fiji
	json result_fiji = json_query(covid, "$[182].attributes");
	std::ofstream fiji;
	fiji.open("./negara/fiji.json");
	fiji << result_fiji;
	fiji.close();

	//negara saint_kitts_and_nevis
	json result_saint_kitts_and_nevis = json_query(covid, "$[183].attributes");
	std::ofstream saint_kitts_and_nevis;
	saint_kitts_and_nevis.open("./negara/saint_kitts_and_nevis.json");
	saint_kitts_and_nevis << result_saint_kitts_and_nevis;
	saint_kitts_and_nevis.close();

	//negara holy_see
	json result_holy_see = json_query(covid, "$[184].attributes");
	std::ofstream holy_see;
	holy_see.open("./negara/holy_see.json");
	holy_see << result_holy_see;
	holy_see.close();

	//negara papua_new_guinea
	json result_papua_new_guinea = json_query(covid, "$[185].attributes");
	std::ofstream papua_new_guinea;
	papua_new_guinea.open("./negara/papua_new_guinea.json");
	papua_new_guinea << result_papua_new_guinea;
	papua_new_guinea.close();

	//negara western_sahara
	json result_western_sahara = json_query(covid, "$[186].attributes");
	std::ofstream western_sahara;
	western_sahara.open("./negara/western_sahara.json");
	western_sahara << result_western_sahara;
	western_sahara.close();

	//negara ms_zaandam
	json result_ms_zaandam = json_query(covid, "$[187].attributes");
	std::ofstream ms_zaandam;
	ms_zaandam.open("./negara/ms_zaandam.json");
	ms_zaandam << result_ms_zaandam;
	ms_zaandam.close();
}

void buatfileProvinsi() {
	auto r = cpr::Get(cpr::Url{ "https://api.kawalcorona.com/indonesia/provinsi" });
	r.status_code;

	std::ofstream myfile;
	myfile.open("provinsi.json");
	myfile << r.text;
	myfile.close();

	//pembuatan file per negara
	std::ifstream is("provinsi.json");
	json covid = json::parse(is);

	//Jawa timur
	json result_Jawa_Timur = json_query(covid, "$[0].attributes");
	std::ofstream Jawa_Timur;
	Jawa_Timur.open("./provinsi/jawa_timur.json");
	Jawa_Timur << result_Jawa_Timur;
	Jawa_Timur.close();

	//DKI Jakarta
	json result_DKI_Jakarta = json_query(covid, "$[1].attributes");
	std::ofstream DKI_Jakarta;
	DKI_Jakarta.open("./provinsi/dki_jakarta.json");
	DKI_Jakarta << result_DKI_Jakarta;
	DKI_Jakarta.close();

	//Sulawesi Selatan
	json result_sulawesi_selatan = json_query(covid, "$[2].attributes");
	std::ofstream sulawesi_selatan;
	sulawesi_selatan.open("./provinsi/sulawesi_selatan.json");
	sulawesi_selatan << result_sulawesi_selatan;
	sulawesi_selatan.close();

	//Jawa Tengah
	json result_jawa_tengah = json_query(covid, "$[3].attributes");
	std::ofstream jawa_tengah;
	jawa_tengah.open("./provinsi/jawa_tengah.json");
	jawa_tengah << result_jawa_tengah;
	jawa_tengah.close();

	//Jawa Barat
	json result_jawa_barat = json_query(covid, "$[4].attributes");
	std::ofstream jawa_barat;
	jawa_barat.open("./provinsi/jawa_barat.json");
	jawa_barat << result_jawa_barat;
	jawa_barat.close();

	//Kalimantan Selatan
	json result_kalimantan_selatan = json_query(covid, "$[5].attributes");
	std::ofstream kalimantan_selatan;
	kalimantan_selatan.open("./provinsi/kalimantan_selatan.json");
	kalimantan_selatan << result_kalimantan_selatan;
	kalimantan_selatan.close();

	//Sumatra Selatan
	json result_sumatera_selatan = json_query(covid, "$[6].attributes");
	std::ofstream sumatera_selatan;
	sumatera_selatan.open("./provinsi/sumatera_selatan.json");
	sumatera_selatan << result_sumatera_selatan;
	sumatera_selatan.close();

	//Papua
	json result_papua = json_query(covid, "$[7].attributes");
	std::ofstream papua;
	papua.open("./provinsi/papua.json");
	papua << result_papua;
	papua.close();

	//Sumatra Utara
	json result_sumatera_utara = json_query(covid, "$[8].attributes");
	std::ofstream sumatera_utara;
	sumatera_utara.open("./provinsi/sumatera_utara.json");
	sumatera_utara << result_sumatera_utara;
	sumatera_utara.close();

	//Banten
	json result_banten = json_query(covid, "$[9].attributes");
	std::ofstream banten;
	banten.open("./provinsi/banten.json");
	banten << result_banten;
	banten.close();

	//Bali
	json result_bali = json_query(covid, "$[10].attributes");
	std::ofstream bali;
	bali.open("./provinsi/bali.json");
	bali << result_bali;
	bali.close();

	//Nusa Tenggara Barat
	json result_nusa_tenggara_barat = json_query(covid, "$[11].attributes");
	std::ofstream nusa_tenggara_barat;
	nusa_tenggara_barat.open("./provinsi/nusa_tenggara_barat.json");
	nusa_tenggara_barat << result_nusa_tenggara_barat;
	nusa_tenggara_barat.close();

	//Sulawesi Utara
	json result_sulawesi_utara = json_query(covid, "$[12].attributes");
	std::ofstream sulawesi_utara;
	sulawesi_utara.open("./provinsi/sulawesi_utara.json");
	sulawesi_utara << result_sulawesi_utara;
	sulawesi_utara.close();

	//Kalimantan Tengah
	json result_kalimantan_tengah = json_query(covid, "$[13].attributes");
	std::ofstream kalimantan_tengah;
	kalimantan_tengah.open("./provinsi/kalimantan_tengah.json");
	kalimantan_tengah << result_kalimantan_tengah;
	kalimantan_tengah.close();

	//Sumatra barat
	json result_sumatera_barat = json_query(covid, "$[14].attributes");
	std::ofstream sumatera_barat;
	sumatera_barat.open("./provinsi/sumatera_barat.json");
	sumatera_barat << result_sumatera_barat;
	sumatera_barat.close();

	//Maluku
	json result_maluku = json_query(covid, "$[15].attributes");
	std::ofstream maluku;
	maluku.open("./provinsi/maluku.json");
	maluku << result_maluku;
	maluku.close();

	//Maluku Utara
	json result_maluku_utara = json_query(covid, "$[16].attributes");
	std::ofstream maluku_utara;
	maluku_utara.open("./provinsi/maluku_utara.json");
	maluku_utara << result_maluku_utara;
	maluku_utara.close();

	//Kalimantan Timur
	json result_kalimantan_timur = json_query(covid, "$[17].attributes");
	std::ofstream kalimantan_timur;
	kalimantan_timur.open("./provinsi/kalimantan_timur.json");
	kalimantan_timur << result_kalimantan_timur;
	kalimantan_timur.close();

	//Sulawesi Tenggara
	json result_sulawesi_tenggara = json_query(covid, "$[18].attributes");
	std::ofstream sulawesi_tenggara;
	sulawesi_tenggara.open("./provinsi/sulawesi_tenggara.json");
	sulawesi_tenggara << result_sulawesi_tenggara;
	sulawesi_tenggara.close();

	//Kalimantan Barat
	json result_kalimantan_barat = json_query(covid, "$[19].attributes");
	std::ofstream kalimantan_barat;
	kalimantan_barat.open("./provinsi/kalimantan_barat.json");
	kalimantan_barat << result_kalimantan_barat;
	kalimantan_barat.close();

	//Daerah Istimewa Yogyakarta
	json result_daerah_istimewa_yogyakarta = json_query(covid, "$[20].attributes");
	std::ofstream daerah_istimewa_yogyakarta;
	daerah_istimewa_yogyakarta.open("./provinsi/daerah_istimewa_yogyakarta.json");
	daerah_istimewa_yogyakarta << result_daerah_istimewa_yogyakarta;
	daerah_istimewa_yogyakarta.close();

	//Kepulauan Riau
	json result_kepulauan_riau = json_query(covid, "$[21].attributes");
	std::ofstream kepulauan_riau;
	kepulauan_riau.open("./provinsi/kepulauan_riau.json");
	kepulauan_riau << result_kepulauan_riau;
	kepulauan_riau.close();

	//Gorontalo
	json result_gorontalo = json_query(covid, "$[22].attributes");
	std::ofstream gorontalo;
	gorontalo.open("./provinsi/gorontalo.json");
	gorontalo << result_gorontalo;
	gorontalo.close();

	//Papua Barat
	json result_papua_barat = json_query(covid, "$[23].attributes");
	std::ofstream papua_barat;
	papua_barat.open("./provinsi/papua_barat.json");
	papua_barat << result_papua_barat;
	papua_barat.close();

	//Riau
	json result_riau = json_query(covid, "$[24].attributes");
	std::ofstream riau;
	riau.open("./provinsi/riau.json");
	riau << result_riau;
	riau.close();

	//Kalimantan utara
	json result_kalimantan_utara = json_query(covid, "$[25].attributes");
	std::ofstream kalimantan_utara;
	kalimantan_utara.open("./provinsi/kalimantan_utara.json");
	kalimantan_utara << result_kalimantan_utara;
	kalimantan_utara.close();

	//Lampung
	json result_lampung = json_query(covid, "$[26].attributes");
	std::ofstream lampung;
	lampung.open("./provinsi/lampung.json");
	lampung << result_lampung;
	lampung.close();

	//Sulawesi tengah
	json result_sulawesi_tengah = json_query(covid, "$[27].attributes");
	std::ofstream sulawesi_tengah;
	sulawesi_tengah.open("./provinsi/sulawesi_tengah.json");
	sulawesi_tengah << result_sulawesi_tengah;
	sulawesi_tengah.close();

	//Kepulauan bangka Belitung
	json result_kepulauan_bangka_belitung = json_query(covid, "$[28].attributes");
	std::ofstream kepulauan_bangka_belitung;
	kepulauan_bangka_belitung.open("./provinsi/kepulauan_bangka_belitung.json");
	kepulauan_bangka_belitung << result_kepulauan_bangka_belitung;
	kepulauan_bangka_belitung.close();

	//Bengkulu
	json result_bengkulu = json_query(covid, "$[29].attributes");
	std::ofstream bengkulu;
	bengkulu.open("./provinsi/bengkulu.json");
	bengkulu << result_bengkulu;
	bengkulu.close();

	//Jambi
	json result_jambi = json_query(covid, "$[30].attributes");
	std::ofstream jambi;
	jambi.open("./provinsi/jambi.json");
	jambi << result_jambi;
	jambi.close();

	//Nusa tenggara Timur
	json result_nusa_tenggara_timur = json_query(covid, "$[31].attributes");
	std::ofstream nusa_tenggara_timur;
	nusa_tenggara_timur.open("./provinsi/nusa_tenggara_timur.json");
	nusa_tenggara_timur << result_nusa_tenggara_timur;
	nusa_tenggara_timur.close();

	//Sulawesi Barat
	json result_sulawesi_barat = json_query(covid, "$[32].attributes");
	std::ofstream sulawesi_barat;
	sulawesi_barat.open("./provinsi/sulawesi_barat.json");
	sulawesi_barat << result_sulawesi_barat;
	sulawesi_barat.close();

	//Aceh
	json result_aceh = json_query(covid, "$[33].attributes");
	std::ofstream aceh;
	aceh.open("./provinsi/aceh.json");
	aceh << result_aceh;
	aceh.close();

}
