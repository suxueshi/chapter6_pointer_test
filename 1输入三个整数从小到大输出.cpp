//#include<iostream>
//using namespace std;
//
//
////int main() {		//����ָ������ķ���
////	void swap(int* p1, int* p2);
////	int n1, n2, n3;
////	cout << "please input three integers: ";
////	cin >> n1 >> n2 >> n3;
////	int* p1, * p2, * p3;
////	p1 = &n1;
////	p2 = &n2;
////	p3 = &n3;
////	if (n1 > n2) swap(p1, p2);
////	if (n1 > n3) swap(p1, p3);
////	if (n2 > n3) swap(p2, p3);
////	cout << "now,the order is " << n1 << " " << n2 << " " << n3 << endl;
////	return 0;
////}
////void swap(int* p1, int* p2) {
////	int temp;
////	temp = *p1;
////	*p1 = *p2;
////	*p2 = temp;
////}
//
//
//	
//int main() {						//�������õķ���
//	void swap(int& x, int& y);
//	int n1, n2, n3;
//	cout << "please input three integers: ";
//	cin >> n1 >> n2 >> n3;
//	if (n1 > n2) swap(n1, n2);		//���õ�ʱ��x y�ֱ����n1 �� n2�ı��
//	if (n1 > n3) swap(n1, n3);
//	if (n2 > n3) swap(n2, n3);
//	cout << "now,the order is " << n1 << " " << n2 << " " << n3 << endl;
//	return 0;
//}
//void swap(int& x, int& y) {
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//}