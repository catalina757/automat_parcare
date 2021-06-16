#include <iostream>
using namespace std;

// antetul functiilor din alte fisiere pentru a putea fi apelate in acest fisier
int costParcare();
void rest(int c);

int main() {
	//initializare variabila c pentru a stoca rezultatul functiei costParcare() incat sa pot folosi acest rezultat ca parametru al functiei rest()
	int c = 0;
	c = costParcare();

	//apelarea functiei rest()
	rest(c);
}
