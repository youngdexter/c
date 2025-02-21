//38Ë­ÊÇÐ¡Íµ 
/*
thief:wangwu
*/
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int i;
	//char xiaotou;
	string xtname[]={"zhangsan","lisi","wangwu","maliu"};
	for(i=1;i<=4;i++) 
	{
		if((i!=1)+(i==3)+(i==4)+(i!=4)==3)
		{
			//xiaotou = 'A'+i-1; 
			//cout<<"thief:"<<xiaotou<<endl;
			cout<<"thief:"<<xtname[i-1]<<endl;
		}
	}	
	 
	return 0;
}