#include<iostream>
#include<locale.h>

using namespace std;

struct ogrenci{
	char ad[10];
	char soyad[10];
	int vize;
	int final;
};

main()
{
	setlocale(LC_ALL,"turkish");
	
	ogrenci ogr;
	
	cout<<"Adýnýzý girin        : ";
	cin>>ogr.ad;
	
	cout<<"Soyadýnýzý girin     : ";
	cin>>ogr.soyad;
	
	cout<<"Vize notunuzu girin  : ";
	cin>>ogr.vize;
	
	cout<<"Final notunuzu girin : ";
	cin>>ogr.final;
	
	float basari;
	
	basari=0.4 * ogr.vize + 0.6 * ogr.final;
	
 	if(basari<50)
	{
		cout<<ogr.ad<<" "<<ogr.soyad<<" adlý öðrencinin baþarý notu : "<<basari<<endl;
		cout<<ogr.ad<<" "<<ogr.soyad<<" adlý öðrenci dersi geçemedi..."<<endl;
	}
	else
	{
		cout<<ogr.ad<<" "<<ogr.soyad<<" adlý öðrencinin baþarý notu : "<<basari<<endl;
		cout<<ogr.ad<<" "<<ogr.soyad<<" adlý öðrenci dersi baþarý ile geçti..."<<endl;
	}
	
	return 0;
	system("pause");
	
	
	
}
