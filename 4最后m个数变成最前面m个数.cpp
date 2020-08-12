//#include<iostream>
//using namespace std;
//const int n = 9;
//const int m = 3;
//void move(int* array,int);
//int main() {				//使前面各数顺序后移m个位置，最后m个数变成最前面的m个数
//	int a[n];
//	int i, j;
//	for (i = 0; i < n; i++)	  //顺序写入a[i]
//		a[i] = i + 1;
//	move(a,m);
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	return 0;
//}
//void move(int* array,int m) {			//使循环后移一次的函数
//	int* p, array_end;
//	array_end = *(array + n - 1);	//把尾数取出来
//	for (p = array + n - 1; p > array; p--)
//		*p = *(p - 1);				//尾数之前的都后移一个位置
//	*array = array_end;				//首数等于之前的那个尾数 
//	m--;
//	if (m > 0) move(array, m);		//递归调用，当循环次数m减至0时，停止调用
//
//}