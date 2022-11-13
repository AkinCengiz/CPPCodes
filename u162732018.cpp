#include<iostream>
#include<locale.h>

using namespace std;

//AkilliTelefon adýnda bir yapý tanýmlýyoruz.
struct AkilliTelefon{
	int agirlik;
	char renk[10];
	float android_surumu;
};

main()
{
	//Ekranýmýzda Türkçe karakter kullanmak için dili tanýmlýyoruz...
	setlocale(LC_ALL,"Turkish");
	
	//Akýllý telefon yapýsýndan telefon deðiþkeni tanýmlýyoruz...
	AkilliTelefon telefon;
	
	/*Tanýmlanan telefon deðiþkenin özelliklerini
	kullanýcýdan alýyoruz...*/
	cout<<"Akýllý telefon bilgilerini giriniz :"<<endl<<endl;
	cout<<"Aðýrlýk        : ";
	cin>>telefon.agirlik;
	
	cout<<"Renk           : ";
	cin>>telefon.renk;
	
	cout<<"Android Sürümü : ";
	cin>>telefon.android_surumu;
	cout<<endl<<endl;
	
	/*Kullanýcýdan girilen bilgiler doðrultusunda oluþturulan telefon
	deðiþkeninin özelliklerini ekrana yazdýrýyoruz...*/
	cout<<"Girilen akýllý telefonun bilgileri :"<<endl<<endl;
	cout<<"Aðýrlýk        : "<<telefon.agirlik<<endl;
	cout<<"Renk           : "<<telefon.renk<<endl;
	cout<<"Android Sürümü : "<<telefon.android_surumu<<endl;
	
	return 0;
	system("pause");
}
