#include <iostream>
#include <jsoncons/json.hpp>
#include <jsoncons_ext/jsonpath/jsonpath.hpp>
#include <cassert>
#include <cpr/cpr.h>
#include <fstream>
#include "function.h"

using namespace jsoncons;
using jsoncons::jsonpath::json_query;


int Number;

void Tampilan_Awal()
{
	std::cout << "============================================================== \n";
	std::cout << "=============== INFORMASI COVID 19 TERBARU ==================== \n";
	std::cout << "============================================================== \n";
	std::cout << std::endl;
	std::cout << "1. Global \n";
	std::cout << "2. Negara \n";
	std::cout << "3. Indonesia \n";
	std::cout << "4. Provinsi \n";

	std::cout << std::endl;
	std::cout << "Pilih Nomor : "; std::cin >> Number;
	std::cout << std::endl;


	if (Number == 1) {
		std::cout << "====================================" << std::endl;
		std::cout << "======= Data Covid-19 Global =======" << std::endl;
		std::cout << "====================================" << std::endl;
		std::cout << std::endl;
		buatfileGlobal();
		Global();
	}
	else if (Number == 2) {
		buatfileNegara();
		Tampilan_Negara();
		std::cout << std::endl;
		std::cout << std::endl;
		Negara();
	}
	else if (Number == 3) {
		std::cout << "Data Covid-19 Indonesia" << std::endl;
		std::cout << std::endl;
		buatfileIndo();
		Indonesia();
	}
	else if (Number == 4) {
		buatfileProvinsi();
		Tampilan_Provinsi();
		std::cout << std::endl;
		std::cout << std::endl;
		Provinsi();
	}
	else {
		std::cout << "Nomor yang anda masukkan tidak terdaftar" << std::endl; 
		std::cout << std::endl;
		Tampilan_Awal();
	}

}

