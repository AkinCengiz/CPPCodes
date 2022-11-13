#include<iostream>

using namespace std;

main()
{
	char cumle[100];
	cout<<"Bir cumle girin : ";
	gets(cumle);
	
	char aranan;
	cout<<"Aranacak karakteri girin : ";
	cin>>aranan;
	
	int sayac=0;
	int i=0;
	
	while(cumle[i] != '\0')
	{
		if(cumle[i]==aranan)
		{
			sayac++;
		}
		i++;
	}
	
	cout<<aranan<<" karakteri cumlede "<<sayac<<" adet kullanilmistir."<<endl;
	system("pause");
}
