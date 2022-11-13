#include<iostream>

using namespace std;

int main()
{
	int i=0;
	do
	{
		cout<<++i<<" ";
		if(i%10==0)
		{
			cout<<endl;
		}
	}while(i<100);
	
	system("pause");
	return 0;
}
