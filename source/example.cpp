//Aufgabe 3.1

#include <cstdlib>  // std :: rand ()
#include <vector>  // std::vector<>
#include <list>   // std::list<>
#include <iostream>  // std :: cout
#include <iterator>  // std::ostream_iterator <>
#include <algorithm> // std::reverse, std::generate


int example() {

 std::vector<int> v0(10); // Vektor v0 mit 10 Slots
 for (std::vector<int>::iterator it = v0.begin(); it != v0.end(); ++it) { // Iteration; Vektor von (0) bis(9); it++ erhoehung um 1 
  *it = std::rand(); //Slots erhalten zufällige Zahlen
 }
 // oder
 //for (auto& v : v0) {
 // v = std::rand();
 //}

 //Vektorinhalt wird zur Ausgabe an Iterator weitergegeben 
 std::copy(std::begin(v0), std::end(v0), std::ostream_iterator<int>(std::cout, "\n"));

 std::list<int> l0(v0.size()); //erstellt eine Liste l0 mit der Groeße von v0
 std::copy(std::begin(v0), std::end(v0), std::begin(l0)); //Kopie von v0 in l0
 std::list<int> l1(std::begin(l0), std::end(l0)); //erstellt Liste l1 und uebernimmt alle Parameter von l0
 std::reverse(std::begin(l1), std::end(l1)); //Listenelemente werden umgekehrt
 std::copy(std::begin(l1), std::end(l1), std::ostream_iterator<int>(std::cout, "\n")); //gibt die Liste l1 aus

 //l1 aufsteigende Reihenfolge sortiert.
 l1.sort();
 std::copy( l1.begin(), l1.end(), std::ostream_iterator<int>(std::cout, "\n")); //Ausgabe der sortierten Liste l1

 std::generate(std::begin(v0), std::end(v0), std::rand); //v0 erhält zufällige Zahlen ("Generate" übergebene Elemente = neuer Wert; dafür genutzte Funktion durch letzten Parameter)
 std::copy( v0.rbegin(), v0.rend(), std::ostream_iterator<int>(std::cout, "\n")); //Iterator Ausgabe der Elemente von v0 in umgekehrter Reihenfolgen

 return 0;
}
