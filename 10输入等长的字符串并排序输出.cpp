//#include<iostream>
//#include<string>
//using namespace std;
//void sort(string*);
//int main() {		 //�������string����ķ��� Ҳ�����ַ���ά�������ָ��һά�����ָ�������������ķ���
//	int i;
//	string str[10], * p = str;// strΪstring�����飬pΪָ��string�ͱ���������
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