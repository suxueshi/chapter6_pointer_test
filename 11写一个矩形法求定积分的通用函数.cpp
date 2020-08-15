//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//float integral(float(*p)(float),float a,float b,int n);			//p是指向返回值为float型的函数的指针
//float fsin(float);
//float fcos(float);
//float fexp(float);
//int main() {		//求∫(0 1)sindx ∫(-1 1)cosdx ∫(0 2)exdx 的定积分
//	float a1, b1, a2, b2, a3, b3, result, (*p)(float);			//p是指向返回值为float型的函数的指针
//	int n = 20;					//相当于分成20个小矩形
//	cout << "input a1 b1: ";
//	cin >> a1 >> b1;
//	cout << "input a2 b2: ";
//	cin >> a2 >> b2;
//	cout << "input a3 b3: ";
//	cin >> a3 >> b3;
//	p = fsin;				//把p指向fsin函数
//	result = integral(p, a1, b1, n);						//把fsin函数的入口地址赋给p 在调用integral函数时，用p作为实参，把fsin的入口地址传给形参p 
//	cout << "the intergral is " << result << endl;			//这样形参p也指向fsin函数，（*p）(x)就相当于fsin(x)
//	p = fcos;				//把p指向fsin函数
//	result = integral(p, a2, b2, n);
//	cout << "the intergral is " << result << endl;
//	p = fexp;				//把p指向fsin函数
//	result = integral(p, a3, b3, n);
//	cout << "the intergral is " << result << endl;
//	return 0;
//}
//
//float integral(float(*p)(float), float a, float b, int n) {
//	int i;
//	float x, h, s;
//	h = (b - a) / n;				//每个小矩形的宽
//	x = a;							//将横坐标值定为定义域的左值a
//	s = 0;
//	for (i = 0; i <= n; i++) {
//		x = x + h;					//x为横坐标的值 (*p)(x)就是内函数值sin(x) cos(x)  e(x) 相当于小矩形的长 （*p）(x)就相当于fsin(x)
//	p = fcos;				//把p指向fsin函数
//		s = s + (*p)(x) * h;		//（*p）(x)*h 就是小矩形的面积
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