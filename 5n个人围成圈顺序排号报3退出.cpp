#include<iostream>
using namespace std;
const int n = 7;
const int m = 3;
void move(int* array, int);
int main() {		//n����Χ��һȦ˳���źţ��ӵ�һ���˿�ʼ1 2 3������������3�����˳�Ȧ�ӣ����������������ԭ�����ڵڼ���
	int i;
	int a[n];
	cout << "the number of the person is " << n << endl;
	for (i = 0; i < n; i++)
		a[i] = i + 1;				//�ȸ�n���˱�Ŵ�1��n
	move(a, m);
	cout << "the last one is NO.";
	for (i = 0; i < n; i++)
		if (a[i] != 0)
			cout << i + 1 << endl;
	return 0;
}
void move(int* array, int m) {
	int i = 0;						//iΪÿ�α�����ʱ���˵ı�� ��������λ  
	int k = 0;						//k��1 2 3 ����ʱ��������
	int leave = 0;					//leaveΪ�˳�����
	int* p = array;
	while (leave<n-1)				//���˳�������n-1��ʱ ��Ϊ�˳���������1ʱִ��ѭ����
	{	
		if (*(p + i) != 0) k++;		//����
		if (k == 3) {
			*(p + i) = 0;			//���˳����˵ı������Ϊ0
			k = 0;
			leave++;
		}
		i++;						//����
		if (i == n)i = 0;			//������β�� i�ָ�0
	}

}