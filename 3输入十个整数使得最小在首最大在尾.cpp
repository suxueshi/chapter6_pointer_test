//#include<iostream>
//#include<iomanip>
//using namespace std;
//const int n = 10;
//void input(int*);
//void exchange(int*);
//void output(int*);
//int main() {
//	int a[n];
//	input(a);
//	exchange(a);
//	output(a);
//	return 0;
//}
//void input(int*a) {								//ָ��ָ��������׵�ַ
//	int* p = a;
//	cout << "input 10 numbers: " << endl;
//	for (; p < a + 10; p++)			
//		cin >> *p;
//}
//void exchange(int* a) {							//ָ��ָ��������׵�ַ
//	int* max, * min, * p, temp;
//	max = min = a;								//ʹ��max��min��ָ��a[0]
//	for (p = a + 1; p < a + 10; p++)
//		if (*max < *p) max = p;					//��������ַ����max
//		else if (*min > * p) min = p;			//��С����ַ����min
//	temp = a[0]; a[0] = *min; *min = temp;		//��С����a[0]λ�õ���		
//	if (max == a) max = min;					//���a[0]�պ�������� ��ômax��ָ������λ�� ������minλ���Ѿ����� ���Ծ�ָ��minλ��
//	temp = a[9]; a[9] = *max; *max = temp;		//��������a[9]λ�õ���
//}
//void output(int* a) {
//	cout << "now, they are: " << endl;
//	for (int i = 0; i < n; i++)
//		cout << a[i] << " ";
//}