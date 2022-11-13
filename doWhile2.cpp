#include<iostream>

using namespace std;

int main()
{
	int sayi,i=0;
	cout<<"Sayiyi giriniz : ";
	cin>>sayi;
	
	do
	{
		i++;
		cout<<i<<" ";
	}while(i<sayi);
	cout<<endl;
	
	system("pause");
	return 0;
}
