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
Erotus 14.0 kg

...
a) käytä syotto/tulostus toimintoihin funktioita
printf/scanf/gets/...(perus C:n funtiot, kirja sivu 86 - 91)  TEHDÄÄN MYÖHEMMIN*/

#include <iostream>
using namespace std;
#include <string>

void main()
{
	char nimi[30];
	int pituus;
	char osoite[30];
	int paino;
	int erotus;
	char loppu1[70];
	char loppu2[70];
	printf("Ihannepaino\n\nOhjelma laskee ihannepainosi\npituutesi perusteella.\n\nAnna nimesi > ");
	gets_s(nimi);
	printf("Anna pituutesi senttein\x84 > ");
	scanf_s("%d%*c",&pituus);
	printf("Anna osoitteesi > ");
	gets_s(osoite);
	printf("Anna painosi kiloina > ");
	scanf_s("%d",&paino);
	int ihanne = pituus - 100;
	if (paino == ihanne)
	{
		strcpy_s(loppu1, "Painosi ja ihannepainosi ero on ");
		erotus = 0;
		strcpy_s(loppu2, " kg.\nOlet ihannepainoinen!\n");
	}
	else if (paino > ihanne)
	{
		strcpy_s(loppu1, "Painosi on suurempi kuin ihannepainosi.\nSinun pit\x84isi laihduttaa ");
		erotus = paino - ihanne;
		strcpy_s(loppu2, " kg ollaksesi ihannepainoinen.\n");
	}
	else if (paino < ihanne)
	{
		strcpy_s(loppu1, "Painosi on pienempi kuin ihannepainosi.\nSinun pit\x84isi saada ");
		erotus = ihanne - paino;
		strcpy_s(loppu2, " kg lis\x84\x84 ollaksesi ihannepainoinen.\n");
	}
	printf("\n\nArvoisa %s\nOsoitteesi on %s\nNykyinen painosi on %d.0 kg\nIhannepainosi on %d.0kg\n\n%s%d%s", nimi, osoite, paino, ihanne, loppu1, erotus, loppu2);
}