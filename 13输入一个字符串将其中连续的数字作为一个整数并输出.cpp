//#include<iostream>
//using namespace std;
//int main() {			//将一串字符串中连续的数字作为一个整数 依次存放到一个数组里 并统计有几个数 再输出
//	char str[50], * pstr;
//	int i, j, k, m, e10, digit, ndigit, a[10], * pa;
//	cout << "input a string: " << endl;
//	gets_s(str);
//	cout << endl;
//	pstr = &str[0];						//字符指针pstr指向数组str的首元素
//	pa = &a[0];							//指针pa指向a数组的首元素
//	ndigit = 0;							//ndigit代表有多少个整数
//	i = 0;								//i代表字符串中的第几个字符
//	j = 0;								//j代表连续数字的位数
//	while (*(pstr + i) != '\0') {
//		if ((*(pstr + i) > '0') && (*(pstr + i) < '9'))
//			j++;		//位数++
//		else {
//			if (j > 0) {
//				digit = *(pstr + i - 1) - 48;						//将个位数赋给digit
//				k = 1;
//				while (k < j) {
//					e10 = 1;
//					for (m = 1; m <= k; m++)
//						e10 = e10 * 10;							//e10代表该尾数所应乘的因子
//					digit = digit + (*(pstr + i - 1 - k) - 48) * e10;			//将该位数累加于digit
//					k++;		//每往前一位多乘个10
//				}
//				*pa = digit;				//将数值存放在数组a中
//				ndigit++;
//				pa++;						//指针pa指向a数组的下一个元素	
//				j = 0;						//这一个数字存完 j重新归0
//			}
//		}
//		i++;
//	}
//	if (j > 0) {											//为什么要多来一遍这个 没搞懂
//		digit = *(pstr + i - 1) - 48;						//将个位数赋给digit
//		k = 1;
//		while (k < j) {
//			e10 = 1;
//			for (m = 1; m <= k; m++)
//				e10 = e10 * 10;							//e10代表该尾数所应乘的因子
//			digit = digit + (*(pstr + i - 1 - k) - 48) * e10;			//将该位数累加于digit
//			k++;		//每往前一位多乘个10
//		}
//		*pa = digit;				//将数值存放在数组a中
//		ndigit++;
//		pa++;						//指针pa指向a数组的下一个元素	
//		j = 0;						//这一个数字存完 j重新归0
//	}
//	cout << "there are " << ndigit << " numbers int this line. they are :" << endl;
//	j = 0;
//	pa = &a[0];
//	for (j = 0; j < ndigit; j++)		//打印数字
//		cout << *(pa + j) << endl;
//	return 0;
//}