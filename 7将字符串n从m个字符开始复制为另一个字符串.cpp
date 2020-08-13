//#include<iostream>
//#include<string>
//using namespace std;
//
//
////void copystr(char*, char*, int);	//用字符数组的方法
////int main() {
////	int m;
////	char str1[20], str2[20];
////	cout << "input string: ";
////	gets_s(str1);			//字符数组用这种输入方式
////	cout << "which character do you want begin to copy? : ";
////	cin >> m;
////	if (strlen(str1) < m)
////		cout << "input error!" << endl;
////	else {
////		copystr(str1, str2, m);
////		cout << "result: " << str2 << endl;
////	}
////	return 0;
////}
////void copystr(char* p1, char* p2, int m) {
////	int n = 0;
////	while (n<m-1)
////	{
////		n++;
////		p1++;			//先移动到第m个字符
////	}
////	while (*p1 != '\0') {
////		*p2 = *p1;		//复制字符
////		p1++;
////		p2++;			
////	}
////	*p2 = '\0';			//给字符数组2一个结束的标志
//
//
////}
//
//int main() {			//用字符串的方法
//	int m, n;
//	string s1, s2="               ";  //字符数组是一个数组，每个元素的值都可以改变，而字符串没有初始化（也就是空串），那就不能用下标访问和赋值，所以需要加空格
//	cout << "intput string s1:";
//	getline(cin, s1);		//字符串用这种输入方式
//	n = s1.size();
//	cout << "which character do you want begin to copy? : ";
//	cin >> m;
//	if (n < m)
//		cout << "input error!" << endl;
//	else {
//		for (int i = 0; i < n - m + 1; i++)
//			s2[i] = s1[m - 1 + i];
//		s2[n - m + 1] = '\0';
//		cout << "result: " << s2 << endl;
//	}
//	return 0;
//}