#include <iostream>
using namespace std; 
int main(int argc, char** argv) {
	int i;
	char xiaotou;
	xiaotou='A'; //65
	for(i=1;i<=4;i++)
	{
		if((i!=1)+(i==3)+(i==4)+(i!=4)==3)
		{
			xiaotou=xiaotou+i-1;
			cout<<xiaotou<<endl;
			break;
			
	    }
	}
	return 0;
}