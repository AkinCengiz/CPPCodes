#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char ad[10],soyad[20];
	
	cout<<"Ad    : ";
	gets(ad);
	
	cout<<"Soyad : ";
	gets(soyad);
	
	cout<<"Ad soyad : "<<ad<<" "<<soyad<<endl;
	
	strcat(ad,soyad);
	puts(ad);
	
	system("pause");
	return 0;
}
