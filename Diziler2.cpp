#include<iostream>

using namespace std;

int main()
{
	int gun[]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	for(int i =0;i<12;i++)
	{
		cout<<i+1<<". ay "<<gun[i]<<" gundur."<<endl;
	}
	system("pause");
}
