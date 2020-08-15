//#include<iostream>
//using namespace std;
//void sort(int** p, int n);		
//int main() {
//	int i, n, data[10], ** p, * pstr[10];
//	cout << "intput n: ";
//	cin >> n;
//	for (i = 0; i < n; i++)
//		pstr[i] = &data[i];				//将第i个整数的地址赋给指针数组pstr的第i个元素
//	cout << "input " << n << " integer numbers: " << endl;
//	for (i = 0; i < n; i++)
//		cin >> *pstr[i];
//	p = pstr;
//	sort(p, n);
//	cout << "now, the sequences is: " << endl;
//	for (i = 0; i < n; i++)
//		cout << *pstr[i] << " ";
//	return 0;
//}
//void sort(int** p, int n) {
//	int i, j, * temp;
//	for (i = 0; i < n - 1; i++) {
//		for (j = i + 1; j < n; j++) {
//			if (**(p + i) > * *(p + j)) {					//比较后交换位置
//				temp = *(p + i);					//地址交换 而不是值交换
//				*(p + i) = *(p + j);
//				*(p + j) = temp;
//			}
//		}
//	}
//}