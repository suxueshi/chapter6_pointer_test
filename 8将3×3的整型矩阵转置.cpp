//#include<iostream>
//using namespace std;
//void move(int*p);
//int main() {
//	int a[3][3], * p, i;
//	cout << "input 3*3 matrix: " << endl;
//	for (i = 0; i < 3; i++)
//		cin >> a[i][0] >> a[i][1] >> a[i][2];
//	p = &a[0][0];	
//	move(p);									//ֱ��move��a���������� a���ݲ���int*���͵�ָ�� move(a)���ݵ�������һ�еĵ�ַ ����Ϊint(*p)[3] 
//	cout << "now, transpose matrix: " << endl;	//��������βθĳ�int(*p)[3]���͵�ָ�� �����ת�ò����Ͳ������
//	for (i = 0; i < 3; i++)
//		cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
//	return 0;
//}
//void move(int*p) {
//	int i, j, temp;
//	for (i = 0; i < 3; i++)
//		for (j = i; j < 3; j++) {
//			temp = *(p + 3 * i + j);
//			*(p + 3 * i + j) = *(p + 3 * j + i);		//ת�ò���  *��p+3*i+j�����ǵ�i�е�j�е�ֵ�� *��p+3*j+i�����ǵ�j�е�i�е�ֵ
//			*(p + 3 * j + i) = temp;
//		}
//}