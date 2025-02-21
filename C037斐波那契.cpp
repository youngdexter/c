#include <iostream>
using namespace std; 
int main(int argc, char** argv) {
	long a,b,c;
	long i;
	a=b=1;
	
	for(i=3;i<=10;i++)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	
	return 0;
}