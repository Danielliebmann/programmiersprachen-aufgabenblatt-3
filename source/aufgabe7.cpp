#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "circle.hpp"
#include <algorithm>
#include <cmath>
//Is_even/is_odd:
bool is_odd(int i){
	return (i % 2) != 0;  
}
bool is_even(int i){
	return(i % 2) == 0;
}

template <typename container, typename list>
	void swap(list a, list b, container& charlie){
	  auto temp = charlie[a]; //automatische Erkennung des Datentyps
		charlie[a]=charlie[b];
		charlie[b]=temp;
	}
template <typename container, typename func> 
	container filter(container const& charlie, func const& foxtrot){
	container newcharlie;
	 for(auto x : charlie){
		if(foxtrot(x))newcharlie.push_back(x);
		}
		return newcharlie;
	}
//Aufgabe 3.7
TEST_CASE ("Circle Pit","[3.7circ]")
{
	std::vector<Circle> circle(10); //Vektor mit 100 plaetzen
		for(int i = 0; i < 10; ++i){
		 circle[i].setradius(rand());}

std::sort(circle.begin(),circle.end()); //Sort und is_sorted
REQUIRE(std::is_sorted(circle.begin(),circle.end()));
}
//Aufgabe 3.8
TEST_CASE("Swap Template","[3.8swap]"){
    std::vector<char> garen1{'g','a','r','e','n','1'}; //mein wort garen1 zu ehren von league of legends
    swap(0,3, garen1);
    swap(1,2, garen1);//vertauscht die plaetze der Zeichen
    swap(4,5, garen1);
    REQUIRE(garen1[0]=='e');
    REQUIRE(garen1[3]=='g');
    REQUIRE(garen1[1]=='r');
    REQUIRE(garen1[2]=='a');
    REQUIRE(garen1[4]=='1');
    REQUIRE(garen1[5]=='n');
}
//Aufgabe 3.9
TEST_CASE("Lambda","[3.9Lamb]"){ //Lambda
	std::vector<Circle> circle(20); //Circle Vektor mit der Groeße 20
		for(int i = 0; i < 20; ++i){
			circle[i].setradius(rand());
		}
std::sort(circle.begin(),circle.end(), [] (Circle a, Circle b) {return a.getradius() < b.getradius();});
REQUIRE(std::is_sorted(circle.begin(), circle.end()));
}
//Aufgabe 3.10
TEST_CASE ("Transformers","[3.10trans]"){
std::vector <int> v1 {1,2,3,4,5,6,7,8,9};
std::vector <int> v2 {9,8,7,6,5,4,3,2,1};
std::vector <int> v3 (10); //für den Wert 10 (Aufgabenstellung)
std :: transform( v1.begin(), v1.end(), v2.begin(), v3.begin(), [] (int a, int b) {return a + b;});//transformation
}
//Aufgabe 3.11
TEST_CASE("Filter","[3.11filt]"){
    std::vector<int>vec1 {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    std::vector<int>aeven = filter(vec1, is_even ); //Prädikat von bool is_even
REQUIRE(std::all_of(aeven.begin(),aeven.end(), is_even)); //aeven=alleven, =gemeinsamer Container
}

int main(int argc,char*argv[]){
return Catch::Session().run(argc,argv );
}
