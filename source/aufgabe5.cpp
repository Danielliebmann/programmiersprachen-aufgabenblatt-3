//Aufgabe 3.5

# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <algorithm> //für STL

bool is_odd(int i){
	return (i % 2) != 0;  
}
bool is_even(int i){
	return(i % 2) == 0;
}

TEST_CASE ("describe_factorial","[aufgabe3]")
{
	std::vector<unsigned int> v0(100); //100 Slots
		for(std::vector<unsigned int>::iterator it = v0.begin(); //iterator it iteriert über v0
		 it != v0.end(); ++it){ //v0.end ist ungleich v0.begin
		 *it = std::rand() % 101; //zufällige Zahlen für Vektor 
	}

v0.erase(std::remove_if(v0.begin(), v0.end(), is_odd), v0.end() );
REQUIRE(std::all_of(v0.begin(),v0.end(),is_even ));
}

int main(int argc,char*argv[])
{
return Catch::Session().run(argc,argv );
}
