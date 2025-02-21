//64ÌøÉş±ÈÈü
/*
nums:126 80 98 158 204
204 158 126 98 80
*/ 
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int a[6];
	int i,j;
	cout<<"nums:";
	for(i=1;i<=5;i++)
	{
		cin>>a[i];
	}
	for(i=5;i>=2;i--)
		for(j=1;j<=i-1;j++)
		{   
			//if(a[j]>a[j+1])//small->big
			if(a[j]<a[j+1])//big->small
			{
				a[0] = a[j];
				a[j] = a[j+1];
				a[j+1] = a[0];				
			}
		}
	
	for(i=1;i<=5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}