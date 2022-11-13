#include<iostream>

using namespace std;

int main()
{
	int boyut;
	cout<<"Tanimlanacak dizilerin boyutunu girin : ";
	cin>>boyut;
	int dizi1[boyut];
	int dizi2[boyut];
	bool varMi=false;
	
	for(int i=0;i<boyut;i++)
	{
		cout<<"1. dizinin "<<i+1<<". elemanini girin :";
		cin>>dizi1[i];
		cout<<"2. dizinin "<<i+1<<". elemanini girin :";
		cin>>dizi2[i];
	}
	for(int i=0; i<boyut;i++)
	{
		for(int j=0; j<boyut; j++)
		{
			if(dizi1[i]==dizi2[j])
			{
				varMi=true;
				break;
			}
			varMi=false;
		}
		if(varMi==false)
		{
			break;
		}
	}
	if(varMi==true)
	{
		cout<<"Diziler birbirlerine birebir esittir..."<<endl;
	}
	else
	{
		cout<<"Diziler birbirlerine birebir esit degildir..."<<endl;
	}
	system("pause");
}
