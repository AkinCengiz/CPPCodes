#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"turkish");
	
	int sayi = 20;
	
	int *ptr;
	ptr=&sayi;
	
	cout<<sayi<<" de�i�keni "<<ptr<<" adresinde saklan�yor ve bu adresteki de�er : "<<*ptr<<endl;
	
	return 0;
	system("pause");
}
