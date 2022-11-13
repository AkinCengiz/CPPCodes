#include<iostream>

using namespace std;

int main()
{
	int boyut;
	cout<<"Tanimlanacak dizinin eleman sayisini giriniz : ";
	cin>>boyut;
	float toplam=0;
	float ortalama;
	
	int dizi[boyut];
	
	for(int i=0;i<boyut;i++)
	{
		cout<<i+1<<". elemani girin : ";
		cin>>dizi[i];
		toplam+=dizi[i];
	}
	ortalama=toplam/boyut;
	cout<<"Dizideki elemanlarin toplaminin ortalamasi :"<<ortalama<<endl;
	system("pause");
}
