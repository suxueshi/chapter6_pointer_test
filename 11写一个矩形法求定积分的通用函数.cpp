//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//float integral(float(*p)(float),float a,float b,int n);			//p��ָ�򷵻�ֵΪfloat�͵ĺ�����ָ��
//float fsin(float);
//float fcos(float);
//float fexp(float);
//int main() {		//���(0 1)sindx ��(-1 1)cosdx ��(0 2)exdx �Ķ�����
//	float a1, b1, a2, b2, a3, b3, result, (*p)(float);			//p��ָ�򷵻�ֵΪfloat�͵ĺ�����ָ��
//	int n = 20;					//�൱�ڷֳ�20��С����
//	cout << "input a1 b1: ";
//	cin >> a1 >> b1;
//	cout << "input a2 b2: ";
//	cin >> a2 >> b2;
//	cout << "input a3 b3: ";
//	cin >> a3 >> b3;
//	p = fsin;				//��pָ��fsin����
//	result = integral(p, a1, b1, n);						//��fsin��������ڵ�ַ����p �ڵ���integral����ʱ����p��Ϊʵ�Σ���fsin����ڵ�ַ�����β�p 
//	cout << "the intergral is " << result << endl;			//�����β�pҲָ��fsin��������*p��(x)���൱��fsin(x)
//	p = fcos;				//��pָ��fsin����
//	result = integral(p, a2, b2, n);
//	cout << "the intergral is " << result << endl;
//	p = fexp;				//��pָ��fsin����
//	result = integral(p, a3, b3, n);
//	cout << "the intergral is " << result << endl;
//	return 0;
//}
//
//float integral(float(*p)(float), float a, float b, int n) {
//	int i;
//	float x, h, s;
//	h = (b - a) / n;				//ÿ��С���εĿ�
//	x = a;							//��������ֵ��Ϊ���������ֵa
//	s = 0;
//	for (i = 0; i <= n; i++) {
//		x = x + h;					//xΪ�������ֵ (*p)(x)�����ں���ֵsin(x) cos(x)  e(x) �൱��С���εĳ� ��*p��(x)���൱��fsin(x)
//	p = fcos;				//��pָ��fsin����
//		s = s + (*p)(x) * h;		//��*p��(x)*h ����С���ε����
//	}
//	return s;
//}
//float fsin(float x) {
//	return sin(x);
//}
//float fcos(float x) {
//	return cos(x);
//}
//float fexp(float x) {
//	return exp(x);
//}