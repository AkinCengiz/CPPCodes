#include<iostream>
#include<locale.h>

using namespace std;

class Tasit
{
	private:
		int uretimYili;
		
	public:
		char marka[50];
		char model[50];

	void UretimYiliniOkut(){
		cout<<"�retim y�l�n� girin : ";
		cin>>uretimYili;
	}
	
	void Yazdir()
	{
		cout<<"Marka       : "<<marka<<endl;
		cout<<"Model       : "<<model<<endl;
		cout<<"�retim Y�l� : "<<uretimYili<<endl;
	}
};

main()
{
	setlocale(LC_ALL,"turkish");
	 Tasit minibus;
	 
	 cout<<"Markay� girin   : ";
	 cin>>minibus.marka;
	 
	 cout<<"Modeli girin    : ";
	 cin>>minibus.model;
	 minibus.UretimYiliniOkut();
	 minibus.Yazdir();
	 
	 system("pause");
}
