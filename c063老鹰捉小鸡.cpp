//63ÀÏÓ¥×½Ğ¡¼¦ 
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int a[6];
	int i,j;
	for(i=1;i<=5;i++)
	{
		a[i]=i;
	}
	i=1;
	cout<<i<<":"; 
	for(j=1;j<=5;j++)
	{
		cout<<a[j]<<" ";
	}
	cout<<endl;
	for(i=2;i<=10;i++)
	{
		for(j=0;j<=4;j++)
		{
			a[j]=a[j+1];
		}
		a[5]=a[0];
		cout<<i<<":"; 
		for(j=1;j<=5;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}