#include<iostream>

using namespace std;

int main()
{
	int dizi[5];
	float toplam=0;
	float ortalama;
	
	for(int i =0;i<5;i++)
	{
		cout<<i+1<<". degeri girin :"<<endl;
		cin>>dizi[i];
		
		toplam+=dizi[i];
	}
	
	ortalama=toplam/5;
	cout<<"Ortalama : "<<ortalama<<endl;
	system("pause");
}
