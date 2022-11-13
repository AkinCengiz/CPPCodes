#include<iostream>
#include<locale.h>

using namespace std;

struct urun
{
	int modelNo;
	int parcaNo;
	float ucret;
};
main()
{
	setlocale(LC_ALL,"turkish");
	urun urun1;
	urun1.modelNo=1903;
	urun1.parcaNo=19031903;
	urun1.ucret=19.03F;
	
	cout<<"Model   : "<<urun1.modelNo<<endl;
	cout<<"Parça   : "<<urun1.parcaNo<<endl;
	cout<<"Ücret   : "<<urun1.ucret<<endl;
	
	return 0;
	system("pause");
}
