//#include<iostream>
//#include<string>
//using namespace std;
//
//
////void copystr(char*, char*, int);	//���ַ�����ķ���
////int main() {
////	int m;
////	char str1[20], str2[20];
////	cout << "input string: ";
////	gets_s(str1);			//�ַ��������������뷽ʽ
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
////		p1++;			//���ƶ�����m���ַ�
////	}
////	while (*p1 != '\0') {
////		*p2 = *p1;		//�����ַ�
////		p1++;
////		p2++;			
////	}
////	*p2 = '\0';			//���ַ�����2һ�������ı�־
//
//
////}
//
//int main() {			//���ַ����ķ���
//	int m, n;
//	string s1, s2="               ";  //�ַ�������һ�����飬ÿ��Ԫ�ص�ֵ�����Ըı䣬���ַ���û�г�ʼ����Ҳ���ǿմ������ǾͲ������±���ʺ͸�ֵ��������Ҫ�ӿո�
//	cout << "intput string s1:";
//	getline(cin, s1);		//�ַ������������뷽ʽ
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