void Tampilan_Negara() 
{
	std::cout << "==================================================================================================================================" << std::endl;
	std::cout << "=================================================== Data Covid-19 Negara - Negara ==============================================" << std::endl;
	std::cout << "==================================================================================================================================" << std::endl;
	std::cout << std::endl;
	std::cout << "1. Afganistan				48. Denmark				95. Kyrgyzstan				142. Rwanda" << std::endl;
	std::cout << "2. Albania				49. Diamond Princess			96. Laos				143. Saint Kitts and Nevis" << std::endl;
	std::cout << "3. Algeria				50. Djibouti				97. Latvia				144. Saint Lucia" << std::endl;
	std::cout << "4. Andorra				51. Dominica				98. Lebanon				145. Saint Vincent and the Grenadines" << std::endl;
	std::cout << "5. Angola				52. Dominician Republik			99. Lesotho				146. San Marino" << std::endl;
	std::cout << "6. Antigua and Barbuda			53. Ecuador				100. Liberia				147. Sao Tome and Principe" << std::endl;
	std::cout << "7. Argentina				54. Egypt				101. Libya				148. Saudi Arabia" << std::endl;
	std::cout << "8. Armenia				55. El Salvador				102. Liechtenstein			149. Senegal" << std::endl;
	std::cout << "9. Australia				56. Equatorial Guinea			103. Lithuania				150. Serbia" << std::endl;
	std::cout << "10. Austria				57. Eritrea				104. Lexembourg				151. Seychelles" << std::endl;
	std::cout << "11. Azerbaijan				58. Estonia				105. Madagascar				152. Sierra_leona" << std::endl;
	std::cout << "12. Bahamas				59. Eswatini				106. Malawi				153. Singapora" << std::endl;
	std::cout << "13. Bahrain				60. Ethiopia				107. Malaysia				154. Slovakia" << std::endl;
	std::cout << "14. Bangladesh				61. Fiji				108. Maldives				155. Slovenia" << std::endl;
	std::cout << "15. Barbados				62. Finland				109. Mali				156. Somalia" << std::endl;
	std::cout << "16. belarus				63. France				110. Malta				157. South Afrika" << std::endl;
	std::cout << "17. Belgium				64. Gabon				111. Mauritania				158. South Sudan" << std::endl;
	std::cout << "18. Belize				65. Gambia				112. Mauritius				159. Spain" << std::endl;
	std::cout << "19. Benin				66. Georgia				113. Mexico				160. Sri Lanka" << std::endl;
	std::cout << "20. Bhutan				67. Germany				114. Moldova				161. Sudan" << std::endl;
	std::cout << "21. Bolivia				68. Ghana				115. Monaco				162. Suriname" << std::endl;
	std::cout << "22. Bosnia and Herzegovina		69. Greece				116. Mongolia				163. Sweden" << std::endl;
	std::cout << "23. Botswana				70. Grenada				117. Montonegro				164. Switzerland" << std::endl;
	std::cout << "24. Brazil				71. Guatamala				118. Morocco				165. Syria" << std::endl;
	std::cout << "25. Brunei				72. Guinea				119. Mozambique				166. Taiwan" << std::endl;
	std::cout << "26. Bulgaria				73. Guinea Bissau			120. Ms Zaandam				167. Tajikistan" << std::endl;
	std::cout << "27. Burkina Faso			74. Guyana				121. Namibia				168. Tanzania" << std::endl;
	std::cout << "28. Burma				75. Haiti				122. Nepal				169. Thailand" << std::endl;
	std::cout << "29. Burundi				76. Holy See				123 Netherlands				170. Timor Leste" << std::endl;
	std::cout << "30. Cabo Verde				77. Honduras				124. New Zealand				171. Togo" << std::endl;
	std::cout << "31. Combadia				78. Hungary				125. Nicaragua				172. Trinidad and Tobago" << std::endl;
	std::cout << "32. Cameroon				79. Iceland				126. Niger				173. Tunisia" << std::endl;
	std::cout << "33. Canada				80. India				127. Nigeria				174. Turkey" << std::endl;
	std::cout << "34. Central African Republik		81. Indonesia				128. North Macedonia			175. Uganda" << std::endl;
	std::cout << "35. Chad				82. Iran				129. Norway				176. Ukraina" << std::endl;
	std::cout << "36. Chile				83. Iraq				130. Oman				177. United Arab Emirates" << std::endl;
	std::cout << "37. China				84. Ireland				131. Pakistan				178. United Kingdom" << std::endl;
	std::cout << "38. Colombia				85. Israel				132. Panama				179. Uruguay" << std::endl;
	std::cout << "39. Comoros				86. Italy				133. Papua New Guinea				180. US" << std::endl;
	std::cout << "40. Congo Brazzaville			87. Jamaica				134. Paraguay				181. Uzbekistan" << std::endl;
	std::cout << "41. Congo Kinshasa			88. Japan				135. Peru				182. Venezuela" << std::endl;
	std::cout << "42. Costa Rica				89. Jordan				136. Philippines				183. Vietnam" << std::endl;
	std::cout << "43. Cote d'ivoire			90. Kazakhstan				137. Poland				184. West Bank and Gaza" << std::endl;
	std::cout << "44. Croatia				91. Kenya				138. Portugal				185. Western Sahara" << std::endl;
	std::cout << "45. Cuba				92. Korea				139. Qatar				186. Yemen" << std::endl;
	std::cout << "46. Cyprus				93. Kosovo				140. Romania				187. Zambia" << std::endl;
	std::cout << "47. Czechia				94. Kuwait				141. Rusia				188. Zimbabwe" << std::endl;
	std::cout << std::endl;
}

void Tampilan_Provinsi() 
{
	std::cout << "==================================================================================" << std::endl;
	std::cout << "========================== Data Covid-19 Provinsi ================================" << std::endl;
	std::cout << "==================================================================================" << std::endl;
	std::cout << std::endl;
	std::cout << "1. Aceh					18. Kepulauan Riau" << std::endl;
	std::cout << "2. Bali					19. Lampung " << std::endl;
	std::cout << "3. Banten				20. Maluku" << std::endl;
	std::cout << "4. Bengkulu				21. Maluku Utara" << std::endl;
	std::cout << "5. Daerah Istimewa Yogyakarta		22. Nusa Tenggara Barat" << std::endl;
	std::cout << "6. DKI Jakarta				23. Nusa Tenggara Timur" << std::endl;
	std::cout << "7. Gorontalo				24. Papua" << std::endl;
	std::cout << "8. Jambi				25. Papua Barat" << std::endl;
	std::cout << "9. Jawa Barat				26. Riau" << std::endl;
	std::cout << "10. Jawa Tengah				27. Sulawesi Barat" << std::endl;
	std::cout << "11. Jawa Timur				28. Sulawesi Selatan" << std::endl;
	std::cout << "12. Kalimantan Barat			29. Sulawesi Tengah" << std::endl;
	std::cout << "13. Kalimantan Selatan			30. Sulawesi Tenggara" << std::endl;
	std::cout << "14. Kalimantan Tengah			31. Sulawesi Utara" << std::endl;
	std::cout << "15. Kalimantan Timur			32. Sumatra Barat" << std::endl;
	std::cout << "16. Kalimantan Utara			33. Sumatra Selatan" << std::endl;
	std::cout << "17. Kepulauan Bangka Belitung		34. Sumatra Utara" << std::endl;
	std::cout << std::endl;
}