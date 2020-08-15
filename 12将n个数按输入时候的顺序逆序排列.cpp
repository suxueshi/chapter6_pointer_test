//#include<iostream>
//using namespace std;
//void sort(int*, int);
//int main() {
//	int i, n;
//	int* p, num[20];
//	cout << "input n:";
//	cin >> n;
//	cout << "input " << n << " numbers: " << endl;
//	for (i = 0; i < n; i++)
//		cin >> num[i];
//	p = &num[0];
//	sort(p, n);
//	for (i = 0; i < n; i++)
//		cout << num[i] << " ";
//	return 0;
//}
//void sort(int* p, int m) {			// 将n个数逆序排列： 一般的方法就是中心对称交换
//	int i;
//	int temp, * p1, * p2;
//	for (i = 0; i < m / 2; i++) {
//		p1 = p + i;
//		p2 = p + (m - 1 - i);
//		temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//	}
//}