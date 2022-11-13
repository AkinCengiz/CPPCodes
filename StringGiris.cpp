#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char ad[10],soyad[20];
	cout<<"Adinizi giriniz  : ";
	gets(ad);
	
	cout<<"Soyadinizi giriniz : ";
	gets(soyad);
	
	cout<<"\nAd Soyad : "<<endl;
	puts(ad);
	puts(soyad);
	
	system("pause");
	return 0;
}
