#include<iostream>

using namespace std;

int main()
{
	int boyut1,boyut2;
	cout<<"Matrisin 1. boyutunu girin : ";
	cin>>boyut1;
	cout<<"Matrisin 2. boyutunu girin : ";
	cin>>boyut2;
	int mat1[boyut1][boyut2];
	int mat2[boyut1][boyut2];
	int toplam=0;
	for(int i=0; i<boyut1; i++)
	{
		for(int j=0; j<boyut2;j++)
		{
			cout<<"1. matrisin ["<<i<<"]["<<j<<"] indeksli elemanini girin :";
			cin>>mat1[i][j];
			cout<<"2. matrisin ["<<i<<"]["<<j<<"] indeksli elemanini girin :";
			cin>>mat2[i][j];
		}
	}
	for(int i=0;i<boyut1;i++)
	{
		for(int j=0; j<boyut2; j++)
		{
			toplam+=mat1[i][j]+mat2[i][j];
		}
	}
	cout<<"Matrislerin toplami : "<<toplam<<endl;
	system("pause");
}
