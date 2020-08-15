//#include<iostream>
//#include<string>
//using namespace std;
//void sort(string*);
//int main() {		 //本解采用string数组的方法 也可以字符二维数组或者指向一维数组的指针作函数参数的方法
//	int i;
//	string str[10], * p = str;// str为string型数组，p为指向string型变量的数组
//	cout << "input 10 strings: " << endl;
//	for (i = 0; i < 10; i++) {			
//		cin >> str[i];
//	}
//	sort(p);
//	cout << "now the sequence is: " << endl;
//	for (i = 0; i < 10; i++) {
//		cout << str[i] << endl;
//	}
//	return 0;
//}
//void sort(string* p) {
//	int i, j;
//	string temp;
//	for (i = 0; i < 9; i++)
//		for (j = i; j < 9; j++)
//			if (p[j] > p[j + 1]) {
//				temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//}