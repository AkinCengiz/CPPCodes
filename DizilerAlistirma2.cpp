#include<iostream>

using namespace std;

int main()
{
	int boyut;
	cout<<"Tanimlanacak dizinin boyutunu girin : ";
	cin>>boyut;
	int dizi[boyut];
	int maks=0, min=0,minind=0,maksind=0;
	
	for(int i=0; i<boyut; i++)
	{
		cout<<i+1<<". elamani girin : ";
		cin>>dizi[i];
	}
	for(int i=0; i<boyut;i++)
	{
		if(i==0)
		{
			min=dizi[i];
			minind=i+1;
			maks=dizi[i];
			maksind=i+1;
		}
		if(dizi[i]<min)
		{
			min=dizi[i];
			minind=i+1;
		}
		if(dizi[i]>maks)
		{
			maks=dizi[i];
			maksind=i+1;
		}
		cout<<endl;
	}
	cout<<"Dizinin en kucuk elemani : "<<minind<<". indeksteki "<<min<<" dir."<<endl;
	cout<<"Dizinin en buyuk elemani : "<<maksind<<". indeksteki "<<maks<<" dir."<<endl;
	system("pause");
}
