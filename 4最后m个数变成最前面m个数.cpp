//#include<iostream>
//using namespace std;
//const int n = 9;
//const int m = 3;
//void move(int* array,int);
//int main() {				//ʹǰ�����˳�����m��λ�ã����m���������ǰ���m����
//	int a[n];
//	int i, j;
//	for (i = 0; i < n; i++)	  //˳��д��a[i]
//		a[i] = i + 1;
//	move(a,m);
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	return 0;
//}
//void move(int* array,int m) {			//ʹѭ������һ�εĺ���
//	int* p, array_end;
//	array_end = *(array + n - 1);	//��β��ȡ����
//	for (p = array + n - 1; p > array; p--)
//		*p = *(p - 1);				//β��֮ǰ�Ķ�����һ��λ��
//	*array = array_end;				//��������֮ǰ���Ǹ�β�� 
//	m--;
//	if (m > 0) move(array, m);		//�ݹ���ã���ѭ������m����0ʱ��ֹͣ����
//
//}