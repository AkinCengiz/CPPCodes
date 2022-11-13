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
		cout<<"Üretim yýlýný girin : ";
		cin>>uretimYili;
	}
	
	void Yazdir()
	{
		cout<<"Marka       : "<<marka<<endl;
		cout<<"Model       : "<<model<<endl;
		cout<<"Üretim Yýlý : "<<uretimYili<<endl;
	}
};

main()
{
	setlocale(LC_ALL,"turkish");
	 Tasit minibus;
	 
	 cout<<"Markayý girin   : ";
	 cin>>minibus.marka;
	 
	 cout<<"Modeli girin    : ";
	 cin>>minibus.model;
	 minibus.UretimYiliniOkut();
	 minibus.Yazdir();
	 
	 system("pause");
}
