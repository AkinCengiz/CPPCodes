#include<iostream>
#include<locale.h>

using namespace std;

//AkilliTelefon ad�nda bir yap� tan�ml�yoruz.
struct AkilliTelefon{
	int agirlik;
	char renk[10];
	float android_surumu;
};

main()
{
	//Ekran�m�zda T�rk�e karakter kullanmak i�in dili tan�ml�yoruz...
	setlocale(LC_ALL,"Turkish");
	
	//Ak�ll� telefon yap�s�ndan telefon de�i�keni tan�ml�yoruz...
	AkilliTelefon telefon;
	
	/*Tan�mlanan telefon de�i�kenin �zelliklerini
	kullan�c�dan al�yoruz...*/
	cout<<"Ak�ll� telefon bilgilerini giriniz :"<<endl<<endl;
	cout<<"A��rl�k        : ";
	cin>>telefon.agirlik;
	
	cout<<"Renk           : ";
	cin>>telefon.renk;
	
	cout<<"Android S�r�m� : ";
	cin>>telefon.android_surumu;
	cout<<endl<<endl;
	
	/*Kullan�c�dan girilen bilgiler do�rultusunda olu�turulan telefon
	de�i�keninin �zelliklerini ekrana yazd�r�yoruz...*/
	cout<<"Girilen ak�ll� telefonun bilgileri :"<<endl<<endl;
	cout<<"A��rl�k        : "<<telefon.agirlik<<endl;
	cout<<"Renk           : "<<telefon.renk<<endl;
	cout<<"Android S�r�m� : "<<telefon.android_surumu<<endl;
	
	return 0;
	system("pause");
}
