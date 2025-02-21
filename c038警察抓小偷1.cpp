#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int i;
	char xiaotou;
	for(i=1;i<=4;i++)
	{
		if((i!=1)+(i==3)+(i==4)+(i!=4)==3)
		{
			xiaotou=i+64;
			cout<<xiaotou<<endl;
		}
	}
	
	return 0;
}