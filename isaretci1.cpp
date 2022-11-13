#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"turkish");
	int sayi1=20;
	int sayi2=30;
	int sayi3=40;
	
	cout<<"1. sayý : "<<sayi1<<" "<<&sayi1<<" adresinde saklanmaktadýr..."<<endl;
	cout<<"2. sayý : "<<sayi2<<" "<<&sayi2<<" adresinde saklanmaktadýr..."<<endl;
	cout<<"3. sayý : "<<sayi3<<" "<<&sayi3<<" adresinde saklanmaktadýr..."<<endl;
	
	return 0;
	system("pause");
}
