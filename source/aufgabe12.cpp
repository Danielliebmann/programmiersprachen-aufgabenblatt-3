//Aufgabe 12

std::map<string, int> matrikelnummern;
//Hinzufuegen von vielen Studenten
matrikelnummern["Max Mustermann"] = 12345;
matrikelnummern["Erika Mustermann"] = 23523;
//...
exmatrikulation(matrikelnummer["Fred Fuchs"])

Probleme: Mehrere Namen? In dem Fall mehrere Freds.
Vergleich mit maps. Fred ist der Key und die Matrikelnummern sind die Werte, die dem Key zugeordnet werden.
Einschätzung: Eigentlich quatsch. Die Matrikelnummern müssten der Key sein, da sie einzigartig sind. Bei Fred kann es immer mehrere Personen geben, die Fred heißen. Deshalb müssten den Matrikelnummern Namen zugeordnet werden.

Zum Einfügen:
map[key] = std::make_pair(first, second); //Jedem Key einen Wert zuordnen

Zum Suchen:
int main ()
{
  std::map<char,int> mymap;
  std::map<char,int>::iterator it;

  mymap['a']=50;
  mymap['b']=100;
  mymap['c']=150;
  mymap['d']=200;

  it = mymap.find('b');//Jedem Key ein Wert zuordnen und über deklarierten iterator finden.
  if (it != mymap.end())
    mymap.erase (it);

Wann ist sie const?: Wenn der Wert, auf den sich der Key bezieht, nicht verändert, ist die Suche const.

