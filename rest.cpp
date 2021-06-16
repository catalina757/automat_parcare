#include <iostream>
using namespace std;

int* bancnoteIntroduse();
int sumaBanc(int valBanc[], int nrBanc[], int n);

// functie de tip void care calculeaza/afiseaza suma de restituit si numarul bancnotelor de restituit
void rest(int c) {
	//preiau din functia bancnoteIntroduse() array-ul cu numarul bancnotelor de fiecare fel introduse
	int* nrBanc = bancnoteIntroduse();

	int valBanc[] = { 1, 5, 10, 50 };

	//suma bancnotelor introduse preluata din functia sumaBanc()
	int sumaBancn = sumaBanc(valBanc, nrBanc, size(valBanc));

	//atat timp cat suma introdusa e mai mica decat costul sau suma introdusa e mai mare de 150 lei, reia introducerea bancnotelor
	while (sumaBancn < c || sumaBancn > 150) {
		cout << "Ati introdus o suma prea mica sau prea mare: " << sumaBancn << "lei. Bancnotele v-au fost restituite. Incercati din nou!" << "\n \n";

		//apelez din nou functia de introducere a bancnotelor
		bancnoteIntroduse();

		//recalculez suma introdusa
		sumaBancn = sumaBanc(valBanc, nrBanc, size(valBanc));
	}

	//valoarea rest ca diferenta intre suma bancnotelor introduse si cost (c este rezultatul functiei costParcare())
	int rest = sumaBancn - c;

	cout << "Rest calculat: "
		<< sumaBancn << " - " << c
		<< " = " << rest << "\n";

	cout << "Bancnote restituite:\n";

	//iterez prin array valBanc[], acelasi ca cel folosit si la suma bancnotelor introduse (acolo aveam nevoie de toate cele 4 tipuri de bancnote), dar in acest for plec de la penultimul element (nu am voie sa dau ca rest bancnote de 50) al array-ului catre primul
	for (int i = size(valBanc) - 2; i >= 0; i--) {
		//variabila de tip int restImpart reprezinta restul impartirii sumei de restituit la valoarea bancnotei
		int restImpart = rest % valBanc[i];

		//nrBanc[i] reprezinta numarul de bancnote de fiecare fel de restituit
		nrBanc[i] = (rest - restImpart) / valBanc[i];

		//noul rest devine restul impartirii de mai sus, si pentru ca suntem in for, trece la urmatoarea bancnota si reia calculul
		rest = restImpart;

		cout << nrBanc[i] << " x " << valBanc[i] << " lei" << "\n";
	}
}
