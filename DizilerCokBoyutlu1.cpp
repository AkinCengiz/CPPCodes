#include<iostream>

using namespace std;

int main()
{
	int notlar[4][3];
	
	for(int i=0; i<4;i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<i+1<<". ogrencinin "<<j+1<<". notunu girin : ";
			cin>>notlar[i][j];
		}
	}
	cout<<endl;
	
	for(int i=0; i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<i+1<<". ogrencinin "<<j+1<<". notu : "<<notlar[i][j]<<endl;
		}
		cout<<endl;
	}
	system("pause");
}
