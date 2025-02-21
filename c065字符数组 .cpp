//65×Ö·ûÊı×é 
/*
hello.i am a student.
hello.i am a student.
num:21
.:2
*/ 
#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char** argv) {
	char str[2000];
	int i;
	int num=0;
	int numa=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		num++;
		if(str[i] =='.')
		  numa++;
	}
	
	puts(str);
	cout<<"num:"<<num<<endl;
	cout<<".:"<<numa<<endl; 
	return 0;
}