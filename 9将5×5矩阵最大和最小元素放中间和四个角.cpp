//#include<iostream>
//#include<iomanip>
//using namespace std;
//void change(int* p);
//int main() {		//����Ԫ�ط���5��5���м䣬��С�ĸ�Ԫ�صķ����ĸ���
//	int a[5][5], * p, i, j, k=0;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++) {
//			a[i][j] = 1;	//��͵������5��5��Ԫ��
//		}
//	a[4][0] = 0;
//	p = &a[0][0];
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) {
//			cout <<setw(6)<< a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	change(p);
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) {
//			cout <<setw(6)<< a[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void change(int* p) {
//	int i, j, temp;
//	int* pmax, * pmin;
//	pmax = pmin = p;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++) {									//�ο�����j=i��ʼ ��ʵ֤�� �𰸴��� Ӧ�ô�0��ʼ
//			if (*pmax < *(p + 5 * i + j)) pmax = p + 5 * i + j;
//			if (*pmin > *(p + 5 * i + j)) pmin = p + 5 * i + j;		//�ҳ����ֵ����Сֵ�ĵ�ַ��������pmax,pmin
//		}			
//	temp = *(p + 12);
//	*(p + 12) = *pmax;
//	*pmax = temp;			//�����ֵ������Ԫ�ػ���
//	temp = *p;
//	*p = *pmin;
//	*pmin = temp;			//����Сֵ�������Ͻ�
//
//
//	pmin = p + 1;			//��a[0][1]�ĵ�ַ����pmin���Ӹ�λ�ÿ�ʼ����С��Ԫ��
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			if ((*pmin > * (p + 5 * i + j)) && ((p + 5 * i + j) != p))	//�����ϵ�ַ��ȥ��	��ʵ������ij����ʾ ��  if(i==0&&j==0) continue
//				pmin = p + 5 * i + j;
//	temp = *pmin;
//	*pmin = *(p + 4);
//	*(p + 4) = temp;		//���ڶ�С��ֵ�����Ͻǵ�Ԫ�ؽ���
//
//
//	pmin = p + 1;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			if ((*pmin > * (p + 5 * i + j)) && (((p + 5 * i + j) != p)&&(p+5*i+j)!=(p+4)))	//�����Ϻ����ϵĵ�ַȥ��
//				pmin = p + 5 * i + j;
//	temp = *pmin;
//	*pmin = *(p + 20);
//	*(p + 20) = temp;		//������С��ֵ�����½ǵ�Ԫ�ؽ���
//
//
//	pmin = p + 1;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			if ((*pmin > * (p + 5 * i + j)) && (((p + 5 * i + j) != p) && (p + 5 * i + j) != (p + 4) && (p + 5 * i + j) != (p + 20)))	//������ ���� ���µĵ�ַȥ��
//				pmin = p + 5 * i + j;
//	temp = *pmin;
//	*pmin = *(p + 24);
//	*(p + 24) = temp;
//}