//#include<iostream>
//using namespace std;
//int main() {			//��һ���ַ�����������������Ϊһ������ ���δ�ŵ�һ�������� ��ͳ���м����� �����
//	char str[50], * pstr;
//	int i, j, k, m, e10, digit, ndigit, a[10], * pa;
//	cout << "input a string: " << endl;
//	gets_s(str);
//	cout << endl;
//	pstr = &str[0];						//�ַ�ָ��pstrָ������str����Ԫ��
//	pa = &a[0];							//ָ��paָ��a�������Ԫ��
//	ndigit = 0;							//ndigit�����ж��ٸ�����
//	i = 0;								//i�����ַ����еĵڼ����ַ�
//	j = 0;								//j�����������ֵ�λ��
//	while (*(pstr + i) != '\0') {
//		if ((*(pstr + i) > '0') && (*(pstr + i) < '9'))
//			j++;		//λ��++
//		else {
//			if (j > 0) {
//				digit = *(pstr + i - 1) - 48;						//����λ������digit
//				k = 1;
//				while (k < j) {
//					e10 = 1;
//					for (m = 1; m <= k; m++)
//						e10 = e10 * 10;							//e10�����β����Ӧ�˵�����
//					digit = digit + (*(pstr + i - 1 - k) - 48) * e10;			//����λ���ۼ���digit
//					k++;		//ÿ��ǰһλ��˸�10
//				}
//				*pa = digit;				//����ֵ���������a��
//				ndigit++;
//				pa++;						//ָ��paָ��a�������һ��Ԫ��	
//				j = 0;						//��һ�����ִ��� j���¹�0
//			}
//		}
//		i++;
//	}
//	if (j > 0) {											//ΪʲôҪ����һ����� û�㶮
//		digit = *(pstr + i - 1) - 48;						//����λ������digit
//		k = 1;
//		while (k < j) {
//			e10 = 1;
//			for (m = 1; m <= k; m++)
//				e10 = e10 * 10;							//e10�����β����Ӧ�˵�����
//			digit = digit + (*(pstr + i - 1 - k) - 48) * e10;			//����λ���ۼ���digit
//			k++;		//ÿ��ǰһλ��˸�10
//		}
//		*pa = digit;				//����ֵ���������a��
//		ndigit++;
//		pa++;						//ָ��paָ��a�������һ��Ԫ��	
//		j = 0;						//��һ�����ִ��� j���¹�0
//	}
//	cout << "there are " << ndigit << " numbers int this line. they are :" << endl;
//	j = 0;
//	pa = &a[0];
//	for (j = 0; j < ndigit; j++)		//��ӡ����
//		cout << *(pa + j) << endl;
//	return 0;
//}