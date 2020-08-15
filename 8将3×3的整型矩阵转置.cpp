//#include<iostream>
//using namespace std;
//void move(int*p);
//int main() {
//	int a[3][3], * p, i;
//	cout << "input 3*3 matrix: " << endl;
//	for (i = 0; i < 3; i++)
//		cin >> a[i][0] >> a[i][1] >> a[i][2];
//	p = &a[0][0];	
//	move(p);									//直接move（a）不起作用 a传递不了int*类型的指针 move(a)传递的是首行一行的地址 类型为int(*p)[3] 
//	cout << "now, transpose matrix: " << endl;	//而如果把形参改成int(*p)[3]类型的指针 下面的转置操作就不易完成
//	for (i = 0; i < 3; i++)
//		cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
//	return 0;
//}
//void move(int*p) {
//	int i, j, temp;
//	for (i = 0; i < 3; i++)
//		for (j = i; j < 3; j++) {
//			temp = *(p + 3 * i + j);
//			*(p + 3 * i + j) = *(p + 3 * j + i);		//转置操作  *（p+3*i+j）就是第i行第j列的值， *（p+3*j+i）就是第j行第i列的值
//			*(p + 3 * j + i) = temp;
//		}
//}