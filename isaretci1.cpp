#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"turkish");
	int sayi1=20;
	int sayi2=30;
	int sayi3=40;
	
	cout<<"1. say� : "<<sayi1<<" "<<&sayi1<<" adresinde saklanmaktad�r..."<<endl;
	cout<<"2. say� : "<<sayi2<<" "<<&sayi2<<" adresinde saklanmaktad�r..."<<endl;
	cout<<"3. say� : "<<sayi3<<" "<<&sayi3<<" adresinde saklanmaktad�r..."<<endl;
	
	return 0;
	system("pause");
}
