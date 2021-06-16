#include <iostream>
using namespace std;

//functia costParcare() care returneaza costTotal de tip int; functia e apelata apoi in functia main()
int costParcare()
{
	int costTotal = 0;
	int costMin = 3;
	int costMax = 120;

	//while() pentru a cere introducerea costului pana cand valoarea introdusa este o valoare valida (valoare intre 3 si 120)
	while (costTotal < costMin || costTotal > costMax) {
		cout << "Cost parcare: ";
		cin >> costTotal;

		//cin.clear() si cin.ignore() pentru a reseta valorile invalide introduse de utilizator (cum ar fi o litera in loc de cifra) si pentru ca suntem in while, cere utilizatorului din nou sa completeze costul de parcare
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		if (costTotal < costMin || costTotal > costMax) {
			cout << "Introduceti o valoare intreaga intre 3 si 120\n";
		}
	}
	return costTotal;
}