//c067���������� 
#include <iostream>
#include <iomanip>
using namespace std;

const int n =1000;
int main(int argc, char** argv) {
	int a[n+1]; //1-100��a[i] - i�ǲ������� 0 ���� 1 �� 
	int i,j; //ѭ������ 
	int num; //���������ǵ���0 num=0 
	for(i=2;i<=n;i++)
	{
		a[i]=true; //����i������ 
	}
		
	
	a[0]=a[1]=false;//0 1 �������� 
	
	i=1;
	do
	{
		i++;//��һ���� 2�������� 
		if(a[i])//ֻ���������ŷ����ı��������Ч�� 
		{
			for(j=2;j<=n/i;j++)
			{
				a[i*j]=false;
			}
		}
		
	}
	while(i<n);
	num=0; //��������0 
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
