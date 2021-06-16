#include <iostream>
using namespace std;

//functia sumaBanc() calculeaza suma bancnotelor introduse si returneaza suma de tip int; functia are ca parametri un array cu valoarea bancnotelor acceptate, un array cu numarul de bancnote introduse de fiecare fel si lungime array 
int sumaBanc(int valBanc[], int nrBanc[], int n)
{
    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma = suma + valBanc[i] * nrBanc[i];
    }
    return suma;
}

//functia bancnoteIntroduse() cere utilizatorului sa introduca bancnotele si returneaza numarul bancnotelor introduse de utilizator ca array cu valori de tip int, array folosit la functia sumaBanc() de mai sus
//operatorul de referinta * pentru a putea folosi si la functia rest() rezultatul functiei bancnoteIntroduse() care este un array
int* bancnoteIntroduse()
{
    //variabila nrBanc[] este statica pentru a avea spatiu alocat pe toata durata de viata a programului 
    static int nrBanc[4];
    int valBanc[] = { 1, 5, 10, 50 };

    cout << "Bancnote introduse: \n";

    //iterez prin array pentru a afisa fiecare bancnota introdusa si numarul de bancnote aferent
    for (int i = 0; i < size(valBanc); i++) {
        cout << valBanc[i] << " lei " << " x "; 
        cin >> nrBanc[i];
    }
    return nrBanc;
}
