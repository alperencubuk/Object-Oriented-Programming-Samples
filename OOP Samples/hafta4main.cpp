#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class futbol_takimi
{
	string takim_adi;
	int galibiyet, maglubiyet, beraberlik, attigi_gol, yedigi_gol, averaj, puan;
	void puan_hesapla();
public:
	void yazdir() const;
	void setle(string, int, int, int, int, int);
	bool karsilastir(const futbol_takimi &) const;
};

void futbol_takimi::yazdir() const
{
	cout << takim_adi << '\t' << galibiyet << '\t' << maglubiyet << '\t' << beraberlik << '\t' << attigi_gol << '\t' << yedigi_gol << '\t' << averaj << '\t' << puan << endl;
}

void futbol_takimi::setle(string ad, int g, int m, int b, int a, int y)
{
	takim_adi = ad;
	galibiyet = g;
	maglubiyet = m;
	beraberlik = b;
	attigi_gol = a;
	yedigi_gol = y;
	puan_hesapla();
}

bool futbol_takimi::karsilastir(const futbol_takimi &diger) const
{
	if (puan > diger.puan)
		return true;
	if (puan==diger.puan && averaj >= diger.averaj)
		return true;
	return false;
}

void futbol_takimi::puan_hesapla()
{
	puan = galibiyet * 3 + beraberlik;
	averaj = attigi_gol - yedigi_gol;
}

void sirala(futbol_takimi *takimlar, int takim_sayisi)
{
	int konum;
	futbol_takimi temp;
	for (int i = 0; i < (takim_sayisi - 1); i++)
	{
		konum = i;
		for (int j = i + 1; j < takim_sayisi; j++)
		{
			if (!takimlar[konum].karsilastir(takimlar[j]))
				konum = j;
		}
		if (konum != i)
		{
			temp = takimlar[i];
			takimlar[i] = takimlar[konum];
			takimlar[konum] = temp;
		}
	}
}

int main()
{
	futbol_takimi takimlar[5];
	ifstream giris("giris.txt");
	string ad;
	int g, m, b, a, y;
	for (int i = 0; i < 5; i++)
	{
		giris >> ad >> g >> m >> b >> a >> y;
		takimlar[i].setle(ad, g, m, b, a, y);
	}
	sirala(takimlar, 5);
	cout << "Takim" << '\t' << "Galip" << '\t' << "Maglup" << '\t' << "Beraber" << '\t' << "Attigi" << '\t' << "Yedigi" << '\t' << "Averaj" << '\t' << "Puan" << endl;
	for (int i = 0; i < 5; i++)
		takimlar[i].yazdir();

	cin >> ad;
	return 0;
}

