#include<iostream>
#include<locale.h>

using namespace std;

class Tasit{
	private:
		int uretimyili;
		
	public:
		char marka[50];
		char model[50];
		
		Tasit()
		{
			cout<<"Markayi girin       : ";
			cin>>marka;
			cout<<"Modeli girin        : ";
			cin>>model;
			//uretimYiliniOkut();
		}
		void UretimYiliniOkut()
		{
			cout<<"�retim y�l�n� girin : ";
			cin>>uretimyili;
		}
		void Yazdir()
		{
			cout<<"Marka       : "<<marka<<endl;
			cout<<"Model       : "<<model<<endl;
			cout<<"�retim Y�l� : "<<uretimyili<<endl;
		}
};
main()
{
	setlocale(LC_ALL,"turkish");
	
	Tasit minibus;
	
	minibus.UretimYiliniOkut();
	minibus.Yazdir();
	
	system("pause");
	
}
