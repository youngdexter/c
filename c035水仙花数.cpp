//35Ë®ÏÉ»¨Êý
/*
153 370 371 407
*/
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int i;
	int ge,shi,bai;
	
	for(i=100;i<=999;i++)
	{
		ge = i%10;
		shi=(i%100)/10;  //shi=(i/10)%10£»
		bai = i/100;
		 
		if(i==ge*ge*ge+shi*shi*shi+bai*bai*bai)
		{
			cout<<i<<" ";
		}
	}
		
	 
	return 0;
}