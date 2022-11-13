#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"turkish");
	
	int sayi = 20;
	
	int *ptr;
	ptr=&sayi;
	
	cout<<sayi<<" deðiþkeni "<<ptr<<" adresinde saklanýyor ve bu adresteki deðer : "<<*ptr<<endl;
	
	return 0;
	system("pause");
}
