#include<iostream>

using namespace std;

int main()
{
	cout<<"Adresi giriniz : "<<endl;
	char adres[200];
	cin.get(adres,200,'*');
	
	cout<<"Adresiniz : "<<endl<<adres<<endl;
	//puts(adres);
	
	system("pause");
}
