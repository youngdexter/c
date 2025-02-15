#include <iostream>
#include <cstring>
using namespace std;
const int maxm = 201; //背包最大容量200，应用下标1-200
const int maxn = 31;  //商品最大数量30，应用下标1-30
int w[maxn];  //每件物品重量
int c[maxn];  //每件物品价值
int f[maxn][maxm];	//f[i][v]表示前i件商品，总量不超过V的最优价值
//f[i][v]=max(f[i-1][v-w[i]]+c[i],f[i-1][v])
int m; //背包容量 10
int n; //商品数量 4

int max(int x, int y) {
	if (x < y)
		return y;
	else
		return x;
}
int main(int argc, char **argv) {
	int i, v;
	cout << "背包容量(重量):";
	cin >> m;
	cout << "商品数量:";
	cin >> n;

	for (i = 1; i <= n; i++) {
		cout << "重量 w[" << i << "] 价值 c[" << i << "] :";
		cin >> w[i] >> c[i];
	}
	
	for (i = 1; i <= n; i++) { //数量
		for (v = m; v > 0; v--) { //重量
			if(w[i]<=v)
			{
				f[i][v]=max(f[i-1][v],f[i-1][v-w[i]]+c[i]);
				cout<<"f["<<i<<"]["<<v<<"]:"<<f[i][v]<<" ";
			}
			else
			{
				f[i][v]=f[i-1][v];
				cout<<"f["<<i<<"]["<<v<<"]:"<<f[i][v]<<" ";
			}	
		}
		cout<<endl;
	}
	cout<<"f[n][m]:"<<f[n][m]<<endl;
	return 0;
}