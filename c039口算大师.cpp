#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 
int main(int argc, char** argv) {
	int x,y,symbol,ans;
	int t,n,sum;	
	srand(time(0));
	sum=0;
	for(int i = 1;i<=5;i++)
	{
		x=rand()%9+1;
		y=rand()%9+1;
		symbol=rand()%2;
	
		if(x<y && symbol==1)
		{
			t=x;x=y;y=t;
		}
		switch(symbol)
		{
			case 0:
				cout<<x<<"+"<<y<<"=";
				ans=x+y;
				break;
			case 1:
				cout<<x<<"-"<<y<<"=";
				ans=x-y;
				break;
		}
		cin>>n;
		if(n==ans)
		{
			sum=sum+10;
			cout<<" right"<<endl;
		}
		else
		{
			cout<<" wrong"<<endl;
		}
	}
	
	cout<<"score:"<<sum<<endl;
	return 0;
}