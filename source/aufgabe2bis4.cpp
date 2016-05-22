#include <cstdlib>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <map>

//3.2
int main()
{
std::list <unsigned int> l0(100); //Liste mit PLatz für 100 Werte
	for (auto & l : l0) {//Füllen mit Randome werten
 	l = std::rand ()%101;
 	}

std::vector <int> v0 (std::begin(l0) , std::end(l0)); 
std::copy(std::begin(l0), std::end(l0), std::begin(v0)); //Mit copy Liste in Vektor kopiert
//3.3
std::set <int> s0 (std::begin(l0) , std::end(l0)); //Set erstellt. Alle Werte der Liste mit einbezogen
std::cout << "Größe: " << s0.size() << "\n"; //Anzahl der Werte in der Liste
std::cout <<"Alle Zahlen in nicht generierter Liste: \n";
 for (int i=1; i<101; i++)
	{
		if (s0.count(i)==0) //Zahlen, die nicht in der Liste sind, ausgeben!
		{
			std::cout << i << "\n";
		}
	}
//3.4
std::cout<<"Häufigkeit der Zahl von 0 bis 100: \n";
std::map <unsigned int,unsigned int> Haeufigkeit; //Häufigkeit durch 2 Punkte in der map

 for (auto & i : l0)
 {
	std :: cout << "Listenpunkt; " << i << "\n";	
	Haeufigkeit[i]++;
}

for (int i = 0; i <= 100 ;++i)
{
	std::cout << "Variable " << i << " kommt " << Haeufigkeit[i] << " mal vor!" << std::endl;
}

return 0;
}
