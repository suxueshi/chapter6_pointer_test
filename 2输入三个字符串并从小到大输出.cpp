//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//
////int main() {		//用字符数组的方法
////	void swap(char*, char*);
////	char str1[20], str2[20], str3[30];
////	cout << "input three line: ";
////	gets_s(str1);
////	gets_s(str2);
////	gets_s(str3);
////	if (strcmp(str1, str2) > 0) swap(str1, str2);
////	if (strcmp(str1, str3) > 0) swap(str1, str3);
////	if (strcmp(str2, str3) > 0) swap(str2, str3);
////	cout << endl << "now the order is：" << endl;
////	cout << str1 << endl;
////	cout << str2 << endl;
////	cout << str3 << endl;
////	return 0;
////}
////void swap(char*p1, char*p2) {
////	char temp[20];
////	strcpy(temp, p1);		
////	strcpy(temp, p1);				//这个函数在字符数组上面使用的时候是有问题的
////	strcpy(temp, p1);
////}
//
//int main() {		//用字符串引用的方法
//	void change(string&, string&);
//	string s1, s2, s3;
//	cout << "input three line:" << endl;
//	getline(cin, s1);
//	getline(cin, s2);
//	getline(cin, s3);
//	if (s1 > s2) change(s1, s2);
//	if (s1 > s3) change(s1, s3);
//	if (s2 > s3) change(s2, s3);
//	cout << "now the order is" << endl;
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//}
//void change(string& a, string& b) {
//	string temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
