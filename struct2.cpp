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
	
	cout<<"Ad�n�z� girin        : ";
	cin>>ogr.ad;
	
	cout<<"Soyad�n�z� girin     : ";
	cin>>ogr.soyad;
	
	cout<<"Vize notunuzu girin  : ";
	cin>>ogr.vize;
	
	cout<<"Final notunuzu girin : ";
	cin>>ogr.final;
	
	float basari;
	
	basari=0.4 * ogr.vize + 0.6 * ogr.final;
	
 	if(basari<50)
	{
		cout<<ogr.ad<<" "<<ogr.soyad<<" adl� ��rencinin ba�ar� notu : "<<basari<<endl;
		cout<<ogr.ad<<" "<<ogr.soyad<<" adl� ��renci dersi ge�emedi..."<<endl;
	}
	else
	{
		cout<<ogr.ad<<" "<<ogr.soyad<<" adl� ��rencinin ba�ar� notu : "<<basari<<endl;
		cout<<ogr.ad<<" "<<ogr.soyad<<" adl� ��renci dersi ba�ar� ile ge�ti..."<<endl;
	}
	
	return 0;
	system("pause");
	
	
	
}
