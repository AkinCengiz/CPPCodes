#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char ad[10],soyad[20];
	cout<<"Ad : ";
	gets(ad);
	cout<<ad<<" "<<strlen(ad)<<" karakterdir..."<<endl;
	
	cout<<"Soyad : ";
	gets(soyad);
	cout<<soyad<<" "<<strlen(soyad)<<" karakterdir."<<endl;
	
	strcpy(ad,soyad);
	cout<<"\nKopyalama isleminden sonra ad :";
	puts(ad);
	
	cout<<"Kopyalama isleminden sonra "<<ad<<" "<<strlen(ad)<<" karakterdir..."<<endl;
	
	system("pause");
	return 0;
	
	
}
