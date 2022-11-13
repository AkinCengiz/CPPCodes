#include<iostream>

using namespace std;

main()
{
	cout<<"Adresinizi girin :"<<endl;
	char adres[200];
	cin.get(adres,200,'*');
	cout<<"Adresiniz : "<<endl<<adres<<endl;
	system("pause");
}
