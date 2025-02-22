//c067快速求素数 
#include <iostream>
#include <iomanip>
using namespace std;

const int n =1000;
int main(int argc, char** argv) {
	int a[n+1]; //1-100；a[i] - i是不是素数 0 不是 1 是 
	int i,j; //循环变量 
	int num; //计数器，记得清0 num=0 
	for(i=2;i<=n;i++)
	{
		a[i]=true; //假设i是素数 
	}
		
	
	a[0]=a[1]=false;//0 1 不是素数 
	
	i=1;
	do
	{
		i++;//第一个数 2，是素数 
		if(a[i])//只有素数，才否定它的倍数；提高效率 
		{
			for(j=2;j<=n/i;j++)
			{
				a[i*j]=false;
			}
		}
		
	}
	while(i<n);
	num=0; //计数器清0 
	for(i=2;i<=n;i++)
	{
		if(a[i])
		{
			cout<<setw(6)<<i;
			num++;
			if(num%10 ==0)
				cout<<endl;
		} 
	}
	cout<<endl<<"num:"<<num<<endl;
	return 0;
}
