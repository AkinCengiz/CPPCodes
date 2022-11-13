#include<iostream>

using namespace std;

int main()
{
	int i,fakt=1;
	cout<<"Faktoriyeli alinacak sayiyi giriniz : ";
	cin>>i;
	for(;i>1;i--)
	{
		fakt*=i;
	}
	cout<<"Girilen sayinin faktoriyeli : "<<fakt<<endl;
	
	system("pause");
	return 0;
}
