//c068谁大谁小 
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int a,b,c,d;
	bool tj[4];//tj[i] 第i+1次是否猜对一半 
	
	for(a=1;a<=4;a++)
		 for(b=1;b<=4;b++)
		 	for(c=1;c<=4;c++)
		 	{
		 		d=(1+2+3+4)-a-b-c;//降重循环4->3 
		 		if(a*b*c*d ==1*2*3*4)//保证abcd互不相等
				{
					tj[0]=(b==1)+(d==4)+(c==3)+(a==2)==2;
					tj[1]=(d==1)+(b==4)+(c==2)+(a==3)==2; 
					tj[2]=(d==4)+(b==3)==1; 
					tj[3]=(b==1)+(a==4)+(d==3)+(c==2)==2;  
				
					if(tj[0]&&tj[1]&&tj[2]&&tj[3])
					{
						cout<<"a:"<<a<<endl;
						cout<<"b:"<<b<<endl;
						cout<<"c:"<<c<<endl;
						cout<<"d:"<<d<<endl;
					}
				
				} 
				
		 	}
	return 0;
}
