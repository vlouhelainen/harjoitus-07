/*		Valtteri Louhelainen

Tee ohjelma, joka kysyy käyttäjältä nimen, pituuden sentteinä ja painon kiloina.
Ohjelma laskee ja tulostaa käyttäjän ihannepainon (pituus-100). Lisäksi
ohjelma kertoo käyttäjän nykyisen painon eron kiloina verrattuna ihanne-
painoon. Ohjelman käyttöliittymä toimii seuraavasti:

Ihannepaino

Ohjelma laskee ihannepainosi
pituutesi perusteella.

Anna nimesi > Mooses
Anna pituutesi sentteinä > 175
Anna osoitteesi > Peikkovuori 5 as 4
Anna painosi kiloina > 89


Arvoisa Mooses
Osoitteesi on Peikkovuori 5 as 4
Nykyinen painosi 89.0 kg
Ihannepainosi 75.0 kg
Erotus 14.0 kg*/

#include <iostream>
#include <string>
using namespace std;

void main()
{
	string nimi;
	int pituus;
	string osoite;
	int paino;
	int erotus;
	string loppu1;
	string loppu2;
	cout << "Ihannepaino\n\nOhjelma laskee ihannepainosi\npituutesi perusteella.\n\nAnna nimesi > ";
	cin >> nimi;
	cout << "Anna pituutesi senttein\x84 > ";
	cin >> pituus;
	cout << "Anna osoitteesi > ";
	cin >> osoite;
	cout << "Anna painosi kiloina > ";
	cin >> paino;
	int ihanne = pituus - 100;
	if (paino == ihanne)
	{
		loppu1 = "Painosi ja ihannepainosi ero on ";
		erotus = 0;
		loppu2 = " kg.\nOlet ihannepainoinen!\n";
	}
	else if (paino > ihanne)
	{
		loppu1 = "Painosi on suurempi kuin ihannepainosi.\nSinun pit\x84isi laihduttaa ";
		erotus = paino - ihanne;
		loppu2 = " kg ollaksesi ihannepainoinen.\n";
	}
	else if (paino < ihanne)
	{
		loppu1 = "Painosi on pienempi kuin ihannepainosi.\nSinun pit\x84isi saada ";
		erotus = ihanne - paino;
		loppu2 = " kg lis\x84\x84 ollaksesi ihannepainoinen.\n";
	}
	cout << "\n\nArvoisa " << nimi << "\nOsoitteesi on " << osoite << "\nNykyinen painosi on " << paino
		<< ".0 kg\nIhannepainosi on " << ihanne << ".0kg\n\n"<<loppu1<<erotus<<loppu2;
}