#include<iostream>
using namespace std;
const int n = 7;
const int m = 3;
void move(int* array, int);
int main() {		//n个人围成一圈顺序排号，从第一个人开始1 2 3报数，凡报到3的人退出圈子，问最后留下来的人原来排在第几号
	int i;
	int a[n];
	cout << "the number of the person is " << n << endl;
	for (i = 0; i < n; i++)
		a[i] = i + 1;				//先给n个人编号从1到n
	move(a, m);
	cout << "the last one is NO.";
	for (i = 0; i < n; i++)
		if (a[i] != 0)
			cout << i + 1 << endl;
	return 0;
}
void move(int* array, int m) {
	int i = 0;						//i为每次报数的时候人的编号 类似于座位  
	int k = 0;						//k按1 2 3 报数时记数变量
	int leave = 0;					//leave为退出人数
	int* p = array;
	while (leave<n-1)				//当退出人数比n-1少时 即为退出人数大于1时执行循环体
	{	
		if (*(p + i) != 0) k++;		//记数
		if (k == 3) {
			*(p + i) = 0;			//将退出的人的编号设置为0
			k = 0;
			leave++;
		}
		i++;						//报数
		if (i == n)i = 0;			//报数到尾后 i恢复0
	}

}