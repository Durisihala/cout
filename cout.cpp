// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
void test(int x)
{
	cout << x << endl;
	x = 30;
	cout << x << endl;
}
int main()
{
	int y = 100;
	cout << y << endl;
	test(y);
	cout << y << endl;
	return 0;
}
