#include<iostream>
#include<locale.h>

using namespace std;

struct Zaman
{
	int saat;
	int dakika;
};

main()
{
	setlocale(LC_ALL,"turkish");
	
	Zaman zmn1,zmn2;
	cout<<"1. zamanýn saatini girin    : ";
	cin>>zmn1.saat;
	cout<<"1. zamanýn dakikasýný girin : ";
	cin>>zmn1.dakika;
	
	cout<<"2. zamanýn saatini girin    : ";
	cin>>zmn2.saat;
	cout<<"2. zamanýn dakikasýný girin : ";
	cin>>zmn2.dakika;
		
	int dkkFark;
	int saatFark;
	
	cout<<"1. zaman : "<<zmn1.saat<<":"<<zmn1.dakika<<endl;
	cout<<"2. zaman : "<<zmn2.saat<<":"<<zmn2.dakika<<endl;

	if(zmn2.dakika<zmn1.dakika)
	{
		zmn2.dakika+=60;
		zmn2.saat-=1;
	}
	dkkFark = zmn2.dakika-zmn1.dakika;
	saatFark=zmn2.saat-zmn1.saat;

	cout<<"2. zaman ile 1. zaman arasýnda "<<saatFark<<" saat "<<dkkFark<<" dakika fark vardýr..."<<endl;
	
	return 0;
	system("pause");
}
