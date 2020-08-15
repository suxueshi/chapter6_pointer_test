//#include<iostream>
//#include<iomanip>
//using namespace std;
//void change(int* p);
//int main() {		//最大的元素放在5×5的中间，最小四个元素的放在四个角
//	int a[5][5], * p, i, j, k=0;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++) {
//			a[i][j] = 1;	//先偷懒输入5×5的元素
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
//		for (j = 0; j < 5; j++) {									//参考答案是j=i开始 事实证明 答案错了 应该从0开始
//			if (*pmax < *(p + 5 * i + j)) pmax = p + 5 * i + j;
//			if (*pmin > *(p + 5 * i + j)) pmin = p + 5 * i + j;		//找出最大值和最小值的地址，并赋给pmax,pmin
//		}			
//	temp = *(p + 12);
//	*(p + 12) = *pmax;
//	*pmax = temp;			//将最大值与中心元素互换
//	temp = *p;
//	*p = *pmin;
//	*pmin = temp;			//将最小值放在左上角
//
//
//	pmin = p + 1;			//将a[0][1]的地址赋给pmin，从该位置开始找最小的元素
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			if ((*pmin > * (p + 5 * i + j)) && ((p + 5 * i + j) != p))	//把左上地址给去掉	其实可以用ij来表示 如  if(i==0&&j==0) continue
//				pmin = p + 5 * i + j;
//	temp = *pmin;
//	*pmin = *(p + 4);
//	*(p + 4) = temp;		//将第二小的值与右上角的元素交换
//
//
//	pmin = p + 1;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			if ((*pmin > * (p + 5 * i + j)) && (((p + 5 * i + j) != p)&&(p+5*i+j)!=(p+4)))	//把左上和右上的地址去掉
//				pmin = p + 5 * i + j;
//	temp = *pmin;
//	*pmin = *(p + 20);
//	*(p + 20) = temp;		//将第三小的值与左下角的元素交换
//
//
//	pmin = p + 1;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			if ((*pmin > * (p + 5 * i + j)) && (((p + 5 * i + j) != p) && (p + 5 * i + j) != (p + 4) && (p + 5 * i + j) != (p + 20)))	//把左上 右上 左下的地址去掉
//				pmin = p + 5 * i + j;
//	temp = *pmin;
//	*pmin = *(p + 24);
//	*(p + 24) = temp;
//}