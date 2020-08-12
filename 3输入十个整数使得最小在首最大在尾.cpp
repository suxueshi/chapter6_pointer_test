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
//void input(int*a) {								//指针指向数组的首地址
//	int* p = a;
//	cout << "input 10 numbers: " << endl;
//	for (; p < a + 10; p++)			
//		cin >> *p;
//}
//void exchange(int* a) {							//指针指向数组的首地址
//	int* max, * min, * p, temp;
//	max = min = a;								//使得max和min都指向a[0]
//	for (p = a + 1; p < a + 10; p++)
//		if (*max < *p) max = p;					//将大数地址赋给max
//		else if (*min > * p) min = p;			//将小数地址赋给min
//	temp = a[0]; a[0] = *min; *min = temp;		//将小数和a[0]位置调换		
//	if (max == a) max = min;					//如果a[0]刚好是最大数 那么max就指向数的位置 该数和min位置已经调换 所以就指向min位置
//	temp = a[9]; a[9] = *max; *max = temp;		//将大数和a[9]位置调换
//}
//void output(int* a) {
//	cout << "now, they are: " << endl;
//	for (int i = 0; i < n; i++)
//		cout << a[i] << " ";
//}